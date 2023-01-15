#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 4
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_circuit = 1,
  anon_sym_COLON = 2,
  anon_sym_extmodule = 3,
  anon_sym_input = 4,
  anon_sym_output = 5,
  anon_sym_UInt = 6,
  anon_sym_SInt = 7,
  anon_sym_LT = 8,
  anon_sym_GT = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_clock = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_flip = 15,
  anon_sym_wire = 16,
  anon_sym_reg = 17,
  anon_sym_COMMA = 18,
  anon_sym_mem = 19,
  anon_sym_LPAREN = 20,
  anon_sym_data_DASH_type = 21,
  anon_sym_EQ_GT = 22,
  anon_sym_depth = 23,
  anon_sym_read_DASHlatency = 24,
  anon_sym_write_DASHlatency = 25,
  anon_sym_read_DASHunder_DASHwrite = 26,
  anon_sym_old = 27,
  anon_sym_new = 28,
  anon_sym_undefined = 29,
  anon_sym_reader = 30,
  anon_sym_writer = 31,
  anon_sym_readwriter = 32,
  anon_sym_RPAREN = 33,
  anon_sym_inst = 34,
  anon_sym_of = 35,
  anon_sym_node = 36,
  anon_sym_EQ = 37,
  anon_sym_LT_EQ = 38,
  anon_sym_LT_DASH = 39,
  anon_sym_is = 40,
  anon_sym_invalid = 41,
  anon_sym_when = 42,
  anon_sym_else = 43,
  anon_sym_stop = 44,
  anon_sym_printf = 45,
  anon_sym_skip = 46,
  anon_sym_DOT = 47,
  anon_sym_mux = 48,
  anon_sym_validif = 49,
  anon_sym_add = 50,
  anon_sym_sub = 51,
  anon_sym_mul = 52,
  anon_sym_div = 53,
  anon_sym_mod = 54,
  anon_sym_lt = 55,
  anon_sym_leq = 56,
  anon_sym_gt = 57,
  anon_sym_geq = 58,
  anon_sym_eq = 59,
  anon_sym_neq = 60,
  anon_sym_pad = 61,
  anon_sym_asUInt = 62,
  anon_sym_asSInt = 63,
  anon_sym_asClock = 64,
  anon_sym_shl = 65,
  anon_sym_shr = 66,
  anon_sym_dshl = 67,
  anon_sym_dshr = 68,
  anon_sym_cvt = 69,
  anon_sym_neg = 70,
  anon_sym_not = 71,
  anon_sym_and = 72,
  anon_sym_or = 73,
  anon_sym_xor = 74,
  anon_sym_cat = 75,
  anon_sym_bits = 76,
  anon_sym_head = 77,
  anon_sym_tail = 78,
  sym_string = 79,
  aux_sym_integer_token1 = 80,
  sym_identifier = 81,
  anon_sym_AT = 82,
  sym_word = 83,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_circuit] = "circuit",
  [anon_sym_COLON] = ":",
  [anon_sym_extmodule] = "extmodule",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_UInt] = "UInt",
  [anon_sym_SInt] = "SInt",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_clock] = "clock",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_flip] = "flip",
  [anon_sym_wire] = "wire",
  [anon_sym_reg] = "reg",
  [anon_sym_COMMA] = ",",
  [anon_sym_mem] = "mem",
  [anon_sym_LPAREN] = "(",
  [anon_sym_data_DASH_type] = "data-_type",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_depth] = "depth",
  [anon_sym_read_DASHlatency] = "read-latency",
  [anon_sym_write_DASHlatency] = "write-latency",
  [anon_sym_read_DASHunder_DASHwrite] = "read-under-write",
  [anon_sym_old] = "old",
  [anon_sym_new] = "new",
  [anon_sym_undefined] = "undefined",
  [anon_sym_reader] = "reader",
  [anon_sym_writer] = "writer",
  [anon_sym_readwriter] = "readwriter",
  [anon_sym_RPAREN] = ")",
  [anon_sym_inst] = "inst",
  [anon_sym_of] = "of",
  [anon_sym_node] = "node",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_is] = "is",
  [anon_sym_invalid] = "invalid",
  [anon_sym_when] = "when",
  [anon_sym_else] = "else",
  [anon_sym_stop] = "stop",
  [anon_sym_printf] = "printf",
  [anon_sym_skip] = "skip",
  [anon_sym_DOT] = ".",
  [anon_sym_mux] = "mux",
  [anon_sym_validif] = "validif",
  [anon_sym_add] = "add",
  [anon_sym_sub] = "sub",
  [anon_sym_mul] = "mul",
  [anon_sym_div] = "div",
  [anon_sym_mod] = "mod",
  [anon_sym_lt] = "lt",
  [anon_sym_leq] = "leq",
  [anon_sym_gt] = "gt",
  [anon_sym_geq] = "geq",
  [anon_sym_eq] = "eq",
  [anon_sym_neq] = "neq",
  [anon_sym_pad] = "pad",
  [anon_sym_asUInt] = "asUInt",
  [anon_sym_asSInt] = "asSInt",
  [anon_sym_asClock] = "asClock",
  [anon_sym_shl] = "shl",
  [anon_sym_shr] = "shr",
  [anon_sym_dshl] = "dshl",
  [anon_sym_dshr] = "dshr",
  [anon_sym_cvt] = "cvt",
  [anon_sym_neg] = "neg",
  [anon_sym_not] = "not",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_cat] = "cat",
  [anon_sym_bits] = "bits",
  [anon_sym_head] = "head",
  [anon_sym_tail] = "tail",
  [sym_string] = "string",
  [aux_sym_integer_token1] = "integer_token1",
  [sym_identifier] = "identifier",
  [anon_sym_AT] = "@",
  [sym_word] = "word",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_circuit] = anon_sym_circuit,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_extmodule] = anon_sym_extmodule,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_UInt] = anon_sym_UInt,
  [anon_sym_SInt] = anon_sym_SInt,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_clock] = anon_sym_clock,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_flip] = anon_sym_flip,
  [anon_sym_wire] = anon_sym_wire,
  [anon_sym_reg] = anon_sym_reg,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_mem] = anon_sym_mem,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_data_DASH_type] = anon_sym_data_DASH_type,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_depth] = anon_sym_depth,
  [anon_sym_read_DASHlatency] = anon_sym_read_DASHlatency,
  [anon_sym_write_DASHlatency] = anon_sym_write_DASHlatency,
  [anon_sym_read_DASHunder_DASHwrite] = anon_sym_read_DASHunder_DASHwrite,
  [anon_sym_old] = anon_sym_old,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_undefined] = anon_sym_undefined,
  [anon_sym_reader] = anon_sym_reader,
  [anon_sym_writer] = anon_sym_writer,
  [anon_sym_readwriter] = anon_sym_readwriter,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_inst] = anon_sym_inst,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_node] = anon_sym_node,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_invalid] = anon_sym_invalid,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_stop] = anon_sym_stop,
  [anon_sym_printf] = anon_sym_printf,
  [anon_sym_skip] = anon_sym_skip,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_mux] = anon_sym_mux,
  [anon_sym_validif] = anon_sym_validif,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_lt] = anon_sym_lt,
  [anon_sym_leq] = anon_sym_leq,
  [anon_sym_gt] = anon_sym_gt,
  [anon_sym_geq] = anon_sym_geq,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_neq] = anon_sym_neq,
  [anon_sym_pad] = anon_sym_pad,
  [anon_sym_asUInt] = anon_sym_asUInt,
  [anon_sym_asSInt] = anon_sym_asSInt,
  [anon_sym_asClock] = anon_sym_asClock,
  [anon_sym_shl] = anon_sym_shl,
  [anon_sym_shr] = anon_sym_shr,
  [anon_sym_dshl] = anon_sym_dshl,
  [anon_sym_dshr] = anon_sym_dshr,
  [anon_sym_cvt] = anon_sym_cvt,
  [anon_sym_neg] = anon_sym_neg,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_cat] = anon_sym_cat,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_tail] = anon_sym_tail,
  [sym_string] = sym_string,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_AT] = anon_sym_AT,
  [sym_word] = sym_word,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_circuit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_DASH_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_depth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read_DASHlatency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write_DASHlatency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read_DASHunder_DASHwrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_old] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undefined] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_writer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readwriter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_node] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invalid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_printf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mux] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_validif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_geq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asUInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asSInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asClock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dshl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dshr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tail] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(169);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == ')') ADVANCE(202);
      if (lookahead == ',') ADVANCE(187);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == '@') ADVANCE(251);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == 'U') ADVANCE(8);
      if (lookahead == '[') ADVANCE(182);
      if (lookahead == ']') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(106);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(115);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '}') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'w') ADVANCE(134);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(9);
      if (lookahead == 'U') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 9:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(148);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(220);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(214);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(218);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == 'q') ADVANCE(229);
      if (lookahead == 'w') ADVANCE(197);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 'k') ADVANCE(78);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(181);
      END_STATE();
    case 87:
      if (lookahead == 'k') ADVANCE(233);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'q') ADVANCE(228);
      if (lookahead == 'x') ADVANCE(151);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == 'x') ADVANCE(217);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 126:
      if (lookahead == 'q') ADVANCE(227);
      END_STATE();
    case 127:
      if (lookahead == 'q') ADVANCE(225);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 164:
      if (lookahead == 'v') ADVANCE(222);
      END_STATE();
    case 165:
      if (lookahead == 'w') ADVANCE(135);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(193);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(194);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_circuit);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_extmodule);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_UInt);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SInt);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_clock);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_flip);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_wire);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_mem);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_data_DASH_type);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_depth);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_read_DASHlatency);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_write_DASHlatency);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_read_DASHunder_DASHwrite);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_old);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_undefined);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_reader);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_writer);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_readwriter);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_inst);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(191);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_invalid);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_printf);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_skip);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_mux);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_validif);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_leq);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_gt);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_geq);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_neq);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_asUInt);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_asSInt);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_asClock);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_shl);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_shr);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_dshl);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_dshr);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_cvt);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_cat);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 250},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_circuit] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_extmodule] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_UInt] = ACTIONS(1),
    [anon_sym_SInt] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_clock] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_flip] = ACTIONS(1),
    [anon_sym_wire] = ACTIONS(1),
    [anon_sym_reg] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_mem] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_data_DASH_type] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_depth] = ACTIONS(1),
    [anon_sym_read_DASHlatency] = ACTIONS(1),
    [anon_sym_write_DASHlatency] = ACTIONS(1),
    [anon_sym_read_DASHunder_DASHwrite] = ACTIONS(1),
    [anon_sym_old] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_undefined] = ACTIONS(1),
    [anon_sym_reader] = ACTIONS(1),
    [anon_sym_writer] = ACTIONS(1),
    [anon_sym_readwriter] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_inst] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_invalid] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_stop] = ACTIONS(1),
    [anon_sym_printf] = ACTIONS(1),
    [anon_sym_skip] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_mux] = ACTIONS(1),
    [anon_sym_validif] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_lt] = ACTIONS(1),
    [anon_sym_leq] = ACTIONS(1),
    [anon_sym_gt] = ACTIONS(1),
    [anon_sym_geq] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_neq] = ACTIONS(1),
    [anon_sym_pad] = ACTIONS(1),
    [anon_sym_asUInt] = ACTIONS(1),
    [anon_sym_asSInt] = ACTIONS(1),
    [anon_sym_asClock] = ACTIONS(1),
    [anon_sym_shl] = ACTIONS(1),
    [anon_sym_shr] = ACTIONS(1),
    [anon_sym_dshl] = ACTIONS(1),
    [anon_sym_dshr] = ACTIONS(1),
    [anon_sym_cvt] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_cat] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_tail] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_word] = STATE(3),
    [sym_identifier] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [7] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_firrtl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
