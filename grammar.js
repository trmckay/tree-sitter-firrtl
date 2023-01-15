module.exports = grammar({
  name: 'firrtl',
  rules: {
    word: ($) => $.identifier,

    circuit: ($) =>
      optional(
        seq(optional($.info), 'circuit', $.identifier, ':', repeat($.module))
      ),

    module: ($) =>
      seq(
        optional($.info),
        choice(
          seq('module', $.identifier, ':', repeat($.port), $.statement),
          seq('extmodule', $.identifier, ':', repeat($.port)),
        )
      ),

    port: ($) => seq(optional($.info), $.direction, $.identifier, ':', $._type),

    direction: ($) => choice('input', 'output'),

    type_integer: ($) =>
      seq(choice('UInt', 'SInt'), optional(seq('<', $.integer, '>'))),

    _type: ($) =>
      choice(
        $.type_integer,
        seq('{', repeat($.field), '}'),
        'clock',
        seq($._type, '[', $.integer, ']')
      ),

    field: ($) => seq(optional('flip'), $.identifier, ':', $._type),

    statement: ($) =>
      seq(
        optional($.info),
        choice(
          seq('wire', $.identifier, ':', $._type),
          seq(
            'reg',
            $.identifier,
            ':',
            $._type,
            ',',
            $.expression,
            optional(seq($.expression, ',', $.expression))
          ),
          seq(
            'mem',
            $.identifier,
            ':',
            '(',
            seq(
              repeat(
                choice(
                  seq('data-_type', '=>', $._type),
                  seq('depth', '=>', $.integer),
                  seq('read-latency', '=>', $.integer),
                  seq('write-latency', '=>', $.integer),
                  seq(
                    'read-under-write',
                    '=>',
                    choice('old', 'new', 'undefined')
                  ),
                  seq('reader', '=>', $.identifier),
                  seq('writer', '=>', $.identifier),
                  seq('readwriter', '=>', $.identifier)
                )
              )
            ),
            ')'
          ),
          seq('inst', $.identifier, 'of', $.identifier),
          seq('node', $.identifier, '=', $.expression),
          seq($.expression, '<=', $.expression),
          seq($.expression, '<-', $.expression),
          seq($.expression, 'is', 'invalid'),
          seq(
            'when',
            $.expression,
            ':',
            $.statement,
            optional(seq('else', ':', $.statement))
          ),
          seq(
            'stop',
            '(',
            $.expression,
            ',',
            $.expression,
            ',',
            $.integer,
            ')'
          ),
          seq(
            'printf',
            '(',
            $.expression,
            ',',
            $.expression,
            ',',
            $.string,
            repeat(seq(',', $.expression))
          ),
          'skip',
          seq('(', repeat($.statement), ')')
        )
      ),

    expression: ($) =>
      choice(
        seq($.type_integer, '(', $.integer, ')'),
        $.identifier,
        seq($.expression, '.', $.identifier),
        seq($.expression, '[', $.integer, ']'),
        seq($.expression, '[', $.expression, ']'),
        seq(
          'mux',
          '(',
          $.expression,
          ',',
          $.expression,
          ',',
          $.expression,
          ')'
        ),
        seq('validif', '(', $.expression, ',', $.expression, ')'),
        seq($.primop, repeat($.expression), repeat($.integer))
      ),

    primop: ($) =>
      choice(
        'add',
        'sub',
        'mul',
        'div',
        'mod',
        'lt',
        'leq',
        'gt',
        'geq',
        'eq',
        'neq',
        'pad',
        'asUInt',
        'asSInt',
        'asClock',
        'shl',
        'shr',
        'dshl',
        'dshr',
        'cvt',
        'neg',
        'not',
        'and',
        'or',
        'xor',
        'andr',
        'orr',
        'xorr',
        'cat',
        'bits',
        'head',
        'tail'
      ),

    string: ($) => /'[^.]*'/,
    integer: ($) => choice(/[\d]+/, /0[xX][\da-fA-F]+/),
    literal: ($) => choice($.integer, $.string),
    identifier: ($) => /[a-zA-Z0-9_]*/,

    info: ($) => seq('@', '[', $.string, ',', $.integer, ',', $.integer),
  },
});
