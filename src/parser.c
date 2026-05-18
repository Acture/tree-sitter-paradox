#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 38
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_if = 5,
  anon_sym_else_if = 6,
  anon_sym_else = 7,
  anon_sym_limit = 8,
  anon_sym_trigger = 9,
  anon_sym_potential = 10,
  anon_sym_allow = 11,
  anon_sym_AND = 12,
  anon_sym_OR = 13,
  anon_sym_NOT = 14,
  sym_scope_keyword = 15,
  anon_sym_LBRACK_LBRACK = 16,
  anon_sym_RBRACK = 17,
  sym_template_string = 18,
  sym_string = 19,
  sym_number = 20,
  anon_sym_yes = 21,
  anon_sym_no = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  sym_placeholder_value = 25,
  sym_scalar_keyword = 26,
  sym_cwt_value_ref = 27,
  sym_cwt_type_marker = 28,
  anon_sym_DOLLAR = 29,
  sym_doc_attribute_comment = 30,
  sym__hash_comment = 31,
  sym__dash_line_comment = 32,
  sym__dash_block_comment = 33,
  sym_source_file = 34,
  sym_assignment = 35,
  sym_map = 36,
  sym_statement = 37,
  sym_array = 38,
  sym_simple_value = 39,
  sym_condition_statement = 40,
  sym_logical_statement = 41,
  sym_scope_statement = 42,
  sym_condition_keyword = 43,
  sym_logical_keyword = 44,
  sym_macro_map = 45,
  sym_boolean = 46,
  sym_variable = 47,
  sym_variable_embedded_identifier = 48,
  sym_comment = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_map_repeat1 = 51,
  aux_sym_array_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_if] = "if",
  [anon_sym_else_if] = "else_if",
  [anon_sym_else] = "else",
  [anon_sym_limit] = "limit",
  [anon_sym_trigger] = "trigger",
  [anon_sym_potential] = "potential",
  [anon_sym_allow] = "allow",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_NOT] = "NOT",
  [sym_scope_keyword] = "scope_keyword",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK] = "]",
  [sym_template_string] = "template_string",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_placeholder_value] = "placeholder_value",
  [sym_scalar_keyword] = "scalar_keyword",
  [sym_cwt_value_ref] = "cwt_value_ref",
  [sym_cwt_type_marker] = "cwt_type_marker",
  [anon_sym_DOLLAR] = "$",
  [sym_doc_attribute_comment] = "doc_attribute_comment",
  [sym__hash_comment] = "_hash_comment",
  [sym__dash_line_comment] = "_dash_line_comment",
  [sym__dash_block_comment] = "_dash_block_comment",
  [sym_source_file] = "source_file",
  [sym_assignment] = "assignment",
  [sym_map] = "map",
  [sym_statement] = "statement",
  [sym_array] = "array",
  [sym_simple_value] = "simple_value",
  [sym_condition_statement] = "condition_statement",
  [sym_logical_statement] = "logical_statement",
  [sym_scope_statement] = "scope_statement",
  [sym_condition_keyword] = "condition_keyword",
  [sym_logical_keyword] = "logical_keyword",
  [sym_macro_map] = "macro_map",
  [sym_boolean] = "boolean",
  [sym_variable] = "variable",
  [sym_variable_embedded_identifier] = "variable_embedded_identifier",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else_if] = anon_sym_else_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_limit] = anon_sym_limit,
  [anon_sym_trigger] = anon_sym_trigger,
  [anon_sym_potential] = anon_sym_potential,
  [anon_sym_allow] = anon_sym_allow,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_NOT] = anon_sym_NOT,
  [sym_scope_keyword] = sym_scope_keyword,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_template_string] = sym_template_string,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_placeholder_value] = sym_placeholder_value,
  [sym_scalar_keyword] = sym_scalar_keyword,
  [sym_cwt_value_ref] = sym_cwt_value_ref,
  [sym_cwt_type_marker] = sym_cwt_type_marker,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_doc_attribute_comment] = sym_doc_attribute_comment,
  [sym__hash_comment] = sym__hash_comment,
  [sym__dash_line_comment] = sym__dash_line_comment,
  [sym__dash_block_comment] = sym__dash_block_comment,
  [sym_source_file] = sym_source_file,
  [sym_assignment] = sym_assignment,
  [sym_map] = sym_map,
  [sym_statement] = sym_statement,
  [sym_array] = sym_array,
  [sym_simple_value] = sym_simple_value,
  [sym_condition_statement] = sym_condition_statement,
  [sym_logical_statement] = sym_logical_statement,
  [sym_scope_statement] = sym_scope_statement,
  [sym_condition_keyword] = sym_condition_keyword,
  [sym_logical_keyword] = sym_logical_keyword,
  [sym_macro_map] = sym_macro_map,
  [sym_boolean] = sym_boolean,
  [sym_variable] = sym_variable,
  [sym_variable_embedded_identifier] = sym_variable_embedded_identifier,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trigger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_potential] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [sym_scope_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_template_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_placeholder_value] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_cwt_value_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_cwt_type_marker] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_doc_attribute_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__hash_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__dash_line_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__dash_block_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_value] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_map] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_embedded_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_key = 2,
  field_keyword = 3,
  field_top_level_statement = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_key] = "key",
  [field_keyword] = "keyword",
  [field_top_level_statement] = "top_level_statement",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_top_level_statement, 0},
  [1] =
    {field_top_level_statement, 0, .inherited = true},
  [2] =
    {field_top_level_statement, 0, .inherited = true},
    {field_top_level_statement, 1, .inherited = true},
  [4] =
    {field_body, 2},
    {field_keyword, 0},
  [6] =
    {field_key, 0},
    {field_value, 2},
  [8] =
    {field_key, 1},
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 12,
  [43] = 43,
  [44] = 16,
  [45] = 15,
  [46] = 13,
  [47] = 11,
  [48] = 28,
  [49] = 27,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 52,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 62,
  [65] = 65,
  [66] = 66,
};

static TSCharacterRange sym_cwt_type_marker_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'%', '<'}, {'>', 'Z'}, {'\\', '\\'}, {'^', 'z'}, {'|', '|'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      ADVANCE_MAP(
        '"', 1,
        '#', 57,
        '$', 44,
        '-', 45,
        '.', 51,
        '<', 48,
        '=', 21,
        '[', 12,
        ']', 25,
        '{', 22,
        '}', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 3,
        '#', 57,
        '$', 44,
        '-', 45,
        '.', 51,
        '<', 48,
        '{', 22,
        '}', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '-') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '[') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == '[') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(76);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '$') ADVANCE(44);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '{') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '[' &&
          lookahead != '}') ADVANCE(54);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_template_string);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if ((!eof && set_contains(sym_cwt_type_marker_character_set_1, 9, lookahead))) ADVANCE(53);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if ((!eof && set_contains(sym_cwt_type_marker_character_set_1, 9, lookahead))) ADVANCE(53);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '[') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if ((!eof && set_contains(sym_cwt_type_marker_character_set_1, 9, lookahead))) ADVANCE(53);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_placeholder_value);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_cwt_value_ref);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_cwt_value_ref);
      if (lookahead == '[') ADVANCE(13);
      if ((!eof && set_contains(sym_cwt_type_marker_character_set_1, 9, lookahead))) ADVANCE(53);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_cwt_value_ref);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_cwt_value_ref);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(14);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_cwt_type_marker);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_cwt_type_marker);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_cwt_type_marker);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(9);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_cwt_type_marker);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_cwt_type_marker);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(16);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_cwt_type_marker);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(16);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_cwt_type_marker);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_cwt_type_marker);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(16);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '[') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if ((!eof && set_contains(sym_cwt_type_marker_character_set_1, 9, lookahead))) ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(65);
      if ((!eof && set_contains(sym_cwt_type_marker_character_set_1, 9, lookahead))) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '[') ADVANCE(13);
      if ((!eof && set_contains(sym_cwt_type_marker_character_set_1, 9, lookahead))) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          lookahead == '=' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          lookahead == '=' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if ((!eof && set_contains(sym_cwt_type_marker_character_set_1, 9, lookahead))) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if ((!eof && set_contains(sym_cwt_type_marker_character_set_1, 9, lookahead))) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if ((!eof && set_contains(sym_cwt_type_marker_character_set_1, 9, lookahead))) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(13);
      if ((!eof && set_contains(sym_cwt_type_marker_character_set_1, 9, lookahead))) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if ((!eof && set_contains(sym_cwt_type_marker_character_set_1, 9, lookahead))) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_doc_attribute_comment);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_doc_attribute_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__hash_comment);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__hash_comment);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(56);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__hash_comment);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(56);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__hash_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          lookahead == '=' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          lookahead == '=' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(42);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(42);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          lookahead == '=' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          lookahead == '=' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(16);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(16);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == ']') ADVANCE(69);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(16);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == ']') ADVANCE(69);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(16);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__dash_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__dash_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'A', 1,
        'F', 2,
        'N', 3,
        'O', 4,
        'P', 5,
        'R', 6,
        'T', 7,
        'a', 8,
        'b', 9,
        'c', 10,
        'e', 11,
        'f', 12,
        'i', 13,
        'l', 14,
        'n', 15,
        'p', 16,
        's', 17,
        't', 18,
        'y', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'H') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 42:
      if (lookahead == 'M') ADVANCE(61);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 44:
      if (lookahead == 'V') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_scalar_keyword);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_scope_keyword);
      if (lookahead == 'F') ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_scope_keyword);
      if (lookahead == 'P') ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_scope_keyword);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'w') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 86:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 88:
      if (lookahead == 'k') ADVANCE(94);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 92:
      if (lookahead == 'M') ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == 'V') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_else_if);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_trigger);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_scope_keyword);
      if (lookahead == 'F') ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_scope_keyword);
      if (lookahead == 'P') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 'R') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 'R') ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_potential);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(110);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == 'M') ADVANCE(112);
      END_STATE();
    case 110:
      if (lookahead == 'V') ADVANCE(113);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_scope_keyword);
      if (lookahead == 'F') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_scope_keyword);
      if (lookahead == 'P') ADVANCE(116);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(118);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(119);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 118:
      if (lookahead == 'O') ADVANCE(121);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == 'M') ADVANCE(124);
      END_STATE();
    case 122:
      if (lookahead == 'V') ADVANCE(125);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_scope_keyword);
      if (lookahead == 'F') ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_scope_keyword);
      if (lookahead == 'P') ADVANCE(127);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(128);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 130:
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 131:
      if (lookahead == 'V') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 19},
  [66] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_limit] = ACTIONS(1),
    [anon_sym_trigger] = ACTIONS(1),
    [anon_sym_potential] = ACTIONS(1),
    [anon_sym_allow] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [sym_scope_keyword] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_template_string] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_placeholder_value] = ACTIONS(1),
    [sym_scalar_keyword] = ACTIONS(1),
    [sym_cwt_value_ref] = ACTIONS(1),
    [sym_cwt_type_marker] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym_assignment] = STATE(23),
    [sym_statement] = STATE(37),
    [sym_simple_value] = STATE(23),
    [sym_condition_statement] = STATE(23),
    [sym_logical_statement] = STATE(23),
    [sym_scope_statement] = STATE(23),
    [sym_condition_keyword] = STATE(56),
    [sym_logical_keyword] = STATE(63),
    [sym_macro_map] = STATE(23),
    [sym_boolean] = STATE(28),
    [sym_variable] = STATE(18),
    [sym_variable_embedded_identifier] = STATE(17),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_else_if] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_limit] = ACTIONS(7),
    [anon_sym_trigger] = ACTIONS(7),
    [anon_sym_potential] = ACTIONS(7),
    [anon_sym_allow] = ACTIONS(7),
    [anon_sym_AND] = ACTIONS(13),
    [anon_sym_OR] = ACTIONS(13),
    [anon_sym_NOT] = ACTIONS(13),
    [sym_scope_keyword] = ACTIONS(15),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(17),
    [sym_template_string] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_placeholder_value] = ACTIONS(25),
    [sym_scalar_keyword] = ACTIONS(21),
    [sym_cwt_value_ref] = ACTIONS(21),
    [sym_cwt_type_marker] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [2] = {
    [sym_assignment] = STATE(23),
    [sym_statement] = STATE(34),
    [sym_simple_value] = STATE(23),
    [sym_condition_statement] = STATE(23),
    [sym_logical_statement] = STATE(23),
    [sym_scope_statement] = STATE(23),
    [sym_condition_keyword] = STATE(56),
    [sym_logical_keyword] = STATE(63),
    [sym_macro_map] = STATE(23),
    [sym_boolean] = STATE(28),
    [sym_variable] = STATE(18),
    [sym_variable_embedded_identifier] = STATE(17),
    [sym_comment] = STATE(2),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [anon_sym_else_if] = ACTIONS(34),
    [anon_sym_else] = ACTIONS(34),
    [anon_sym_limit] = ACTIONS(34),
    [anon_sym_trigger] = ACTIONS(34),
    [anon_sym_potential] = ACTIONS(34),
    [anon_sym_allow] = ACTIONS(34),
    [anon_sym_AND] = ACTIONS(37),
    [anon_sym_OR] = ACTIONS(37),
    [anon_sym_NOT] = ACTIONS(37),
    [sym_scope_keyword] = ACTIONS(40),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(32),
    [sym_template_string] = ACTIONS(46),
    [sym_string] = ACTIONS(49),
    [sym_number] = ACTIONS(29),
    [anon_sym_yes] = ACTIONS(52),
    [anon_sym_no] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
    [sym_placeholder_value] = ACTIONS(55),
    [sym_scalar_keyword] = ACTIONS(49),
    [sym_cwt_value_ref] = ACTIONS(49),
    [sym_cwt_type_marker] = ACTIONS(49),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [3] = {
    [sym_assignment] = STATE(23),
    [sym_statement] = STATE(34),
    [sym_simple_value] = STATE(36),
    [sym_condition_statement] = STATE(23),
    [sym_logical_statement] = STATE(23),
    [sym_scope_statement] = STATE(23),
    [sym_condition_keyword] = STATE(56),
    [sym_logical_keyword] = STATE(63),
    [sym_macro_map] = STATE(23),
    [sym_boolean] = STATE(28),
    [sym_variable] = STATE(35),
    [sym_variable_embedded_identifier] = STATE(33),
    [sym_comment] = STATE(3),
    [aux_sym_map_repeat1] = STATE(4),
    [aux_sym_array_repeat1] = STATE(40),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_else_if] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_limit] = ACTIONS(7),
    [anon_sym_trigger] = ACTIONS(7),
    [anon_sym_potential] = ACTIONS(7),
    [anon_sym_allow] = ACTIONS(7),
    [anon_sym_AND] = ACTIONS(13),
    [anon_sym_OR] = ACTIONS(13),
    [anon_sym_NOT] = ACTIONS(13),
    [sym_scope_keyword] = ACTIONS(15),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(17),
    [sym_template_string] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_placeholder_value] = ACTIONS(25),
    [sym_scalar_keyword] = ACTIONS(21),
    [sym_cwt_value_ref] = ACTIONS(21),
    [sym_cwt_type_marker] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [4] = {
    [sym_assignment] = STATE(23),
    [sym_statement] = STATE(34),
    [sym_simple_value] = STATE(23),
    [sym_condition_statement] = STATE(23),
    [sym_logical_statement] = STATE(23),
    [sym_scope_statement] = STATE(23),
    [sym_condition_keyword] = STATE(56),
    [sym_logical_keyword] = STATE(63),
    [sym_macro_map] = STATE(23),
    [sym_boolean] = STATE(28),
    [sym_variable] = STATE(18),
    [sym_variable_embedded_identifier] = STATE(17),
    [sym_comment] = STATE(4),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_else_if] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_limit] = ACTIONS(7),
    [anon_sym_trigger] = ACTIONS(7),
    [anon_sym_potential] = ACTIONS(7),
    [anon_sym_allow] = ACTIONS(7),
    [anon_sym_AND] = ACTIONS(13),
    [anon_sym_OR] = ACTIONS(13),
    [anon_sym_NOT] = ACTIONS(13),
    [sym_scope_keyword] = ACTIONS(15),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(17),
    [sym_template_string] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_placeholder_value] = ACTIONS(25),
    [sym_scalar_keyword] = ACTIONS(21),
    [sym_cwt_value_ref] = ACTIONS(21),
    [sym_cwt_type_marker] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [5] = {
    [sym_assignment] = STATE(23),
    [sym_statement] = STATE(34),
    [sym_simple_value] = STATE(23),
    [sym_condition_statement] = STATE(23),
    [sym_logical_statement] = STATE(23),
    [sym_scope_statement] = STATE(23),
    [sym_condition_keyword] = STATE(56),
    [sym_logical_keyword] = STATE(63),
    [sym_macro_map] = STATE(23),
    [sym_boolean] = STATE(28),
    [sym_variable] = STATE(18),
    [sym_variable_embedded_identifier] = STATE(17),
    [sym_comment] = STATE(5),
    [aux_sym_map_repeat1] = STATE(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_else_if] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_limit] = ACTIONS(7),
    [anon_sym_trigger] = ACTIONS(7),
    [anon_sym_potential] = ACTIONS(7),
    [anon_sym_allow] = ACTIONS(7),
    [anon_sym_AND] = ACTIONS(13),
    [anon_sym_OR] = ACTIONS(13),
    [anon_sym_NOT] = ACTIONS(13),
    [sym_scope_keyword] = ACTIONS(15),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(65),
    [sym_template_string] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_placeholder_value] = ACTIONS(25),
    [sym_scalar_keyword] = ACTIONS(21),
    [sym_cwt_value_ref] = ACTIONS(21),
    [sym_cwt_type_marker] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [6] = {
    [sym_assignment] = STATE(23),
    [sym_statement] = STATE(34),
    [sym_simple_value] = STATE(23),
    [sym_condition_statement] = STATE(23),
    [sym_logical_statement] = STATE(23),
    [sym_scope_statement] = STATE(23),
    [sym_condition_keyword] = STATE(56),
    [sym_logical_keyword] = STATE(63),
    [sym_macro_map] = STATE(23),
    [sym_boolean] = STATE(28),
    [sym_variable] = STATE(18),
    [sym_variable_embedded_identifier] = STATE(17),
    [sym_comment] = STATE(6),
    [aux_sym_map_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_else_if] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_limit] = ACTIONS(7),
    [anon_sym_trigger] = ACTIONS(7),
    [anon_sym_potential] = ACTIONS(7),
    [anon_sym_allow] = ACTIONS(7),
    [anon_sym_AND] = ACTIONS(13),
    [anon_sym_OR] = ACTIONS(13),
    [anon_sym_NOT] = ACTIONS(13),
    [sym_scope_keyword] = ACTIONS(15),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(17),
    [sym_template_string] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_placeholder_value] = ACTIONS(25),
    [sym_scalar_keyword] = ACTIONS(21),
    [sym_cwt_value_ref] = ACTIONS(21),
    [sym_cwt_type_marker] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [7] = {
    [sym_assignment] = STATE(23),
    [sym_statement] = STATE(37),
    [sym_simple_value] = STATE(23),
    [sym_condition_statement] = STATE(23),
    [sym_logical_statement] = STATE(23),
    [sym_scope_statement] = STATE(23),
    [sym_condition_keyword] = STATE(56),
    [sym_logical_keyword] = STATE(63),
    [sym_macro_map] = STATE(23),
    [sym_boolean] = STATE(28),
    [sym_variable] = STATE(18),
    [sym_variable_embedded_identifier] = STATE(17),
    [sym_comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_else_if] = ACTIONS(74),
    [anon_sym_else] = ACTIONS(74),
    [anon_sym_limit] = ACTIONS(74),
    [anon_sym_trigger] = ACTIONS(74),
    [anon_sym_potential] = ACTIONS(74),
    [anon_sym_allow] = ACTIONS(74),
    [anon_sym_AND] = ACTIONS(77),
    [anon_sym_OR] = ACTIONS(77),
    [anon_sym_NOT] = ACTIONS(77),
    [sym_scope_keyword] = ACTIONS(80),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [sym_template_string] = ACTIONS(86),
    [sym_string] = ACTIONS(89),
    [sym_number] = ACTIONS(71),
    [anon_sym_yes] = ACTIONS(92),
    [anon_sym_no] = ACTIONS(92),
    [anon_sym_true] = ACTIONS(92),
    [anon_sym_false] = ACTIONS(92),
    [sym_placeholder_value] = ACTIONS(95),
    [sym_scalar_keyword] = ACTIONS(89),
    [sym_cwt_value_ref] = ACTIONS(89),
    [sym_cwt_type_marker] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(98),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [8] = {
    [sym_assignment] = STATE(23),
    [sym_statement] = STATE(37),
    [sym_simple_value] = STATE(23),
    [sym_condition_statement] = STATE(23),
    [sym_logical_statement] = STATE(23),
    [sym_scope_statement] = STATE(23),
    [sym_condition_keyword] = STATE(56),
    [sym_logical_keyword] = STATE(63),
    [sym_macro_map] = STATE(23),
    [sym_boolean] = STATE(28),
    [sym_variable] = STATE(18),
    [sym_variable_embedded_identifier] = STATE(17),
    [sym_comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_else_if] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_limit] = ACTIONS(7),
    [anon_sym_trigger] = ACTIONS(7),
    [anon_sym_potential] = ACTIONS(7),
    [anon_sym_allow] = ACTIONS(7),
    [anon_sym_AND] = ACTIONS(13),
    [anon_sym_OR] = ACTIONS(13),
    [anon_sym_NOT] = ACTIONS(13),
    [sym_scope_keyword] = ACTIONS(15),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(17),
    [sym_template_string] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_placeholder_value] = ACTIONS(25),
    [sym_scalar_keyword] = ACTIONS(21),
    [sym_cwt_value_ref] = ACTIONS(21),
    [sym_cwt_type_marker] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [9] = {
    [sym_assignment] = STATE(23),
    [sym_statement] = STATE(34),
    [sym_simple_value] = STATE(23),
    [sym_condition_statement] = STATE(23),
    [sym_logical_statement] = STATE(23),
    [sym_scope_statement] = STATE(23),
    [sym_condition_keyword] = STATE(56),
    [sym_logical_keyword] = STATE(63),
    [sym_macro_map] = STATE(23),
    [sym_boolean] = STATE(28),
    [sym_variable] = STATE(18),
    [sym_variable_embedded_identifier] = STATE(17),
    [sym_comment] = STATE(9),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_else_if] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_limit] = ACTIONS(7),
    [anon_sym_trigger] = ACTIONS(7),
    [anon_sym_potential] = ACTIONS(7),
    [anon_sym_allow] = ACTIONS(7),
    [anon_sym_AND] = ACTIONS(13),
    [anon_sym_OR] = ACTIONS(13),
    [anon_sym_NOT] = ACTIONS(13),
    [sym_scope_keyword] = ACTIONS(15),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym_template_string] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [anon_sym_yes] = ACTIONS(23),
    [anon_sym_no] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_placeholder_value] = ACTIONS(25),
    [sym_scalar_keyword] = ACTIONS(21),
    [sym_cwt_value_ref] = ACTIONS(21),
    [sym_cwt_type_marker] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [10] = {
    [sym_variable] = STATE(11),
    [sym_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(107),
    [anon_sym_else_if] = ACTIONS(107),
    [anon_sym_else] = ACTIONS(107),
    [anon_sym_limit] = ACTIONS(107),
    [anon_sym_trigger] = ACTIONS(107),
    [anon_sym_potential] = ACTIONS(107),
    [anon_sym_allow] = ACTIONS(107),
    [anon_sym_AND] = ACTIONS(107),
    [anon_sym_OR] = ACTIONS(107),
    [anon_sym_NOT] = ACTIONS(107),
    [sym_scope_keyword] = ACTIONS(107),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [sym_template_string] = ACTIONS(105),
    [sym_string] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [anon_sym_yes] = ACTIONS(107),
    [anon_sym_no] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [sym_placeholder_value] = ACTIONS(105),
    [sym_scalar_keyword] = ACTIONS(107),
    [sym_cwt_value_ref] = ACTIONS(107),
    [sym_cwt_type_marker] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(111),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_identifier] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_else_if] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(119),
    [anon_sym_limit] = ACTIONS(119),
    [anon_sym_trigger] = ACTIONS(119),
    [anon_sym_potential] = ACTIONS(119),
    [anon_sym_allow] = ACTIONS(119),
    [anon_sym_AND] = ACTIONS(119),
    [anon_sym_OR] = ACTIONS(119),
    [anon_sym_NOT] = ACTIONS(119),
    [sym_scope_keyword] = ACTIONS(119),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(114),
    [anon_sym_RBRACK] = ACTIONS(114),
    [sym_template_string] = ACTIONS(114),
    [sym_string] = ACTIONS(119),
    [sym_number] = ACTIONS(116),
    [anon_sym_yes] = ACTIONS(119),
    [anon_sym_no] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(119),
    [sym_placeholder_value] = ACTIONS(114),
    [sym_scalar_keyword] = ACTIONS(119),
    [sym_cwt_value_ref] = ACTIONS(119),
    [sym_cwt_type_marker] = ACTIONS(119),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [12] = {
    [sym_variable] = STATE(11),
    [sym_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(107),
    [anon_sym_else_if] = ACTIONS(107),
    [anon_sym_else] = ACTIONS(107),
    [anon_sym_limit] = ACTIONS(107),
    [anon_sym_trigger] = ACTIONS(107),
    [anon_sym_potential] = ACTIONS(107),
    [anon_sym_allow] = ACTIONS(107),
    [anon_sym_AND] = ACTIONS(107),
    [anon_sym_OR] = ACTIONS(107),
    [anon_sym_NOT] = ACTIONS(107),
    [sym_scope_keyword] = ACTIONS(107),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [sym_template_string] = ACTIONS(105),
    [sym_string] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [anon_sym_yes] = ACTIONS(107),
    [anon_sym_no] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [sym_placeholder_value] = ACTIONS(105),
    [sym_scalar_keyword] = ACTIONS(107),
    [sym_cwt_value_ref] = ACTIONS(107),
    [sym_cwt_type_marker] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(111),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_identifier] = ACTIONS(119),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_else_if] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(119),
    [anon_sym_limit] = ACTIONS(119),
    [anon_sym_trigger] = ACTIONS(119),
    [anon_sym_potential] = ACTIONS(119),
    [anon_sym_allow] = ACTIONS(119),
    [anon_sym_AND] = ACTIONS(119),
    [anon_sym_OR] = ACTIONS(119),
    [anon_sym_NOT] = ACTIONS(119),
    [sym_scope_keyword] = ACTIONS(119),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(114),
    [anon_sym_RBRACK] = ACTIONS(114),
    [sym_template_string] = ACTIONS(114),
    [sym_string] = ACTIONS(119),
    [sym_number] = ACTIONS(119),
    [anon_sym_yes] = ACTIONS(119),
    [anon_sym_no] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(119),
    [sym_placeholder_value] = ACTIONS(114),
    [sym_scalar_keyword] = ACTIONS(119),
    [sym_cwt_value_ref] = ACTIONS(119),
    [sym_cwt_type_marker] = ACTIONS(119),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(107),
    [anon_sym_else_if] = ACTIONS(107),
    [anon_sym_else] = ACTIONS(107),
    [anon_sym_limit] = ACTIONS(107),
    [anon_sym_trigger] = ACTIONS(107),
    [anon_sym_potential] = ACTIONS(107),
    [anon_sym_allow] = ACTIONS(107),
    [anon_sym_AND] = ACTIONS(107),
    [anon_sym_OR] = ACTIONS(107),
    [anon_sym_NOT] = ACTIONS(107),
    [sym_scope_keyword] = ACTIONS(107),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [sym_template_string] = ACTIONS(105),
    [sym_string] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [anon_sym_yes] = ACTIONS(107),
    [anon_sym_no] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [sym_placeholder_value] = ACTIONS(105),
    [sym_scalar_keyword] = ACTIONS(107),
    [sym_cwt_value_ref] = ACTIONS(107),
    [sym_cwt_type_marker] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(105),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(123),
    [anon_sym_else_if] = ACTIONS(123),
    [anon_sym_else] = ACTIONS(123),
    [anon_sym_limit] = ACTIONS(123),
    [anon_sym_trigger] = ACTIONS(123),
    [anon_sym_potential] = ACTIONS(123),
    [anon_sym_allow] = ACTIONS(123),
    [anon_sym_AND] = ACTIONS(123),
    [anon_sym_OR] = ACTIONS(123),
    [anon_sym_NOT] = ACTIONS(123),
    [sym_scope_keyword] = ACTIONS(123),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [sym_template_string] = ACTIONS(121),
    [sym_string] = ACTIONS(123),
    [sym_number] = ACTIONS(123),
    [anon_sym_yes] = ACTIONS(123),
    [anon_sym_no] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(123),
    [anon_sym_false] = ACTIONS(123),
    [sym_placeholder_value] = ACTIONS(121),
    [sym_scalar_keyword] = ACTIONS(123),
    [sym_cwt_value_ref] = ACTIONS(123),
    [sym_cwt_type_marker] = ACTIONS(123),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_if] = ACTIONS(127),
    [anon_sym_else_if] = ACTIONS(127),
    [anon_sym_else] = ACTIONS(127),
    [anon_sym_limit] = ACTIONS(127),
    [anon_sym_trigger] = ACTIONS(127),
    [anon_sym_potential] = ACTIONS(127),
    [anon_sym_allow] = ACTIONS(127),
    [anon_sym_AND] = ACTIONS(127),
    [anon_sym_OR] = ACTIONS(127),
    [anon_sym_NOT] = ACTIONS(127),
    [sym_scope_keyword] = ACTIONS(127),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [sym_template_string] = ACTIONS(125),
    [sym_string] = ACTIONS(127),
    [sym_number] = ACTIONS(127),
    [anon_sym_yes] = ACTIONS(127),
    [anon_sym_no] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(127),
    [sym_placeholder_value] = ACTIONS(125),
    [sym_scalar_keyword] = ACTIONS(127),
    [sym_cwt_value_ref] = ACTIONS(127),
    [sym_cwt_type_marker] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(125),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(131),
    [anon_sym_else_if] = ACTIONS(131),
    [anon_sym_else] = ACTIONS(131),
    [anon_sym_limit] = ACTIONS(131),
    [anon_sym_trigger] = ACTIONS(131),
    [anon_sym_potential] = ACTIONS(131),
    [anon_sym_allow] = ACTIONS(131),
    [anon_sym_AND] = ACTIONS(131),
    [anon_sym_OR] = ACTIONS(131),
    [anon_sym_NOT] = ACTIONS(131),
    [sym_scope_keyword] = ACTIONS(131),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_template_string] = ACTIONS(129),
    [sym_string] = ACTIONS(131),
    [sym_number] = ACTIONS(131),
    [anon_sym_yes] = ACTIONS(131),
    [anon_sym_no] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(131),
    [sym_placeholder_value] = ACTIONS(129),
    [sym_scalar_keyword] = ACTIONS(131),
    [sym_cwt_value_ref] = ACTIONS(131),
    [sym_cwt_type_marker] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_identifier] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(131),
    [anon_sym_else_if] = ACTIONS(131),
    [anon_sym_else] = ACTIONS(131),
    [anon_sym_limit] = ACTIONS(131),
    [anon_sym_trigger] = ACTIONS(131),
    [anon_sym_potential] = ACTIONS(131),
    [anon_sym_allow] = ACTIONS(131),
    [anon_sym_AND] = ACTIONS(131),
    [anon_sym_OR] = ACTIONS(131),
    [anon_sym_NOT] = ACTIONS(131),
    [sym_scope_keyword] = ACTIONS(131),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_template_string] = ACTIONS(129),
    [sym_string] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [anon_sym_yes] = ACTIONS(131),
    [anon_sym_no] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(131),
    [sym_placeholder_value] = ACTIONS(129),
    [sym_scalar_keyword] = ACTIONS(131),
    [sym_cwt_value_ref] = ACTIONS(131),
    [sym_cwt_type_marker] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [19] = {
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_identifier] = ACTIONS(138),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_if] = ACTIONS(138),
    [anon_sym_else_if] = ACTIONS(138),
    [anon_sym_else] = ACTIONS(138),
    [anon_sym_limit] = ACTIONS(138),
    [anon_sym_trigger] = ACTIONS(138),
    [anon_sym_potential] = ACTIONS(138),
    [anon_sym_allow] = ACTIONS(138),
    [anon_sym_AND] = ACTIONS(138),
    [anon_sym_OR] = ACTIONS(138),
    [anon_sym_NOT] = ACTIONS(138),
    [sym_scope_keyword] = ACTIONS(138),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
    [sym_template_string] = ACTIONS(136),
    [sym_string] = ACTIONS(138),
    [sym_number] = ACTIONS(138),
    [anon_sym_yes] = ACTIONS(138),
    [anon_sym_no] = ACTIONS(138),
    [anon_sym_true] = ACTIONS(138),
    [anon_sym_false] = ACTIONS(138),
    [sym_placeholder_value] = ACTIONS(136),
    [sym_scalar_keyword] = ACTIONS(138),
    [sym_cwt_value_ref] = ACTIONS(138),
    [sym_cwt_type_marker] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(136),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_if] = ACTIONS(142),
    [anon_sym_else_if] = ACTIONS(142),
    [anon_sym_else] = ACTIONS(142),
    [anon_sym_limit] = ACTIONS(142),
    [anon_sym_trigger] = ACTIONS(142),
    [anon_sym_potential] = ACTIONS(142),
    [anon_sym_allow] = ACTIONS(142),
    [anon_sym_AND] = ACTIONS(142),
    [anon_sym_OR] = ACTIONS(142),
    [anon_sym_NOT] = ACTIONS(142),
    [sym_scope_keyword] = ACTIONS(142),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(140),
    [sym_template_string] = ACTIONS(140),
    [sym_string] = ACTIONS(142),
    [sym_number] = ACTIONS(142),
    [anon_sym_yes] = ACTIONS(142),
    [anon_sym_no] = ACTIONS(142),
    [anon_sym_true] = ACTIONS(142),
    [anon_sym_false] = ACTIONS(142),
    [sym_placeholder_value] = ACTIONS(140),
    [sym_scalar_keyword] = ACTIONS(142),
    [sym_cwt_value_ref] = ACTIONS(142),
    [sym_cwt_type_marker] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [21] = {
    [sym_comment] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_identifier] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_else_if] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_limit] = ACTIONS(147),
    [anon_sym_trigger] = ACTIONS(147),
    [anon_sym_potential] = ACTIONS(147),
    [anon_sym_allow] = ACTIONS(147),
    [anon_sym_AND] = ACTIONS(147),
    [anon_sym_OR] = ACTIONS(147),
    [anon_sym_NOT] = ACTIONS(147),
    [sym_scope_keyword] = ACTIONS(147),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [sym_template_string] = ACTIONS(144),
    [sym_string] = ACTIONS(147),
    [sym_number] = ACTIONS(147),
    [anon_sym_yes] = ACTIONS(147),
    [anon_sym_no] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [sym_placeholder_value] = ACTIONS(144),
    [sym_scalar_keyword] = ACTIONS(147),
    [sym_cwt_value_ref] = ACTIONS(147),
    [sym_cwt_type_marker] = ACTIONS(147),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [22] = {
    [sym_comment] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_identifier] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_if] = ACTIONS(152),
    [anon_sym_else_if] = ACTIONS(152),
    [anon_sym_else] = ACTIONS(152),
    [anon_sym_limit] = ACTIONS(152),
    [anon_sym_trigger] = ACTIONS(152),
    [anon_sym_potential] = ACTIONS(152),
    [anon_sym_allow] = ACTIONS(152),
    [anon_sym_AND] = ACTIONS(152),
    [anon_sym_OR] = ACTIONS(152),
    [anon_sym_NOT] = ACTIONS(152),
    [sym_scope_keyword] = ACTIONS(152),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(150),
    [anon_sym_RBRACK] = ACTIONS(150),
    [sym_template_string] = ACTIONS(150),
    [sym_string] = ACTIONS(152),
    [sym_number] = ACTIONS(152),
    [anon_sym_yes] = ACTIONS(152),
    [anon_sym_no] = ACTIONS(152),
    [anon_sym_true] = ACTIONS(152),
    [anon_sym_false] = ACTIONS(152),
    [sym_placeholder_value] = ACTIONS(150),
    [sym_scalar_keyword] = ACTIONS(152),
    [sym_cwt_value_ref] = ACTIONS(152),
    [sym_cwt_type_marker] = ACTIONS(152),
    [anon_sym_DOLLAR] = ACTIONS(150),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [23] = {
    [sym_comment] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(131),
    [anon_sym_else_if] = ACTIONS(131),
    [anon_sym_else] = ACTIONS(131),
    [anon_sym_limit] = ACTIONS(131),
    [anon_sym_trigger] = ACTIONS(131),
    [anon_sym_potential] = ACTIONS(131),
    [anon_sym_allow] = ACTIONS(131),
    [anon_sym_AND] = ACTIONS(131),
    [anon_sym_OR] = ACTIONS(131),
    [anon_sym_NOT] = ACTIONS(131),
    [sym_scope_keyword] = ACTIONS(131),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_template_string] = ACTIONS(129),
    [sym_string] = ACTIONS(131),
    [sym_number] = ACTIONS(131),
    [anon_sym_yes] = ACTIONS(131),
    [anon_sym_no] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(131),
    [sym_placeholder_value] = ACTIONS(129),
    [sym_scalar_keyword] = ACTIONS(131),
    [sym_cwt_value_ref] = ACTIONS(131),
    [sym_cwt_type_marker] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [24] = {
    [sym_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_if] = ACTIONS(156),
    [anon_sym_else_if] = ACTIONS(156),
    [anon_sym_else] = ACTIONS(156),
    [anon_sym_limit] = ACTIONS(156),
    [anon_sym_trigger] = ACTIONS(156),
    [anon_sym_potential] = ACTIONS(156),
    [anon_sym_allow] = ACTIONS(156),
    [anon_sym_AND] = ACTIONS(156),
    [anon_sym_OR] = ACTIONS(156),
    [anon_sym_NOT] = ACTIONS(156),
    [sym_scope_keyword] = ACTIONS(156),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [sym_template_string] = ACTIONS(154),
    [sym_string] = ACTIONS(156),
    [sym_number] = ACTIONS(156),
    [anon_sym_yes] = ACTIONS(156),
    [anon_sym_no] = ACTIONS(156),
    [anon_sym_true] = ACTIONS(156),
    [anon_sym_false] = ACTIONS(156),
    [sym_placeholder_value] = ACTIONS(154),
    [sym_scalar_keyword] = ACTIONS(156),
    [sym_cwt_value_ref] = ACTIONS(156),
    [sym_cwt_type_marker] = ACTIONS(156),
    [anon_sym_DOLLAR] = ACTIONS(154),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [25] = {
    [sym_comment] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_identifier] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_if] = ACTIONS(163),
    [anon_sym_else_if] = ACTIONS(163),
    [anon_sym_else] = ACTIONS(163),
    [anon_sym_limit] = ACTIONS(163),
    [anon_sym_trigger] = ACTIONS(163),
    [anon_sym_potential] = ACTIONS(163),
    [anon_sym_allow] = ACTIONS(163),
    [anon_sym_AND] = ACTIONS(163),
    [anon_sym_OR] = ACTIONS(163),
    [anon_sym_NOT] = ACTIONS(163),
    [sym_scope_keyword] = ACTIONS(163),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(158),
    [sym_template_string] = ACTIONS(158),
    [sym_string] = ACTIONS(163),
    [sym_number] = ACTIONS(160),
    [anon_sym_yes] = ACTIONS(163),
    [anon_sym_no] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [sym_placeholder_value] = ACTIONS(158),
    [sym_scalar_keyword] = ACTIONS(163),
    [sym_cwt_value_ref] = ACTIONS(163),
    [sym_cwt_type_marker] = ACTIONS(163),
    [anon_sym_DOLLAR] = ACTIONS(158),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [26] = {
    [sym_comment] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_identifier] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_if] = ACTIONS(163),
    [anon_sym_else_if] = ACTIONS(163),
    [anon_sym_else] = ACTIONS(163),
    [anon_sym_limit] = ACTIONS(163),
    [anon_sym_trigger] = ACTIONS(163),
    [anon_sym_potential] = ACTIONS(163),
    [anon_sym_allow] = ACTIONS(163),
    [anon_sym_AND] = ACTIONS(163),
    [anon_sym_OR] = ACTIONS(163),
    [anon_sym_NOT] = ACTIONS(163),
    [sym_scope_keyword] = ACTIONS(163),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(158),
    [sym_template_string] = ACTIONS(158),
    [sym_string] = ACTIONS(163),
    [sym_number] = ACTIONS(163),
    [anon_sym_yes] = ACTIONS(163),
    [anon_sym_no] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [sym_placeholder_value] = ACTIONS(158),
    [sym_scalar_keyword] = ACTIONS(163),
    [sym_cwt_value_ref] = ACTIONS(163),
    [sym_cwt_type_marker] = ACTIONS(163),
    [anon_sym_DOLLAR] = ACTIONS(158),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [27] = {
    [sym_comment] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_identifier] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_if] = ACTIONS(167),
    [anon_sym_else_if] = ACTIONS(167),
    [anon_sym_else] = ACTIONS(167),
    [anon_sym_limit] = ACTIONS(167),
    [anon_sym_trigger] = ACTIONS(167),
    [anon_sym_potential] = ACTIONS(167),
    [anon_sym_allow] = ACTIONS(167),
    [anon_sym_AND] = ACTIONS(167),
    [anon_sym_OR] = ACTIONS(167),
    [anon_sym_NOT] = ACTIONS(167),
    [sym_scope_keyword] = ACTIONS(167),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [sym_template_string] = ACTIONS(165),
    [sym_string] = ACTIONS(167),
    [sym_number] = ACTIONS(167),
    [anon_sym_yes] = ACTIONS(167),
    [anon_sym_no] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [sym_placeholder_value] = ACTIONS(165),
    [sym_scalar_keyword] = ACTIONS(167),
    [sym_cwt_value_ref] = ACTIONS(167),
    [sym_cwt_type_marker] = ACTIONS(167),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [28] = {
    [sym_comment] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(107),
    [anon_sym_else_if] = ACTIONS(107),
    [anon_sym_else] = ACTIONS(107),
    [anon_sym_limit] = ACTIONS(107),
    [anon_sym_trigger] = ACTIONS(107),
    [anon_sym_potential] = ACTIONS(107),
    [anon_sym_allow] = ACTIONS(107),
    [anon_sym_AND] = ACTIONS(107),
    [anon_sym_OR] = ACTIONS(107),
    [anon_sym_NOT] = ACTIONS(107),
    [sym_scope_keyword] = ACTIONS(107),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [sym_template_string] = ACTIONS(105),
    [sym_string] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [anon_sym_yes] = ACTIONS(107),
    [anon_sym_no] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [sym_placeholder_value] = ACTIONS(105),
    [sym_scalar_keyword] = ACTIONS(107),
    [sym_cwt_value_ref] = ACTIONS(107),
    [sym_cwt_type_marker] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(105),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [29] = {
    [sym_comment] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_identifier] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_if] = ACTIONS(172),
    [anon_sym_else_if] = ACTIONS(172),
    [anon_sym_else] = ACTIONS(172),
    [anon_sym_limit] = ACTIONS(172),
    [anon_sym_trigger] = ACTIONS(172),
    [anon_sym_potential] = ACTIONS(172),
    [anon_sym_allow] = ACTIONS(172),
    [anon_sym_AND] = ACTIONS(172),
    [anon_sym_OR] = ACTIONS(172),
    [anon_sym_NOT] = ACTIONS(172),
    [sym_scope_keyword] = ACTIONS(172),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_template_string] = ACTIONS(169),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(172),
    [anon_sym_yes] = ACTIONS(172),
    [anon_sym_no] = ACTIONS(172),
    [anon_sym_true] = ACTIONS(172),
    [anon_sym_false] = ACTIONS(172),
    [sym_placeholder_value] = ACTIONS(169),
    [sym_scalar_keyword] = ACTIONS(172),
    [sym_cwt_value_ref] = ACTIONS(172),
    [sym_cwt_type_marker] = ACTIONS(172),
    [anon_sym_DOLLAR] = ACTIONS(169),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [30] = {
    [sym_comment] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_else_if] = ACTIONS(177),
    [anon_sym_else] = ACTIONS(177),
    [anon_sym_limit] = ACTIONS(177),
    [anon_sym_trigger] = ACTIONS(177),
    [anon_sym_potential] = ACTIONS(177),
    [anon_sym_allow] = ACTIONS(177),
    [anon_sym_AND] = ACTIONS(177),
    [anon_sym_OR] = ACTIONS(177),
    [anon_sym_NOT] = ACTIONS(177),
    [sym_scope_keyword] = ACTIONS(177),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [sym_template_string] = ACTIONS(175),
    [sym_string] = ACTIONS(177),
    [sym_number] = ACTIONS(177),
    [anon_sym_yes] = ACTIONS(177),
    [anon_sym_no] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_false] = ACTIONS(177),
    [sym_placeholder_value] = ACTIONS(175),
    [sym_scalar_keyword] = ACTIONS(177),
    [sym_cwt_value_ref] = ACTIONS(177),
    [sym_cwt_type_marker] = ACTIONS(177),
    [anon_sym_DOLLAR] = ACTIONS(175),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [31] = {
    [sym_comment] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_identifier] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_if] = ACTIONS(181),
    [anon_sym_else_if] = ACTIONS(181),
    [anon_sym_else] = ACTIONS(181),
    [anon_sym_limit] = ACTIONS(181),
    [anon_sym_trigger] = ACTIONS(181),
    [anon_sym_potential] = ACTIONS(181),
    [anon_sym_allow] = ACTIONS(181),
    [anon_sym_AND] = ACTIONS(181),
    [anon_sym_OR] = ACTIONS(181),
    [anon_sym_NOT] = ACTIONS(181),
    [sym_scope_keyword] = ACTIONS(181),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [sym_template_string] = ACTIONS(179),
    [sym_string] = ACTIONS(181),
    [sym_number] = ACTIONS(181),
    [anon_sym_yes] = ACTIONS(181),
    [anon_sym_no] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(181),
    [sym_placeholder_value] = ACTIONS(179),
    [sym_scalar_keyword] = ACTIONS(181),
    [sym_cwt_value_ref] = ACTIONS(181),
    [sym_cwt_type_marker] = ACTIONS(181),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [32] = {
    [sym_comment] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_identifier] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(185),
    [anon_sym_else_if] = ACTIONS(185),
    [anon_sym_else] = ACTIONS(185),
    [anon_sym_limit] = ACTIONS(185),
    [anon_sym_trigger] = ACTIONS(185),
    [anon_sym_potential] = ACTIONS(185),
    [anon_sym_allow] = ACTIONS(185),
    [anon_sym_AND] = ACTIONS(185),
    [anon_sym_OR] = ACTIONS(185),
    [anon_sym_NOT] = ACTIONS(185),
    [sym_scope_keyword] = ACTIONS(185),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [sym_template_string] = ACTIONS(183),
    [sym_string] = ACTIONS(185),
    [sym_number] = ACTIONS(185),
    [anon_sym_yes] = ACTIONS(185),
    [anon_sym_no] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(185),
    [sym_placeholder_value] = ACTIONS(183),
    [sym_scalar_keyword] = ACTIONS(185),
    [sym_cwt_value_ref] = ACTIONS(185),
    [sym_cwt_type_marker] = ACTIONS(185),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [33] = {
    [sym_comment] = STATE(33),
    [sym_identifier] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_if] = ACTIONS(131),
    [anon_sym_else_if] = ACTIONS(131),
    [anon_sym_else] = ACTIONS(131),
    [anon_sym_limit] = ACTIONS(131),
    [anon_sym_trigger] = ACTIONS(131),
    [anon_sym_potential] = ACTIONS(131),
    [anon_sym_allow] = ACTIONS(131),
    [anon_sym_AND] = ACTIONS(131),
    [anon_sym_OR] = ACTIONS(131),
    [anon_sym_NOT] = ACTIONS(131),
    [sym_scope_keyword] = ACTIONS(131),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(129),
    [sym_template_string] = ACTIONS(129),
    [sym_string] = ACTIONS(187),
    [sym_number] = ACTIONS(187),
    [anon_sym_yes] = ACTIONS(187),
    [anon_sym_no] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(187),
    [sym_placeholder_value] = ACTIONS(190),
    [sym_scalar_keyword] = ACTIONS(187),
    [sym_cwt_value_ref] = ACTIONS(187),
    [sym_cwt_type_marker] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(190),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [34] = {
    [sym_comment] = STATE(34),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_if] = ACTIONS(193),
    [anon_sym_else_if] = ACTIONS(193),
    [anon_sym_else] = ACTIONS(193),
    [anon_sym_limit] = ACTIONS(193),
    [anon_sym_trigger] = ACTIONS(193),
    [anon_sym_potential] = ACTIONS(193),
    [anon_sym_allow] = ACTIONS(193),
    [anon_sym_AND] = ACTIONS(193),
    [anon_sym_OR] = ACTIONS(193),
    [anon_sym_NOT] = ACTIONS(193),
    [sym_scope_keyword] = ACTIONS(193),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(195),
    [sym_template_string] = ACTIONS(195),
    [sym_string] = ACTIONS(193),
    [sym_number] = ACTIONS(193),
    [anon_sym_yes] = ACTIONS(193),
    [anon_sym_no] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(193),
    [sym_placeholder_value] = ACTIONS(195),
    [sym_scalar_keyword] = ACTIONS(193),
    [sym_cwt_value_ref] = ACTIONS(193),
    [sym_cwt_type_marker] = ACTIONS(193),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [35] = {
    [sym_comment] = STATE(35),
    [sym_identifier] = ACTIONS(197),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_if] = ACTIONS(131),
    [anon_sym_else_if] = ACTIONS(131),
    [anon_sym_else] = ACTIONS(131),
    [anon_sym_limit] = ACTIONS(131),
    [anon_sym_trigger] = ACTIONS(131),
    [anon_sym_potential] = ACTIONS(131),
    [anon_sym_allow] = ACTIONS(131),
    [anon_sym_AND] = ACTIONS(131),
    [anon_sym_OR] = ACTIONS(131),
    [anon_sym_NOT] = ACTIONS(131),
    [sym_scope_keyword] = ACTIONS(131),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(129),
    [sym_template_string] = ACTIONS(129),
    [sym_string] = ACTIONS(187),
    [sym_number] = ACTIONS(197),
    [anon_sym_yes] = ACTIONS(187),
    [anon_sym_no] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(187),
    [sym_placeholder_value] = ACTIONS(190),
    [sym_scalar_keyword] = ACTIONS(187),
    [sym_cwt_value_ref] = ACTIONS(187),
    [sym_cwt_type_marker] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(190),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [36] = {
    [sym_comment] = STATE(36),
    [sym_identifier] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_if] = ACTIONS(131),
    [anon_sym_else_if] = ACTIONS(131),
    [anon_sym_else] = ACTIONS(131),
    [anon_sym_limit] = ACTIONS(131),
    [anon_sym_trigger] = ACTIONS(131),
    [anon_sym_potential] = ACTIONS(131),
    [anon_sym_allow] = ACTIONS(131),
    [anon_sym_AND] = ACTIONS(131),
    [anon_sym_OR] = ACTIONS(131),
    [anon_sym_NOT] = ACTIONS(131),
    [sym_scope_keyword] = ACTIONS(131),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(129),
    [sym_template_string] = ACTIONS(129),
    [sym_string] = ACTIONS(187),
    [sym_number] = ACTIONS(187),
    [anon_sym_yes] = ACTIONS(187),
    [anon_sym_no] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(187),
    [sym_placeholder_value] = ACTIONS(190),
    [sym_scalar_keyword] = ACTIONS(187),
    [sym_cwt_value_ref] = ACTIONS(187),
    [sym_cwt_type_marker] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(190),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
  [37] = {
    [sym_comment] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_identifier] = ACTIONS(203),
    [anon_sym_if] = ACTIONS(203),
    [anon_sym_else_if] = ACTIONS(203),
    [anon_sym_else] = ACTIONS(203),
    [anon_sym_limit] = ACTIONS(203),
    [anon_sym_trigger] = ACTIONS(203),
    [anon_sym_potential] = ACTIONS(203),
    [anon_sym_allow] = ACTIONS(203),
    [anon_sym_AND] = ACTIONS(203),
    [anon_sym_OR] = ACTIONS(203),
    [anon_sym_NOT] = ACTIONS(203),
    [sym_scope_keyword] = ACTIONS(203),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(201),
    [sym_template_string] = ACTIONS(201),
    [sym_string] = ACTIONS(203),
    [sym_number] = ACTIONS(203),
    [anon_sym_yes] = ACTIONS(203),
    [anon_sym_no] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(203),
    [sym_placeholder_value] = ACTIONS(201),
    [sym_scalar_keyword] = ACTIONS(203),
    [sym_cwt_value_ref] = ACTIONS(203),
    [sym_cwt_type_marker] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [sym_doc_attribute_comment] = ACTIONS(3),
    [sym__hash_comment] = ACTIONS(5),
    [sym__dash_line_comment] = ACTIONS(7),
    [sym__dash_block_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_map,
    STATE(25), 1,
      sym_variable,
    STATE(28), 1,
      sym_boolean,
    STATE(38), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(25), 2,
      sym_string,
      sym_placeholder_value,
    ACTIONS(205), 2,
      sym_number,
      sym_identifier,
    ACTIONS(209), 3,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
    STATE(26), 3,
      sym_array,
      sym_simple_value,
      sym_variable_embedded_identifier,
    ACTIONS(23), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
  [53] = 13,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_variable,
    STATE(28), 1,
      sym_boolean,
    STATE(39), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(25), 2,
      sym_string,
      sym_placeholder_value,
    ACTIONS(205), 2,
      sym_number,
      sym_identifier,
    ACTIONS(209), 3,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
    ACTIONS(23), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_map,
      sym_array,
      sym_simple_value,
      sym_variable_embedded_identifier,
  [104] = 14,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(40), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_array_repeat1,
    STATE(48), 1,
      sym_boolean,
    STATE(50), 1,
      sym_variable,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(211), 2,
      sym_number,
      sym_identifier,
    ACTIONS(215), 2,
      sym_string,
      sym_placeholder_value,
    STATE(43), 2,
      sym_simple_value,
      sym_variable_embedded_identifier,
    ACTIONS(219), 3,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
    ACTIONS(217), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
  [156] = 13,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym_boolean,
    STATE(50), 1,
      sym_variable,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(223), 2,
      sym_number,
      sym_identifier,
    ACTIONS(228), 2,
      sym_string,
      sym_placeholder_value,
    STATE(41), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(43), 2,
      sym_simple_value,
      sym_variable_embedded_identifier,
    ACTIONS(234), 3,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
    ACTIONS(231), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
  [206] = 8,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(240), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym_comment,
    STATE(47), 1,
      sym_variable,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(105), 3,
      anon_sym_RBRACE,
      sym_string,
      sym_placeholder_value,
    ACTIONS(107), 9,
      sym_number,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
      sym_identifier,
  [242] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    STATE(43), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(245), 4,
      anon_sym_RBRACE,
      sym_string,
      sym_placeholder_value,
      anon_sym_DOLLAR,
    ACTIONS(243), 9,
      sym_number,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
      sym_identifier,
  [273] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    STATE(44), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(125), 4,
      anon_sym_RBRACE,
      sym_string,
      sym_placeholder_value,
      anon_sym_DOLLAR,
    ACTIONS(127), 9,
      sym_number,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
      sym_identifier,
  [304] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    STATE(45), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(121), 4,
      anon_sym_RBRACE,
      sym_string,
      sym_placeholder_value,
      anon_sym_DOLLAR,
    ACTIONS(123), 9,
      sym_number,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
      sym_identifier,
  [335] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    STATE(46), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(114), 4,
      anon_sym_RBRACE,
      sym_string,
      sym_placeholder_value,
      anon_sym_DOLLAR,
    ACTIONS(119), 9,
      sym_number,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
      sym_identifier,
  [366] = 7,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    STATE(47), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(247), 2,
      sym_number,
      sym_identifier,
    ACTIONS(114), 4,
      anon_sym_RBRACE,
      sym_string,
      sym_placeholder_value,
      anon_sym_DOLLAR,
    ACTIONS(119), 7,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
  [399] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    STATE(48), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(105), 4,
      anon_sym_RBRACE,
      sym_string,
      sym_placeholder_value,
      anon_sym_DOLLAR,
    ACTIONS(107), 9,
      sym_number,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
      sym_identifier,
  [430] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    STATE(49), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(165), 4,
      anon_sym_RBRACE,
      sym_string,
      sym_placeholder_value,
      anon_sym_DOLLAR,
    ACTIONS(167), 9,
      sym_number,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
      sym_identifier,
  [461] = 7,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    STATE(50), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(250), 2,
      sym_number,
      sym_identifier,
    ACTIONS(245), 4,
      anon_sym_RBRACE,
      sym_string,
      sym_placeholder_value,
      anon_sym_DOLLAR,
    ACTIONS(243), 7,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_true,
      anon_sym_false,
      sym_scalar_keyword,
      sym_cwt_value_ref,
      sym_cwt_type_marker,
  [494] = 7,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    STATE(19), 1,
      sym_map,
    STATE(51), 1,
      sym_comment,
  [516] = 5,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    STATE(52), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(257), 2,
      sym_cwt_type_marker,
      sym_identifier,
  [534] = 7,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    STATE(31), 1,
      sym_map,
    STATE(53), 1,
      sym_comment,
  [556] = 5,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    STATE(54), 1,
      sym_comment,
    ACTIONS(7), 2,
      sym__dash_line_comment,
      sym__dash_block_comment,
    ACTIONS(259), 2,
      sym_cwt_type_marker,
      sym_identifier,
  [574] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      sym_comment,
  [593] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    ACTIONS(263), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_comment,
  [612] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    ACTIONS(265), 1,
      anon_sym_EQ,
    STATE(57), 1,
      sym_comment,
  [631] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    ACTIONS(267), 1,
      anon_sym_EQ,
    STATE(58), 1,
      sym_comment,
  [650] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    ACTIONS(269), 1,
      anon_sym_EQ,
    STATE(59), 1,
      sym_comment,
  [669] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(60), 1,
      sym_comment,
  [688] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(109), 1,
      anon_sym_EQ,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    STATE(61), 1,
      sym_comment,
  [707] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_comment,
  [726] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    ACTIONS(275), 1,
      anon_sym_EQ,
    STATE(63), 1,
      sym_comment,
  [745] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    STATE(64), 1,
      sym_comment,
  [764] = 6,
    ACTIONS(3), 1,
      sym_doc_attribute_comment,
    ACTIONS(5), 1,
      sym__hash_comment,
    ACTIONS(7), 1,
      sym__dash_line_comment,
    ACTIONS(255), 1,
      sym__dash_block_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_comment,
  [783] = 1,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(38)] = 0,
  [SMALL_STATE(39)] = 53,
  [SMALL_STATE(40)] = 104,
  [SMALL_STATE(41)] = 156,
  [SMALL_STATE(42)] = 206,
  [SMALL_STATE(43)] = 242,
  [SMALL_STATE(44)] = 273,
  [SMALL_STATE(45)] = 304,
  [SMALL_STATE(46)] = 335,
  [SMALL_STATE(47)] = 366,
  [SMALL_STATE(48)] = 399,
  [SMALL_STATE(49)] = 430,
  [SMALL_STATE(50)] = 461,
  [SMALL_STATE(51)] = 494,
  [SMALL_STATE(52)] = 516,
  [SMALL_STATE(53)] = 534,
  [SMALL_STATE(54)] = 556,
  [SMALL_STATE(55)] = 574,
  [SMALL_STATE(56)] = 593,
  [SMALL_STATE(57)] = 612,
  [SMALL_STATE(58)] = 631,
  [SMALL_STATE(59)] = 650,
  [SMALL_STATE(60)] = 669,
  [SMALL_STATE(61)] = 688,
  [SMALL_STATE(62)] = 707,
  [SMALL_STATE(63)] = 726,
  [SMALL_STATE(64)] = 745,
  [SMALL_STATE(65)] = 764,
  [SMALL_STATE(66)] = 783,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(10),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(57),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(58),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(59),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(60),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(61),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(14),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(27),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(28),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(54),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_value, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_value, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_simple_value, 1, 0, 0), SHIFT(54),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_embedded_identifier, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_embedded_identifier, 2, 0, 0), SHIFT(15),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_embedded_identifier, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_embedded_identifier, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_embedded_identifier, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0), SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_statement, 3, 0, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_statement, 3, 0, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 5), REDUCE(sym_condition_statement, 3, 0, 4),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 5), REDUCE(sym_condition_statement, 3, 0, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_map, 4, 0, 6),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_map, 4, 0, 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 5),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 5), SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_map, 2, 0, 0), REDUCE(sym_array, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_map, 2, 0, 0), REDUCE(sym_array, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_statement, 3, 0, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_statement, 3, 0, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_map, 5, 0, 6),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_map, 5, 0, 6),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0), REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0), REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 1, 0, 0),
  [197] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0), REDUCE(aux_sym_array_repeat1, 1, 0, 0), SHIFT(13),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_simple_value, 1, 0, 0), SHIFT(52),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_embedded_identifier, 2, 0, 0), SHIFT(45),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1, 0, 0), SHIFT(46),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_keyword, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_keyword, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [279] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_paradox(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
