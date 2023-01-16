module.exports = grammar({
  name: "firrtl",
  word: ($) => $.identifier,
  externals: ($) => [$._newline, $._indent, $._dedent],
  rules: {
    circuit: ($) =>
      seq("circuit", $.identifier, ":", $._newline, $._indent, repeat($.module), $._dedent),

    module: ($) =>
      choice(
        seq(
          "module",
          $.identifier,
          ":",
          $._newline,
          $._indent,
          repeat($.port),
          repeat($._statement),
          $._dedent
        ),
        seq("extmodule", $.identifier, ":", $._newline, $._indent, repeat($.port), $._dedent)
      ),

    port: ($) => seq($.direction, $.identifier, ":", $._type),

    direction: ($) => choice("input", "output"),

    type_integer: ($) =>
      seq(choice("UInt", "SInt"), optional(seq("<", $.integer, ">"))),

    type_bundle: $ => seq("{", repeat($.field), "}"),

    type_clock: $ => "Clock",

    type_vector: $ => seq($._type, "[", $.integer, "]"),

    _type: ($) =>
      choice(
        $.type_integer,
        $.type_bundle,
        $.type_clock,
        $.type_vector,
      ),

    field: ($) => seq(optional("flip"), $.identifier, ":", $._type),

    wire: ($) => seq("wire", $.identifier, ":", $._type),

    register: ($) => seq("reg", $.identifier, ":", $._type, ",", $._expression),

    memory: ($) =>
      seq("mem", $.identifier, ":", "(", repeat($.memory_field), ")"),

    memory_field: ($) =>
      choice(
        seq("data-type", "=>", $._type),
        seq("depth", "=>", $.integer),
        seq("read-latency", "=>", $.integer),
        seq("write-latency", "=>", $.integer),
        seq("read-under-write", "=>", choice("old", "new", "undefined")),
        seq("reader", "=>", $.identifier),
        seq("writer", "=>", $.identifier),
        seq("readwriter", "=>", $.identifier)
      ),

    instance: ($) => seq("inst", $.identifier, "of", $.identifier),

    node: ($) => seq("node", $.identifier, "=", $._expression),

    connect: ($) => seq($._expression, "<=", $._expression),

    partial_connect: ($) => seq($._expression, "<-", $._expression),

    invalidate: ($) => seq($._expression, "is", "invalid"),

    conditional: ($) =>
      seq(
        "when",
        $._expression,
        ":",
        $._statement_group,
        optional(
          seq("else", choice(seq(":", $._statement_group), $.conditional))
        )
      ),

    stop: ($) =>
      seq("stop", "(", $._expression, ",", $._expression, ",", $.integer, ")"),

    printf: ($) =>
      seq(
        "printf",
        "(",
        $._expression,
        ",",
        $._expression,
        ",",
        $.string,
        repeat(seq(",", $._expression)),
        ")"
      ),

    empty: ($) => "skip",

    _statement: ($) =>
      choice(
        $.wire,
        $.register,
        $.memory,
        $.instance,
        $.node,
        $.connect,
        $.partial_connect,
        $.invalidate,
        $.conditional,
        $.stop,
        $.printf,
        $.empty
      ),

    _statement_group: ($) =>
      choice(
        seq(
          "(",
          optional(seq($._statement, repeat(seq(",", $._statement)))),
          ")"
        ),
        seq($._newline, $._indent, repeat($._statement), $._dedent)
      ),

    expression_integer: ($) => seq($.type_integer, "(", $.integer, ")"),

    reference: ($) => $.identifier,

    subfield: ($) => seq($._expression, ".", $.identifier),

    subindex: ($) => seq($._expression, "[", $.integer, "]"),

    subaccess: ($) => seq($._expression, "[", $._expression, "]"),

    mux: ($) =>
      seq(
        "mux",
        "(",
        $._expression,
        ",",
        $._expression,
        ",",
        $._expression,
        ")"
      ),

    conditional_valid: ($) =>
      seq("validif", "(", $._expression, ",", $._expression, ")"),

    primop: ($) =>
      seq(
        choice(
          "add",
          "sub",
          "mul",
          "div",
          "mod",
          "lt",
          "leq",
          "gt",
          "geq",
          "eq",
          "neq",
          "pad",
          "asUInt",
          "asSInt",
          "asClock",
          "shl",
          "shr",
          "dshl",
          "dshr",
          "cvt",
          "neg",
          "not",
          "and",
          "or",
          "xor",
          "andr",
          "orr",
          "xorr",
          "cat",
          "bits",
          "head",
          "tail"
        ),
        "(",
        repeat($._expression),
        repeat(seq(",", $._expression)),
        repeat(seq(",", $.integer)),
        ")"
      ),

    _expression: ($) =>
      choice(
        $.expression_integer,
        $.reference,
        $.subfield,
        $.subaccess,
        $.mux,
        $.conditional_valid,
        $.primop
      ),

    string: ($) => /'[^.]*'/,
    integer: ($) => choice(/[\d]+/, /0[xX][\da-fA-F]+/),
    literal: ($) => choice($.integer, $.string),
    identifier: ($) => /[a-zA-Z_]+[a-zA-Z0-9_]*/,
  },
});
