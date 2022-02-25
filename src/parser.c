#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 657
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 174
#define ALIAS_COUNT 13
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 20

enum {
  anon_sym_PERCENT_PERCENT_LBRACE = 1,
  anon_sym_COLON = 2,
  anon_sym_RBRACE_PERCENT_PERCENT = 3,
  aux_sym_diagram_sequence_token1 = 4,
  aux_sym_sequence_stmt_participant_token1 = 5,
  aux_sym_sequence_stmt_participant_token2 = 6,
  aux_sym_sequence_stmt_actor_token1 = 7,
  aux_sym_sequence_stmt_autonumber_token1 = 8,
  aux_sym_sequence_stmt_activate_token1 = 9,
  aux_sym_sequence_stmt_deactivate_token1 = 10,
  aux_sym_sequence_stmt_note_token1 = 11,
  aux_sym_sequence_stmt_note_token2 = 12,
  anon_sym_COMMA = 13,
  aux_sym_sequence_stmt_links_token1 = 14,
  aux_sym_sequence_stmt_link_token1 = 15,
  aux_sym_sequence_stmt_properties_token1 = 16,
  aux_sym_sequence_stmt_details_token1 = 17,
  aux_sym_sequence_stmt_title_token1 = 18,
  aux_sym_sequence_stmt_loop_token1 = 19,
  aux_sym_sequence_stmt_loop_token2 = 20,
  aux_sym_sequence_stmt_rect_token1 = 21,
  aux_sym_sequence_stmt_opt_token1 = 22,
  aux_sym_sequence_stmt_alt_token1 = 23,
  aux_sym_sequence_stmt_alt_token2 = 24,
  aux_sym_sequence_stmt_par_token1 = 25,
  aux_sym_sequence_stmt_par_token2 = 26,
  aux_sym_diagram_class_token1 = 27,
  aux_sym_diagram_class_token2 = 28,
  anon_sym_TILDE = 29,
  aux_sym_class_generics_token1 = 30,
  anon_sym_class = 31,
  anon_sym_COLON_COLON_COLON = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  anon_sym_PLUS = 35,
  anon_sym_DASH = 36,
  anon_sym_POUND = 37,
  anon_sym_LPAREN = 38,
  anon_sym_RPAREN = 39,
  anon_sym_STAR = 40,
  anon_sym_DOLLAR = 41,
  anon_sym_LT_LT = 42,
  anon_sym_GT_GT = 43,
  aux_sym_diagram_state_token1 = 44,
  aux_sym_diagram_state_token2 = 45,
  aux_sym_state_stmt_simple_token1 = 46,
  sym__whitespace = 47,
  sym__newline = 48,
  sym_comment = 49,
  sym_type_directive = 50,
  sym_arg_directive = 51,
  aux_sym_direction_tb_token1 = 52,
  aux_sym_direction_bt_token1 = 53,
  aux_sym_direction_rl_token1 = 54,
  aux_sym_direction_lr_token1 = 55,
  sym__rest_text = 56,
  sym__actor_word = 57,
  sym_solid_arrow = 58,
  sym_dotted_arrow = 59,
  sym_solid_open_arrow = 60,
  anon_sym_DASH_DASH_GT = 61,
  sym_solid_cross = 62,
  sym_dotted_cross = 63,
  sym_solid_point = 64,
  sym_dotted_point = 65,
  aux_sym_note_placement_left_token1 = 66,
  aux_sym_note_placement_right_token1 = 67,
  sym__class_name = 68,
  sym__alpha_num_token = 69,
  sym__bquote_string = 70,
  sym__dquote_string = 71,
  sym_class_reltype_aggregation = 72,
  anon_sym_LT_PIPE = 73,
  anon_sym_PIPE_GT = 74,
  anon_sym_LT = 75,
  anon_sym_GT = 76,
  anon_sym_DASH_DASH = 77,
  sym_class_linetype_dotted = 78,
  aux_sym_class_label_token1 = 79,
  anon_sym_LBRACK_STAR_RBRACK = 80,
  aux_sym_state_name_token1 = 81,
  aux_sym_state_hide_empty_description_token1 = 82,
  sym_state_id = 83,
  aux_sym_state_annotation_fork_token1 = 84,
  aux_sym_state_annotation_fork_token2 = 85,
  aux_sym_state_annotation_join_token1 = 86,
  aux_sym_state_annotation_join_token2 = 87,
  aux_sym_state_annotation_choice_token1 = 88,
  aux_sym_state_annotation_choice_token2 = 89,
  sym_source_file = 90,
  sym_directive = 91,
  sym__direction = 92,
  sym_diagram_sequence = 93,
  sym__sequence_stmt = 94,
  sym_sequence_stmt_participant = 95,
  sym_sequence_stmt_actor = 96,
  sym_actor = 97,
  sym_sequence_stmt_signal = 98,
  sym_signal_type = 99,
  sym_sequence_stmt_autonumber = 100,
  sym_sequence_stmt_activate = 101,
  sym_sequence_stmt_deactivate = 102,
  sym_sequence_stmt_note = 103,
  sym_sequence_stmt_links = 104,
  sym_sequence_stmt_link = 105,
  sym_sequence_stmt_properties = 106,
  sym_sequence_stmt_details = 107,
  sym_note_placement = 108,
  sym_sequence_stmt_title = 109,
  sym_sequence_stmt_loop = 110,
  sym_sequence_stmt_rect = 111,
  sym_sequence_stmt_opt = 112,
  aux_sym__subdocument = 113,
  sym_sequence_stmt_alt = 114,
  sym_sequence_stmt_par = 115,
  sym_diagram_class = 116,
  sym__class_stmt = 117,
  sym_class_stmt_relation = 118,
  sym_class_name = 119,
  sym_class_name_body = 120,
  sym_class_generics = 121,
  sym_class_relation = 122,
  sym__class_reltype = 123,
  sym__class_linetype = 124,
  sym_class_stmt_class = 125,
  sym_class_method_line = 126,
  sym_class_annotation_line = 127,
  sym_class_stmt_method = 128,
  sym_class_stmt_annotation = 129,
  sym_diagram_state = 130,
  sym__state_stmt = 131,
  sym_state_stmt_simple = 132,
  sym_state_stmt_arrow = 133,
  sym_state_stmt_composite = 134,
  sym_state_composite_body = 135,
  sym_state_stmt_annotation = 136,
  sym_state_alias = 137,
  sym_state_stmt_hide_empty_description = 138,
  sym__state_annotation = 139,
  sym_state_note = 140,
  sym_direction_tb = 141,
  sym_direction_bt = 142,
  sym_direction_rl = 143,
  sym_direction_lr = 144,
  sym_dotted_open_arrow = 145,
  sym_signal_plus_sign = 146,
  sym_signal_minus_sign = 147,
  sym_note_placement_left = 148,
  sym_note_placement_right = 149,
  sym_class_reltype_extension = 150,
  sym_class_reltype_composition = 151,
  sym_class_reltype_dependency = 152,
  sym_class_linetype_solid = 153,
  sym_class_label = 154,
  sym_state_name = 155,
  sym_state_arrow = 156,
  sym_state_description = 157,
  sym_state_hide_empty_description = 158,
  sym_state_division = 159,
  sym_state_annotation_fork = 160,
  sym_state_annotation_join = 161,
  sym_state_annotation_choice = 162,
  aux_sym_diagram_sequence_repeat1 = 163,
  aux_sym_diagram_sequence_repeat2 = 164,
  aux_sym_actor_repeat1 = 165,
  aux_sym_sequence_stmt_alt_repeat1 = 166,
  aux_sym_sequence_stmt_par_repeat1 = 167,
  aux_sym_diagram_class_repeat1 = 168,
  aux_sym_class_name_body_repeat1 = 169,
  aux_sym_class_stmt_class_repeat1 = 170,
  aux_sym_class_method_line_repeat1 = 171,
  aux_sym_diagram_state_repeat1 = 172,
  aux_sym_state_composite_body_repeat1 = 173,
  alias_sym_alias = 174,
  alias_sym_annotation = 175,
  alias_sym_class_classifier_abstract = 176,
  alias_sym_class_style_name = 177,
  alias_sym_class_visibility_internal = 178,
  alias_sym_class_visibility_private = 179,
  alias_sym_class_visibility_public = 180,
  alias_sym_note_content = 181,
  alias_sym_sequence_stmt_alt_branch = 182,
  alias_sym_sequence_stmt_loop_inner = 183,
  alias_sym_sequence_stmt_opt_inner = 184,
  alias_sym_sequence_stmt_rect_inner = 185,
  alias_sym_title = 186,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT_LBRACE] = "%%{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE_PERCENT_PERCENT] = "}%%",
  [aux_sym_diagram_sequence_token1] = "sequenceDiagram",
  [aux_sym_sequence_stmt_participant_token1] = "participant",
  [aux_sym_sequence_stmt_participant_token2] = "as",
  [aux_sym_sequence_stmt_actor_token1] = "actor",
  [aux_sym_sequence_stmt_autonumber_token1] = "autonumber",
  [aux_sym_sequence_stmt_activate_token1] = "activate",
  [aux_sym_sequence_stmt_deactivate_token1] = "deactivate",
  [aux_sym_sequence_stmt_note_token1] = "note ",
  [aux_sym_sequence_stmt_note_token2] = "over",
  [anon_sym_COMMA] = ",",
  [aux_sym_sequence_stmt_links_token1] = "links",
  [aux_sym_sequence_stmt_link_token1] = "link",
  [aux_sym_sequence_stmt_properties_token1] = "properties",
  [aux_sym_sequence_stmt_details_token1] = "details",
  [aux_sym_sequence_stmt_title_token1] = "title",
  [aux_sym_sequence_stmt_loop_token1] = "loop",
  [aux_sym_sequence_stmt_loop_token2] = "end",
  [aux_sym_sequence_stmt_rect_token1] = "rect",
  [aux_sym_sequence_stmt_opt_token1] = "opt",
  [aux_sym_sequence_stmt_alt_token1] = "alt",
  [aux_sym_sequence_stmt_alt_token2] = "else",
  [aux_sym_sequence_stmt_par_token1] = "par",
  [aux_sym_sequence_stmt_par_token2] = "and",
  [aux_sym_diagram_class_token1] = "classDiagram-v2",
  [aux_sym_diagram_class_token2] = "classDiagram",
  [anon_sym_TILDE] = "~",
  [aux_sym_class_generics_token1] = "class_name",
  [anon_sym_class] = "class",
  [anon_sym_COLON_COLON_COLON] = ":::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_POUND] = "class_visibility_protected",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_DOLLAR] = "class_classifier_static",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [aux_sym_diagram_state_token1] = "stateDiagram",
  [aux_sym_diagram_state_token2] = "stateDiagram-v2",
  [aux_sym_state_stmt_simple_token1] = "state ",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [sym_type_directive] = "type_directive",
  [sym_arg_directive] = "arg_directive",
  [aux_sym_direction_tb_token1] = "direction tb",
  [aux_sym_direction_bt_token1] = "direction bt",
  [aux_sym_direction_rl_token1] = "direction rl",
  [aux_sym_direction_lr_token1] = "direction lr",
  [sym__rest_text] = "text",
  [sym__actor_word] = "_actor_word",
  [sym_solid_arrow] = "solid_arrow",
  [sym_dotted_arrow] = "dotted_arrow",
  [sym_solid_open_arrow] = "solid_open_arrow",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_solid_cross] = "solid_cross",
  [sym_dotted_cross] = "dotted_cross",
  [sym_solid_point] = "solid_point",
  [sym_dotted_point] = "dotted_point",
  [aux_sym_note_placement_left_token1] = "left of",
  [aux_sym_note_placement_right_token1] = "right of",
  [sym__class_name] = "_class_name",
  [sym__alpha_num_token] = "_alpha_num_token",
  [sym__bquote_string] = "_bquote_string",
  [sym__dquote_string] = "cardinality",
  [sym_class_reltype_aggregation] = "class_reltype_aggregation",
  [anon_sym_LT_PIPE] = "<|",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_DASH] = "--",
  [sym_class_linetype_dotted] = "class_linetype_dotted",
  [aux_sym_class_label_token1] = "class_label_token1",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [aux_sym_state_name_token1] = "state_name_token1",
  [aux_sym_state_hide_empty_description_token1] = "hide empty description",
  [sym_state_id] = "state_id",
  [aux_sym_state_annotation_fork_token1] = "state_annotation_fork_token1",
  [aux_sym_state_annotation_fork_token2] = "state_annotation_fork_token2",
  [aux_sym_state_annotation_join_token1] = "state_annotation_join_token1",
  [aux_sym_state_annotation_join_token2] = "state_annotation_join_token2",
  [aux_sym_state_annotation_choice_token1] = "state_annotation_choice_token1",
  [aux_sym_state_annotation_choice_token2] = "state_annotation_choice_token2",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym__direction] = "_direction",
  [sym_diagram_sequence] = "diagram_sequence",
  [sym__sequence_stmt] = "_sequence_stmt",
  [sym_sequence_stmt_participant] = "sequence_stmt_participant",
  [sym_sequence_stmt_actor] = "sequence_stmt_actor",
  [sym_actor] = "actor",
  [sym_sequence_stmt_signal] = "sequence_stmt_signal",
  [sym_signal_type] = "signal_type",
  [sym_sequence_stmt_autonumber] = "sequence_stmt_autonumber",
  [sym_sequence_stmt_activate] = "sequence_stmt_activate",
  [sym_sequence_stmt_deactivate] = "sequence_stmt_deactivate",
  [sym_sequence_stmt_note] = "sequence_stmt_note",
  [sym_sequence_stmt_links] = "sequence_stmt_links",
  [sym_sequence_stmt_link] = "sequence_stmt_link",
  [sym_sequence_stmt_properties] = "sequence_stmt_properties",
  [sym_sequence_stmt_details] = "sequence_stmt_details",
  [sym_note_placement] = "note_placement",
  [sym_sequence_stmt_title] = "sequence_stmt_title",
  [sym_sequence_stmt_loop] = "sequence_stmt_loop",
  [sym_sequence_stmt_rect] = "sequence_stmt_rect",
  [sym_sequence_stmt_opt] = "sequence_stmt_opt",
  [aux_sym__subdocument] = "_subdocument",
  [sym_sequence_stmt_alt] = "sequence_stmt_alt",
  [sym_sequence_stmt_par] = "sequence_stmt_par",
  [sym_diagram_class] = "diagram_class",
  [sym__class_stmt] = "_class_stmt",
  [sym_class_stmt_relation] = "class_stmt_relation",
  [sym_class_name] = "class_name",
  [sym_class_name_body] = "class_name_body",
  [sym_class_generics] = "class_generics",
  [sym_class_relation] = "class_relation",
  [sym__class_reltype] = "_class_reltype",
  [sym__class_linetype] = "_class_linetype",
  [sym_class_stmt_class] = "class_stmt_class",
  [sym_class_method_line] = "class_method_line",
  [sym_class_annotation_line] = "class_annotation_line",
  [sym_class_stmt_method] = "class_stmt_method",
  [sym_class_stmt_annotation] = "class_stmt_annotation",
  [sym_diagram_state] = "diagram_state",
  [sym__state_stmt] = "_state_stmt",
  [sym_state_stmt_simple] = "state_stmt_simple",
  [sym_state_stmt_arrow] = "state_stmt_arrow",
  [sym_state_stmt_composite] = "state_stmt_composite",
  [sym_state_composite_body] = "state_composite_body",
  [sym_state_stmt_annotation] = "state_stmt_annotation",
  [sym_state_alias] = "state_alias",
  [sym_state_stmt_hide_empty_description] = "state_stmt_hide_empty_description",
  [sym__state_annotation] = "_state_annotation",
  [sym_state_note] = "state_note",
  [sym_direction_tb] = "direction_tb",
  [sym_direction_bt] = "direction_bt",
  [sym_direction_rl] = "direction_rl",
  [sym_direction_lr] = "direction_lr",
  [sym_dotted_open_arrow] = "dotted_open_arrow",
  [sym_signal_plus_sign] = "signal_plus_sign",
  [sym_signal_minus_sign] = "signal_minus_sign",
  [sym_note_placement_left] = "note_placement_left",
  [sym_note_placement_right] = "note_placement_right",
  [sym_class_reltype_extension] = "class_reltype_extension",
  [sym_class_reltype_composition] = "class_reltype_composition",
  [sym_class_reltype_dependency] = "class_reltype_dependency",
  [sym_class_linetype_solid] = "class_linetype_solid",
  [sym_class_label] = "class_label",
  [sym_state_name] = "state_name",
  [sym_state_arrow] = "state_arrow",
  [sym_state_description] = "state_description",
  [sym_state_hide_empty_description] = "state_hide_empty_description",
  [sym_state_division] = "state_division",
  [sym_state_annotation_fork] = "state_annotation_fork",
  [sym_state_annotation_join] = "state_annotation_join",
  [sym_state_annotation_choice] = "state_annotation_choice",
  [aux_sym_diagram_sequence_repeat1] = "diagram_sequence_repeat1",
  [aux_sym_diagram_sequence_repeat2] = "diagram_sequence_repeat2",
  [aux_sym_actor_repeat1] = "actor_repeat1",
  [aux_sym_sequence_stmt_alt_repeat1] = "sequence_stmt_alt_repeat1",
  [aux_sym_sequence_stmt_par_repeat1] = "sequence_stmt_par_repeat1",
  [aux_sym_diagram_class_repeat1] = "diagram_class_repeat1",
  [aux_sym_class_name_body_repeat1] = "class_name_body_repeat1",
  [aux_sym_class_stmt_class_repeat1] = "class_stmt_class_repeat1",
  [aux_sym_class_method_line_repeat1] = "class_method_line_repeat1",
  [aux_sym_diagram_state_repeat1] = "diagram_state_repeat1",
  [aux_sym_state_composite_body_repeat1] = "state_composite_body_repeat1",
  [alias_sym_alias] = "alias",
  [alias_sym_annotation] = "annotation",
  [alias_sym_class_classifier_abstract] = "class_classifier_abstract",
  [alias_sym_class_style_name] = "class_style_name",
  [alias_sym_class_visibility_internal] = "class_visibility_internal",
  [alias_sym_class_visibility_private] = "class_visibility_private",
  [alias_sym_class_visibility_public] = "class_visibility_public",
  [alias_sym_note_content] = "note_content",
  [alias_sym_sequence_stmt_alt_branch] = "sequence_stmt_alt_branch",
  [alias_sym_sequence_stmt_loop_inner] = "sequence_stmt_loop_inner",
  [alias_sym_sequence_stmt_opt_inner] = "sequence_stmt_opt_inner",
  [alias_sym_sequence_stmt_rect_inner] = "sequence_stmt_rect_inner",
  [alias_sym_title] = "title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_PERCENT_LBRACE] = anon_sym_PERCENT_PERCENT_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE_PERCENT_PERCENT] = anon_sym_RBRACE_PERCENT_PERCENT,
  [aux_sym_diagram_sequence_token1] = aux_sym_diagram_sequence_token1,
  [aux_sym_sequence_stmt_participant_token1] = aux_sym_sequence_stmt_participant_token1,
  [aux_sym_sequence_stmt_participant_token2] = aux_sym_sequence_stmt_participant_token2,
  [aux_sym_sequence_stmt_actor_token1] = aux_sym_sequence_stmt_actor_token1,
  [aux_sym_sequence_stmt_autonumber_token1] = aux_sym_sequence_stmt_autonumber_token1,
  [aux_sym_sequence_stmt_activate_token1] = aux_sym_sequence_stmt_activate_token1,
  [aux_sym_sequence_stmt_deactivate_token1] = aux_sym_sequence_stmt_deactivate_token1,
  [aux_sym_sequence_stmt_note_token1] = aux_sym_sequence_stmt_note_token1,
  [aux_sym_sequence_stmt_note_token2] = aux_sym_sequence_stmt_note_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_sequence_stmt_links_token1] = aux_sym_sequence_stmt_links_token1,
  [aux_sym_sequence_stmt_link_token1] = aux_sym_sequence_stmt_link_token1,
  [aux_sym_sequence_stmt_properties_token1] = aux_sym_sequence_stmt_properties_token1,
  [aux_sym_sequence_stmt_details_token1] = aux_sym_sequence_stmt_details_token1,
  [aux_sym_sequence_stmt_title_token1] = aux_sym_sequence_stmt_title_token1,
  [aux_sym_sequence_stmt_loop_token1] = aux_sym_sequence_stmt_loop_token1,
  [aux_sym_sequence_stmt_loop_token2] = aux_sym_sequence_stmt_loop_token2,
  [aux_sym_sequence_stmt_rect_token1] = aux_sym_sequence_stmt_rect_token1,
  [aux_sym_sequence_stmt_opt_token1] = aux_sym_sequence_stmt_opt_token1,
  [aux_sym_sequence_stmt_alt_token1] = aux_sym_sequence_stmt_alt_token1,
  [aux_sym_sequence_stmt_alt_token2] = aux_sym_sequence_stmt_alt_token2,
  [aux_sym_sequence_stmt_par_token1] = aux_sym_sequence_stmt_par_token1,
  [aux_sym_sequence_stmt_par_token2] = aux_sym_sequence_stmt_par_token2,
  [aux_sym_diagram_class_token1] = aux_sym_diagram_class_token1,
  [aux_sym_diagram_class_token2] = aux_sym_diagram_class_token2,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_class_generics_token1] = sym_class_name,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON_COLON_COLON] = anon_sym_COLON_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [aux_sym_diagram_state_token1] = aux_sym_diagram_state_token1,
  [aux_sym_diagram_state_token2] = aux_sym_diagram_state_token2,
  [aux_sym_state_stmt_simple_token1] = aux_sym_state_stmt_simple_token1,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [sym_type_directive] = sym_type_directive,
  [sym_arg_directive] = sym_arg_directive,
  [aux_sym_direction_tb_token1] = aux_sym_direction_tb_token1,
  [aux_sym_direction_bt_token1] = aux_sym_direction_bt_token1,
  [aux_sym_direction_rl_token1] = aux_sym_direction_rl_token1,
  [aux_sym_direction_lr_token1] = aux_sym_direction_lr_token1,
  [sym__rest_text] = sym__rest_text,
  [sym__actor_word] = sym__actor_word,
  [sym_solid_arrow] = sym_solid_arrow,
  [sym_dotted_arrow] = sym_dotted_arrow,
  [sym_solid_open_arrow] = sym_solid_open_arrow,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_solid_cross] = sym_solid_cross,
  [sym_dotted_cross] = sym_dotted_cross,
  [sym_solid_point] = sym_solid_point,
  [sym_dotted_point] = sym_dotted_point,
  [aux_sym_note_placement_left_token1] = aux_sym_note_placement_left_token1,
  [aux_sym_note_placement_right_token1] = aux_sym_note_placement_right_token1,
  [sym__class_name] = sym__class_name,
  [sym__alpha_num_token] = sym__alpha_num_token,
  [sym__bquote_string] = sym__bquote_string,
  [sym__dquote_string] = sym__dquote_string,
  [sym_class_reltype_aggregation] = sym_class_reltype_aggregation,
  [anon_sym_LT_PIPE] = anon_sym_LT_PIPE,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [sym_class_linetype_dotted] = sym_class_linetype_dotted,
  [aux_sym_class_label_token1] = aux_sym_class_label_token1,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [aux_sym_state_name_token1] = aux_sym_state_name_token1,
  [aux_sym_state_hide_empty_description_token1] = aux_sym_state_hide_empty_description_token1,
  [sym_state_id] = sym_state_id,
  [aux_sym_state_annotation_fork_token1] = aux_sym_state_annotation_fork_token1,
  [aux_sym_state_annotation_fork_token2] = aux_sym_state_annotation_fork_token2,
  [aux_sym_state_annotation_join_token1] = aux_sym_state_annotation_join_token1,
  [aux_sym_state_annotation_join_token2] = aux_sym_state_annotation_join_token2,
  [aux_sym_state_annotation_choice_token1] = aux_sym_state_annotation_choice_token1,
  [aux_sym_state_annotation_choice_token2] = aux_sym_state_annotation_choice_token2,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym__direction] = sym__direction,
  [sym_diagram_sequence] = sym_diagram_sequence,
  [sym__sequence_stmt] = sym__sequence_stmt,
  [sym_sequence_stmt_participant] = sym_sequence_stmt_participant,
  [sym_sequence_stmt_actor] = sym_sequence_stmt_actor,
  [sym_actor] = sym_actor,
  [sym_sequence_stmt_signal] = sym_sequence_stmt_signal,
  [sym_signal_type] = sym_signal_type,
  [sym_sequence_stmt_autonumber] = sym_sequence_stmt_autonumber,
  [sym_sequence_stmt_activate] = sym_sequence_stmt_activate,
  [sym_sequence_stmt_deactivate] = sym_sequence_stmt_deactivate,
  [sym_sequence_stmt_note] = sym_sequence_stmt_note,
  [sym_sequence_stmt_links] = sym_sequence_stmt_links,
  [sym_sequence_stmt_link] = sym_sequence_stmt_link,
  [sym_sequence_stmt_properties] = sym_sequence_stmt_properties,
  [sym_sequence_stmt_details] = sym_sequence_stmt_details,
  [sym_note_placement] = sym_note_placement,
  [sym_sequence_stmt_title] = sym_sequence_stmt_title,
  [sym_sequence_stmt_loop] = sym_sequence_stmt_loop,
  [sym_sequence_stmt_rect] = sym_sequence_stmt_rect,
  [sym_sequence_stmt_opt] = sym_sequence_stmt_opt,
  [aux_sym__subdocument] = aux_sym__subdocument,
  [sym_sequence_stmt_alt] = sym_sequence_stmt_alt,
  [sym_sequence_stmt_par] = sym_sequence_stmt_par,
  [sym_diagram_class] = sym_diagram_class,
  [sym__class_stmt] = sym__class_stmt,
  [sym_class_stmt_relation] = sym_class_stmt_relation,
  [sym_class_name] = sym_class_name,
  [sym_class_name_body] = sym_class_name_body,
  [sym_class_generics] = sym_class_generics,
  [sym_class_relation] = sym_class_relation,
  [sym__class_reltype] = sym__class_reltype,
  [sym__class_linetype] = sym__class_linetype,
  [sym_class_stmt_class] = sym_class_stmt_class,
  [sym_class_method_line] = sym_class_method_line,
  [sym_class_annotation_line] = sym_class_annotation_line,
  [sym_class_stmt_method] = sym_class_stmt_method,
  [sym_class_stmt_annotation] = sym_class_stmt_annotation,
  [sym_diagram_state] = sym_diagram_state,
  [sym__state_stmt] = sym__state_stmt,
  [sym_state_stmt_simple] = sym_state_stmt_simple,
  [sym_state_stmt_arrow] = sym_state_stmt_arrow,
  [sym_state_stmt_composite] = sym_state_stmt_composite,
  [sym_state_composite_body] = sym_state_composite_body,
  [sym_state_stmt_annotation] = sym_state_stmt_annotation,
  [sym_state_alias] = sym_state_alias,
  [sym_state_stmt_hide_empty_description] = sym_state_stmt_hide_empty_description,
  [sym__state_annotation] = sym__state_annotation,
  [sym_state_note] = sym_state_note,
  [sym_direction_tb] = sym_direction_tb,
  [sym_direction_bt] = sym_direction_bt,
  [sym_direction_rl] = sym_direction_rl,
  [sym_direction_lr] = sym_direction_lr,
  [sym_dotted_open_arrow] = sym_dotted_open_arrow,
  [sym_signal_plus_sign] = sym_signal_plus_sign,
  [sym_signal_minus_sign] = sym_signal_minus_sign,
  [sym_note_placement_left] = sym_note_placement_left,
  [sym_note_placement_right] = sym_note_placement_right,
  [sym_class_reltype_extension] = sym_class_reltype_extension,
  [sym_class_reltype_composition] = sym_class_reltype_composition,
  [sym_class_reltype_dependency] = sym_class_reltype_dependency,
  [sym_class_linetype_solid] = sym_class_linetype_solid,
  [sym_class_label] = sym_class_label,
  [sym_state_name] = sym_state_name,
  [sym_state_arrow] = sym_state_arrow,
  [sym_state_description] = sym_state_description,
  [sym_state_hide_empty_description] = sym_state_hide_empty_description,
  [sym_state_division] = sym_state_division,
  [sym_state_annotation_fork] = sym_state_annotation_fork,
  [sym_state_annotation_join] = sym_state_annotation_join,
  [sym_state_annotation_choice] = sym_state_annotation_choice,
  [aux_sym_diagram_sequence_repeat1] = aux_sym_diagram_sequence_repeat1,
  [aux_sym_diagram_sequence_repeat2] = aux_sym_diagram_sequence_repeat2,
  [aux_sym_actor_repeat1] = aux_sym_actor_repeat1,
  [aux_sym_sequence_stmt_alt_repeat1] = aux_sym_sequence_stmt_alt_repeat1,
  [aux_sym_sequence_stmt_par_repeat1] = aux_sym_sequence_stmt_par_repeat1,
  [aux_sym_diagram_class_repeat1] = aux_sym_diagram_class_repeat1,
  [aux_sym_class_name_body_repeat1] = aux_sym_class_name_body_repeat1,
  [aux_sym_class_stmt_class_repeat1] = aux_sym_class_stmt_class_repeat1,
  [aux_sym_class_method_line_repeat1] = aux_sym_class_method_line_repeat1,
  [aux_sym_diagram_state_repeat1] = aux_sym_diagram_state_repeat1,
  [aux_sym_state_composite_body_repeat1] = aux_sym_state_composite_body_repeat1,
  [alias_sym_alias] = alias_sym_alias,
  [alias_sym_annotation] = alias_sym_annotation,
  [alias_sym_class_classifier_abstract] = alias_sym_class_classifier_abstract,
  [alias_sym_class_style_name] = alias_sym_class_style_name,
  [alias_sym_class_visibility_internal] = alias_sym_class_visibility_internal,
  [alias_sym_class_visibility_private] = alias_sym_class_visibility_private,
  [alias_sym_class_visibility_public] = alias_sym_class_visibility_public,
  [alias_sym_note_content] = alias_sym_note_content,
  [alias_sym_sequence_stmt_alt_branch] = alias_sym_sequence_stmt_alt_branch,
  [alias_sym_sequence_stmt_loop_inner] = alias_sym_sequence_stmt_loop_inner,
  [alias_sym_sequence_stmt_opt_inner] = alias_sym_sequence_stmt_opt_inner,
  [alias_sym_sequence_stmt_rect_inner] = alias_sym_sequence_stmt_rect_inner,
  [alias_sym_title] = alias_sym_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_sequence_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_participant_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_participant_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_actor_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_autonumber_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_activate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_deactivate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_links_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_link_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_properties_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_details_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_title_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_rect_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_opt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_generics_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_COLON] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_stmt_simple_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_type_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_bt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__rest_text] = {
    .visible = true,
    .named = true,
  },
  [sym__actor_word] = {
    .visible = false,
    .named = true,
  },
  [sym_solid_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_solid_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_point] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_point] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_note_placement_left_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_placement_right_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__class_name] = {
    .visible = false,
    .named = true,
  },
  [sym__alpha_num_token] = {
    .visible = false,
    .named = true,
  },
  [sym__bquote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__dquote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_aggregation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
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
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_class_linetype_dotted] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_hide_empty_description_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_state_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_state_annotation_fork_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_fork_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__direction] = {
    .visible = false,
    .named = true,
  },
  [sym_diagram_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_sequence_stmt_participant] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_autonumber] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_activate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_deactivate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_note] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_links] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_link] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_details] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_opt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__subdocument] = {
    .visible = false,
    .named = false,
  },
  [sym_sequence_stmt_alt] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_par] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_class] = {
    .visible = true,
    .named = true,
  },
  [sym__class_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_generics] = {
    .visible = true,
    .named = true,
  },
  [sym_class_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__class_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__class_linetype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_method_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_annotation_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_method] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_state] = {
    .visible = true,
    .named = true,
  },
  [sym__state_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_state_stmt_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_composite] = {
    .visible = true,
    .named = true,
  },
  [sym_state_composite_body] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_state_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym__state_annotation] = {
    .visible = false,
    .named = true,
  },
  [sym_state_note] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_plus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_minus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_left] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_right] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_class_linetype_solid] = {
    .visible = true,
    .named = true,
  },
  [sym_class_label] = {
    .visible = true,
    .named = true,
  },
  [sym_state_name] = {
    .visible = true,
    .named = true,
  },
  [sym_state_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_division] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_fork] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_join] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_choice] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_diagram_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_sequence_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_actor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_stmt_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_method_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_state_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_composite_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_alias] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_classifier_abstract] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_style_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_internal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_private] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_public] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_note_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_alt_branch] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_loop_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_opt_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_rect_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_title] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_title,
  },
  [2] = {
    [0] = sym_state_description,
  },
  [3] = {
    [3] = alias_sym_alias,
  },
  [4] = {
    [3] = alias_sym_sequence_stmt_loop_inner,
  },
  [5] = {
    [3] = alias_sym_sequence_stmt_rect_inner,
  },
  [6] = {
    [3] = alias_sym_sequence_stmt_opt_inner,
  },
  [7] = {
    [3] = alias_sym_sequence_stmt_alt_branch,
  },
  [8] = {
    [3] = alias_sym_class_style_name,
  },
  [9] = {
    [1] = alias_sym_annotation,
  },
  [10] = {
    [0] = alias_sym_class_visibility_internal,
  },
  [11] = {
    [0] = alias_sym_class_visibility_public,
  },
  [12] = {
    [0] = alias_sym_class_visibility_private,
  },
  [13] = {
    [1] = alias_sym_class_classifier_abstract,
  },
  [14] = {
    [4] = alias_sym_note_content,
  },
  [15] = {
    [1] = alias_sym_sequence_stmt_alt_branch,
  },
  [16] = {
    [0] = alias_sym_class_visibility_internal,
    [2] = alias_sym_class_classifier_abstract,
  },
  [17] = {
    [0] = alias_sym_class_visibility_public,
    [2] = alias_sym_class_classifier_abstract,
  },
  [18] = {
    [0] = alias_sym_class_visibility_private,
    [2] = alias_sym_class_classifier_abstract,
  },
  [19] = {
    [2] = alias_sym_class_classifier_abstract,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__subdocument, 5,
    aux_sym__subdocument,
    alias_sym_sequence_stmt_alt_branch,
    alias_sym_sequence_stmt_loop_inner,
    alias_sym_sequence_stmt_opt_inner,
    alias_sym_sequence_stmt_rect_inner,
  sym_state_description, 2,
    sym_state_description,
    alias_sym_note_content,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 2,
  [7] = 4,
  [8] = 2,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 14,
  [22] = 16,
  [23] = 17,
  [24] = 18,
  [25] = 19,
  [26] = 26,
  [27] = 20,
  [28] = 28,
  [29] = 20,
  [30] = 14,
  [31] = 16,
  [32] = 17,
  [33] = 16,
  [34] = 18,
  [35] = 19,
  [36] = 19,
  [37] = 18,
  [38] = 14,
  [39] = 20,
  [40] = 17,
  [41] = 41,
  [42] = 42,
  [43] = 12,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 47,
  [50] = 46,
  [51] = 46,
  [52] = 47,
  [53] = 46,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 86,
  [104] = 104,
  [105] = 101,
  [106] = 100,
  [107] = 99,
  [108] = 98,
  [109] = 97,
  [110] = 96,
  [111] = 88,
  [112] = 94,
  [113] = 92,
  [114] = 91,
  [115] = 90,
  [116] = 89,
  [117] = 87,
  [118] = 85,
  [119] = 84,
  [120] = 83,
  [121] = 82,
  [122] = 81,
  [123] = 80,
  [124] = 79,
  [125] = 78,
  [126] = 77,
  [127] = 76,
  [128] = 75,
  [129] = 93,
  [130] = 95,
  [131] = 102,
  [132] = 104,
  [133] = 74,
  [134] = 98,
  [135] = 90,
  [136] = 74,
  [137] = 100,
  [138] = 99,
  [139] = 100,
  [140] = 104,
  [141] = 97,
  [142] = 96,
  [143] = 88,
  [144] = 94,
  [145] = 92,
  [146] = 91,
  [147] = 102,
  [148] = 90,
  [149] = 89,
  [150] = 87,
  [151] = 85,
  [152] = 84,
  [153] = 83,
  [154] = 82,
  [155] = 81,
  [156] = 80,
  [157] = 79,
  [158] = 78,
  [159] = 77,
  [160] = 76,
  [161] = 75,
  [162] = 94,
  [163] = 92,
  [164] = 91,
  [165] = 81,
  [166] = 89,
  [167] = 87,
  [168] = 86,
  [169] = 93,
  [170] = 85,
  [171] = 95,
  [172] = 84,
  [173] = 102,
  [174] = 104,
  [175] = 95,
  [176] = 96,
  [177] = 93,
  [178] = 97,
  [179] = 75,
  [180] = 74,
  [181] = 76,
  [182] = 98,
  [183] = 99,
  [184] = 88,
  [185] = 80,
  [186] = 79,
  [187] = 78,
  [188] = 101,
  [189] = 101,
  [190] = 83,
  [191] = 82,
  [192] = 77,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 199,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 199,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 254,
  [256] = 254,
  [257] = 254,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 233,
  [271] = 74,
  [272] = 222,
  [273] = 269,
  [274] = 88,
  [275] = 269,
  [276] = 269,
  [277] = 277,
  [278] = 278,
  [279] = 278,
  [280] = 278,
  [281] = 278,
  [282] = 233,
  [283] = 198,
  [284] = 222,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 217,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 195,
  [295] = 293,
  [296] = 296,
  [297] = 223,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 247,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 246,
  [306] = 306,
  [307] = 212,
  [308] = 308,
  [309] = 309,
  [310] = 214,
  [311] = 311,
  [312] = 312,
  [313] = 201,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 319,
  [325] = 320,
  [326] = 326,
  [327] = 327,
  [328] = 319,
  [329] = 320,
  [330] = 315,
  [331] = 318,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 341,
  [343] = 315,
  [344] = 323,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 345,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 318,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 360,
  [365] = 357,
  [366] = 340,
  [367] = 357,
  [368] = 340,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 326,
  [374] = 317,
  [375] = 341,
  [376] = 376,
  [377] = 377,
  [378] = 315,
  [379] = 379,
  [380] = 318,
  [381] = 381,
  [382] = 317,
  [383] = 345,
  [384] = 384,
  [385] = 317,
  [386] = 386,
  [387] = 362,
  [388] = 360,
  [389] = 389,
  [390] = 319,
  [391] = 391,
  [392] = 320,
  [393] = 393,
  [394] = 394,
  [395] = 357,
  [396] = 341,
  [397] = 340,
  [398] = 321,
  [399] = 399,
  [400] = 323,
  [401] = 339,
  [402] = 316,
  [403] = 321,
  [404] = 316,
  [405] = 323,
  [406] = 360,
  [407] = 339,
  [408] = 316,
  [409] = 362,
  [410] = 321,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 339,
  [416] = 362,
  [417] = 381,
  [418] = 345,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 425,
  [427] = 422,
  [428] = 423,
  [429] = 425,
  [430] = 422,
  [431] = 431,
  [432] = 423,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 437,
  [439] = 439,
  [440] = 437,
  [441] = 441,
  [442] = 442,
  [443] = 437,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 425,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 425,
  [457] = 422,
  [458] = 423,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 464,
  [481] = 465,
  [482] = 466,
  [483] = 467,
  [484] = 468,
  [485] = 469,
  [486] = 470,
  [487] = 471,
  [488] = 488,
  [489] = 489,
  [490] = 473,
  [491] = 474,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 476,
  [498] = 477,
  [499] = 478,
  [500] = 479,
  [501] = 464,
  [502] = 465,
  [503] = 466,
  [504] = 467,
  [505] = 468,
  [506] = 469,
  [507] = 470,
  [508] = 471,
  [509] = 509,
  [510] = 510,
  [511] = 473,
  [512] = 474,
  [513] = 476,
  [514] = 477,
  [515] = 478,
  [516] = 479,
  [517] = 466,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 519,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 518,
  [539] = 464,
  [540] = 465,
  [541] = 459,
  [542] = 455,
  [543] = 519,
  [544] = 520,
  [545] = 521,
  [546] = 522,
  [547] = 523,
  [548] = 524,
  [549] = 525,
  [550] = 526,
  [551] = 527,
  [552] = 529,
  [553] = 530,
  [554] = 454,
  [555] = 518,
  [556] = 534,
  [557] = 535,
  [558] = 536,
  [559] = 537,
  [560] = 518,
  [561] = 520,
  [562] = 521,
  [563] = 522,
  [564] = 523,
  [565] = 519,
  [566] = 520,
  [567] = 521,
  [568] = 522,
  [569] = 523,
  [570] = 524,
  [571] = 525,
  [572] = 526,
  [573] = 527,
  [574] = 529,
  [575] = 530,
  [576] = 524,
  [577] = 525,
  [578] = 534,
  [579] = 535,
  [580] = 536,
  [581] = 537,
  [582] = 518,
  [583] = 519,
  [584] = 526,
  [585] = 527,
  [586] = 586,
  [587] = 587,
  [588] = 495,
  [589] = 494,
  [590] = 493,
  [591] = 492,
  [592] = 592,
  [593] = 531,
  [594] = 463,
  [595] = 466,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 529,
  [601] = 530,
  [602] = 596,
  [603] = 468,
  [604] = 495,
  [605] = 494,
  [606] = 493,
  [607] = 492,
  [608] = 531,
  [609] = 463,
  [610] = 469,
  [611] = 596,
  [612] = 597,
  [613] = 598,
  [614] = 599,
  [615] = 479,
  [616] = 470,
  [617] = 471,
  [618] = 472,
  [619] = 495,
  [620] = 494,
  [621] = 493,
  [622] = 492,
  [623] = 531,
  [624] = 463,
  [625] = 625,
  [626] = 596,
  [627] = 597,
  [628] = 598,
  [629] = 599,
  [630] = 489,
  [631] = 488,
  [632] = 478,
  [633] = 633,
  [634] = 597,
  [635] = 537,
  [636] = 636,
  [637] = 489,
  [638] = 488,
  [639] = 639,
  [640] = 536,
  [641] = 477,
  [642] = 599,
  [643] = 476,
  [644] = 489,
  [645] = 488,
  [646] = 467,
  [647] = 475,
  [648] = 648,
  [649] = 598,
  [650] = 535,
  [651] = 533,
  [652] = 534,
  [653] = 474,
  [654] = 473,
  [655] = 655,
  [656] = 656,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '<') ADVANCE(451);
      if (lookahead == '>') ADVANCE(454);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '`') ADVANCE(163);
      if (lookahead == 'c') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(376);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(391);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(357);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '%') ADVANCE(265);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '%') ADVANCE(265);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '%') ADVANCE(265);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '%') ADVANCE(266);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '%') ADVANCE(266);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '%') ADVANCE(266);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '~') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '%') ADVANCE(467);
      if (lookahead == '-') ADVANCE(469);
      if (lookahead == '[') ADVANCE(468);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(484);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(485);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(495);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '<') ADVANCE(452);
      if (lookahead == '>') ADVANCE(453);
      if (lookahead == '`') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(446);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(179);
      END_STATE();
    case 20:
      if (lookahead == '%') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == '%') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(260);
      END_STATE();
    case 22:
      if (lookahead == '%') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 23:
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(212);
      END_STATE();
    case 24:
      if (lookahead == '%') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(542);
      END_STATE();
    case 25:
      if (lookahead == '%') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(348);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == 'x') ADVANCE(346);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == 'x') ADVANCE(345);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '[') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(455);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(457);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(459);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(204);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(230);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '<') ADVANCE(226);
      END_STATE();
    case 39:
      if (lookahead == '<') ADVANCE(75);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(227);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(450);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(343);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(543);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(545);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(547);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(104);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(108);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(110);
      END_STATE();
    case 52:
      if (lookahead == '[') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(512);
      END_STATE();
    case 54:
      if (lookahead == ']') ADVANCE(544);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(546);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(548);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == '`') ADVANCE(445);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(253);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(152);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(125);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(126);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(131);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(132);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 91:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 92:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(349);
      END_STATE();
    case 93:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(350);
      END_STATE();
    case 94:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 95:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 96:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 97:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 98:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      END_STATE();
    case 99:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(155);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 111:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 112:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 116:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 117:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 118:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 119:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(538);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 134:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 135:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 136:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(156);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 156:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 157:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 158:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(35);
      END_STATE();
    case 159:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 160:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 161:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(252);
      if (lookahead == '%') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 162:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(17);
      END_STATE();
    case 163:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(60);
      END_STATE();
    case 164:
      if (eof) ADVANCE(175);
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '%') ADVANCE(265);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 165:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '<') ADVANCE(452);
      if (lookahead == '>') ADVANCE(453);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 166:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '`') ADVANCE(163);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 167:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(444);
      END_STATE();
    case 168:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '%') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 169:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(525);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(526);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(530);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 170:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(532);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(525);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(526);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(530);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 171:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(525);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(526);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(530);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 172:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 173:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '`') ADVANCE(163);
      if (lookahead == '~') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 174:
      if (eof) ADVANCE(175);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '`') ADVANCE(163);
      if (lookahead == 'c') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACE_PERCENT_PERCENT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_diagram_sequence_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token2);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_actor_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_autonumber_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_activate_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_deactivate_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token2);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_links_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_link_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_properties_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_details_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_title_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_rect_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_opt_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token2);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_diagram_class_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_diagram_class_token2);
      if (lookahead == '-') ADVANCE(157);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(444);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '%') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(456);
      if (lookahead == '>') ADVANCE(342);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_diagram_state_token2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_state_stmt_simple_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(260);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(248);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(252);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(241);
      if (lookahead == '{') ADVANCE(248);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(252);
      if (lookahead == '%') ADVANCE(249);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_direction_tb_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_direction_bt_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_direction_rl_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_direction_lr_token1);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__rest_text);
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__rest_text);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__rest_text);
      if (lookahead == '%') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__rest_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(11);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(11);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(11);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '%') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(329);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(324);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(279);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(329);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(324);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(304);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(323);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_solid_arrow);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_dotted_arrow);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_solid_open_arrow);
      if (lookahead == '>') ADVANCE(340);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(341);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_solid_cross);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_dotted_cross);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_solid_point);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_dotted_point);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_note_placement_left_token1);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_note_placement_right_token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'a') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'l') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(432);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(428);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(408);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__bquote_string);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__dquote_string);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(226);
      if (lookahead == '|') ADVANCE(449);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '|') ADVANCE(449);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(227);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == ')') ADVANCE(348);
      if (lookahead == '>') ADVANCE(343);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(343);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_class_linetype_dotted);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '{') ADVANCE(511);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '%') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '*') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ']') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(502);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(498);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(489);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(511);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_state_hide_empty_description_token1);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(540);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '{') ADVANCE(11);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '%') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(542);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token1);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token2);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token1);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token2);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token1);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 165},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 164},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 164},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 164},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 164},
  [42] = {.lex_state = 164},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 164},
  [45] = {.lex_state = 164},
  [46] = {.lex_state = 164},
  [47] = {.lex_state = 164},
  [48] = {.lex_state = 164},
  [49] = {.lex_state = 164},
  [50] = {.lex_state = 164},
  [51] = {.lex_state = 164},
  [52] = {.lex_state = 164},
  [53] = {.lex_state = 164},
  [54] = {.lex_state = 169},
  [55] = {.lex_state = 169},
  [56] = {.lex_state = 169},
  [57] = {.lex_state = 169},
  [58] = {.lex_state = 169},
  [59] = {.lex_state = 169},
  [60] = {.lex_state = 169},
  [61] = {.lex_state = 169},
  [62] = {.lex_state = 169},
  [63] = {.lex_state = 169},
  [64] = {.lex_state = 169},
  [65] = {.lex_state = 169},
  [66] = {.lex_state = 169},
  [67] = {.lex_state = 169},
  [68] = {.lex_state = 169},
  [69] = {.lex_state = 169},
  [70] = {.lex_state = 169},
  [71] = {.lex_state = 169},
  [72] = {.lex_state = 169},
  [73] = {.lex_state = 169},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 164},
  [136] = {.lex_state = 164},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 164},
  [140] = {.lex_state = 164},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 164},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 164},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 164},
  [163] = {.lex_state = 164},
  [164] = {.lex_state = 164},
  [165] = {.lex_state = 164},
  [166] = {.lex_state = 164},
  [167] = {.lex_state = 164},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 164},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 164},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 164},
  [176] = {.lex_state = 164},
  [177] = {.lex_state = 164},
  [178] = {.lex_state = 164},
  [179] = {.lex_state = 164},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 164},
  [182] = {.lex_state = 164},
  [183] = {.lex_state = 164},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 164},
  [186] = {.lex_state = 164},
  [187] = {.lex_state = 164},
  [188] = {.lex_state = 164},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 164},
  [191] = {.lex_state = 164},
  [192] = {.lex_state = 164},
  [193] = {.lex_state = 165},
  [194] = {.lex_state = 170},
  [195] = {.lex_state = 171},
  [196] = {.lex_state = 165},
  [197] = {.lex_state = 170},
  [198] = {.lex_state = 165},
  [199] = {.lex_state = 171},
  [200] = {.lex_state = 169},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 169},
  [203] = {.lex_state = 169},
  [204] = {.lex_state = 169},
  [205] = {.lex_state = 169},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 169},
  [208] = {.lex_state = 169},
  [209] = {.lex_state = 169},
  [210] = {.lex_state = 169},
  [211] = {.lex_state = 169},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 15},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 169},
  [216] = {.lex_state = 169},
  [217] = {.lex_state = 165},
  [218] = {.lex_state = 169},
  [219] = {.lex_state = 169},
  [220] = {.lex_state = 169},
  [221] = {.lex_state = 169},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 165},
  [224] = {.lex_state = 169},
  [225] = {.lex_state = 170},
  [226] = {.lex_state = 169},
  [227] = {.lex_state = 169},
  [228] = {.lex_state = 174},
  [229] = {.lex_state = 174},
  [230] = {.lex_state = 169},
  [231] = {.lex_state = 169},
  [232] = {.lex_state = 174},
  [233] = {.lex_state = 15},
  [234] = {.lex_state = 169},
  [235] = {.lex_state = 169},
  [236] = {.lex_state = 174},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 174},
  [239] = {.lex_state = 169},
  [240] = {.lex_state = 172},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 174},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 165},
  [247] = {.lex_state = 165},
  [248] = {.lex_state = 7},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 7},
  [253] = {.lex_state = 7},
  [254] = {.lex_state = 174},
  [255] = {.lex_state = 174},
  [256] = {.lex_state = 174},
  [257] = {.lex_state = 174},
  [258] = {.lex_state = 15},
  [259] = {.lex_state = 165},
  [260] = {.lex_state = 165},
  [261] = {.lex_state = 167},
  [262] = {.lex_state = 167},
  [263] = {.lex_state = 15},
  [264] = {.lex_state = 167},
  [265] = {.lex_state = 7},
  [266] = {.lex_state = 167},
  [267] = {.lex_state = 167},
  [268] = {.lex_state = 167},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 166},
  [271] = {.lex_state = 165},
  [272] = {.lex_state = 166},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 165},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 166},
  [278] = {.lex_state = 172},
  [279] = {.lex_state = 172},
  [280] = {.lex_state = 172},
  [281] = {.lex_state = 172},
  [282] = {.lex_state = 173},
  [283] = {.lex_state = 170},
  [284] = {.lex_state = 173},
  [285] = {.lex_state = 166},
  [286] = {.lex_state = 166},
  [287] = {.lex_state = 166},
  [288] = {.lex_state = 166},
  [289] = {.lex_state = 166},
  [290] = {.lex_state = 170},
  [291] = {.lex_state = 166},
  [292] = {.lex_state = 166},
  [293] = {.lex_state = 165},
  [294] = {.lex_state = 171},
  [295] = {.lex_state = 165},
  [296] = {.lex_state = 166},
  [297] = {.lex_state = 170},
  [298] = {.lex_state = 16},
  [299] = {.lex_state = 166},
  [300] = {.lex_state = 168},
  [301] = {.lex_state = 170},
  [302] = {.lex_state = 167},
  [303] = {.lex_state = 165},
  [304] = {.lex_state = 167},
  [305] = {.lex_state = 170},
  [306] = {.lex_state = 168},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 170},
  [309] = {.lex_state = 167},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 167},
  [312] = {.lex_state = 168},
  [313] = {.lex_state = 168},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 166},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 165},
  [320] = {.lex_state = 165},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 165},
  [325] = {.lex_state = 165},
  [326] = {.lex_state = 16},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 165},
  [329] = {.lex_state = 165},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 4},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 4},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 4},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 166},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 4},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 4},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 165},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 165},
  [364] = {.lex_state = 4},
  [365] = {.lex_state = 4},
  [366] = {.lex_state = 4},
  [367] = {.lex_state = 4},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 166},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 16},
  [374] = {.lex_state = 166},
  [375] = {.lex_state = 4},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 4},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 4},
  [381] = {.lex_state = 16},
  [382] = {.lex_state = 166},
  [383] = {.lex_state = 4},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 166},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 4},
  [388] = {.lex_state = 4},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 165},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 165},
  [393] = {.lex_state = 6},
  [394] = {.lex_state = 6},
  [395] = {.lex_state = 4},
  [396] = {.lex_state = 4},
  [397] = {.lex_state = 4},
  [398] = {.lex_state = 4},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 4},
  [401] = {.lex_state = 4},
  [402] = {.lex_state = 4},
  [403] = {.lex_state = 4},
  [404] = {.lex_state = 4},
  [405] = {.lex_state = 4},
  [406] = {.lex_state = 4},
  [407] = {.lex_state = 4},
  [408] = {.lex_state = 4},
  [409] = {.lex_state = 4},
  [410] = {.lex_state = 4},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 166},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 4},
  [416] = {.lex_state = 4},
  [417] = {.lex_state = 16},
  [418] = {.lex_state = 4},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 168},
  [422] = {.lex_state = 165},
  [423] = {.lex_state = 165},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 165},
  [426] = {.lex_state = 165},
  [427] = {.lex_state = 165},
  [428] = {.lex_state = 165},
  [429] = {.lex_state = 165},
  [430] = {.lex_state = 165},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 165},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 168},
  [436] = {.lex_state = 16},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 165},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 16},
  [455] = {.lex_state = 16},
  [456] = {.lex_state = 165},
  [457] = {.lex_state = 165},
  [458] = {.lex_state = 165},
  [459] = {.lex_state = 16},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 165},
  [467] = {.lex_state = 21},
  [468] = {.lex_state = 21},
  [469] = {.lex_state = 21},
  [470] = {.lex_state = 21},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 165},
  [483] = {.lex_state = 21},
  [484] = {.lex_state = 21},
  [485] = {.lex_state = 21},
  [486] = {.lex_state = 21},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 21},
  [489] = {.lex_state = 21},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 21},
  [493] = {.lex_state = 21},
  [494] = {.lex_state = 21},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 165},
  [504] = {.lex_state = 21},
  [505] = {.lex_state = 21},
  [506] = {.lex_state = 21},
  [507] = {.lex_state = 21},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 165},
  [518] = {.lex_state = 22},
  [519] = {.lex_state = 161},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 21},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 21},
  [530] = {.lex_state = 21},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 161},
  [533] = {.lex_state = 23},
  [534] = {.lex_state = 21},
  [535] = {.lex_state = 21},
  [536] = {.lex_state = 21},
  [537] = {.lex_state = 21},
  [538] = {.lex_state = 22},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 4},
  [542] = {.lex_state = 4},
  [543] = {.lex_state = 161},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 21},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 21},
  [553] = {.lex_state = 21},
  [554] = {.lex_state = 4},
  [555] = {.lex_state = 22},
  [556] = {.lex_state = 21},
  [557] = {.lex_state = 21},
  [558] = {.lex_state = 21},
  [559] = {.lex_state = 21},
  [560] = {.lex_state = 22},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 161},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 21},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 21},
  [575] = {.lex_state = 21},
  [576] = {.lex_state = 21},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 21},
  [579] = {.lex_state = 21},
  [580] = {.lex_state = 21},
  [581] = {.lex_state = 21},
  [582] = {.lex_state = 22},
  [583] = {.lex_state = 161},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 4},
  [587] = {.lex_state = 167},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 21},
  [590] = {.lex_state = 21},
  [591] = {.lex_state = 21},
  [592] = {.lex_state = 165},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 165},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 21},
  [601] = {.lex_state = 21},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 21},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 21},
  [606] = {.lex_state = 21},
  [607] = {.lex_state = 21},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 21},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 21},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 21},
  [621] = {.lex_state = 21},
  [622] = {.lex_state = 21},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 169},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 21},
  [631] = {.lex_state = 21},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 4},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 21},
  [636] = {.lex_state = 169},
  [637] = {.lex_state = 21},
  [638] = {.lex_state = 21},
  [639] = {.lex_state = 167},
  [640] = {.lex_state = 21},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 21},
  [645] = {.lex_state = 21},
  [646] = {.lex_state = 21},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 167},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 21},
  [651] = {.lex_state = 23},
  [652] = {.lex_state = 21},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 24},
  [656] = {.lex_state = 24},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_diagram_sequence_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_participant_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_participant_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_actor_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_autonumber_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_activate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_deactivate_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_sequence_stmt_links_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_link_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_properties_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_details_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_title_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_rect_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token2] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [aux_sym_diagram_state_token1] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_solid_arrow] = ACTIONS(1),
    [sym_solid_open_arrow] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [sym_dotted_point] = ACTIONS(1),
    [sym__class_name] = ACTIONS(1),
    [sym__bquote_string] = ACTIONS(1),
    [sym__dquote_string] = ACTIONS(1),
    [sym_class_reltype_aggregation] = ACTIONS(1),
    [anon_sym_LT_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [sym_class_linetype_dotted] = ACTIONS(1),
    [anon_sym_LBRACK_STAR_RBRACK] = ACTIONS(1),
    [aux_sym_state_annotation_fork_token2] = ACTIONS(1),
    [aux_sym_state_annotation_join_token2] = ACTIONS(1),
    [aux_sym_state_annotation_choice_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(509),
    [sym_directive] = STATE(259),
    [sym_diagram_sequence] = STATE(496),
    [sym_diagram_class] = STATE(496),
    [sym_diagram_state] = STATE(496),
    [aux_sym_diagram_sequence_repeat1] = STATE(259),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(5),
    [aux_sym_diagram_sequence_token1] = ACTIONS(7),
    [aux_sym_diagram_class_token1] = ACTIONS(9),
    [aux_sym_diagram_class_token2] = ACTIONS(11),
    [aux_sym_diagram_state_token1] = ACTIONS(13),
    [aux_sym_diagram_state_token2] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(21), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(59), 1,
      sym__newline,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(86), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(257), 1,
      sym_actor,
    STATE(319), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(106), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [105] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(21), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(59), 1,
      sym__newline,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(86), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(257), 1,
      sym_actor,
    STATE(390), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(106), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [210] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(65), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym__subdocument,
    STATE(103), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(256), 1,
      sym_actor,
    STATE(392), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(100), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [315] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(65), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(13), 1,
      aux_sym__subdocument,
    STATE(103), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(256), 1,
      sym_actor,
    STATE(325), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(100), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [420] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(21), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(59), 1,
      sym__newline,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(86), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(257), 1,
      sym_actor,
    STATE(328), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(106), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [525] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(65), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(13), 1,
      aux_sym__subdocument,
    STATE(103), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(256), 1,
      sym_actor,
    STATE(329), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(100), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [630] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(21), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(59), 1,
      sym__newline,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(86), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(257), 1,
      sym_actor,
    STATE(324), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(106), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [735] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(65), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(13), 1,
      aux_sym__subdocument,
    STATE(103), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(256), 1,
      sym_actor,
    STATE(320), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(100), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [840] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(21), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(59), 1,
      sym__newline,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(86), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(257), 1,
      sym_actor,
    ACTIONS(115), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(106), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [940] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(65), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym__subdocument,
    STATE(103), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(256), 1,
      sym_actor,
    ACTIONS(117), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(100), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1040] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(119), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(122), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(125), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(128), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(131), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(134), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(137), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(140), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(143), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(146), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(149), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(152), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(155), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(160), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(163), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(166), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(169), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(172), 1,
      sym__newline,
    ACTIONS(175), 1,
      sym__actor_word,
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(86), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(257), 1,
      sym_actor,
    ACTIONS(158), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(106), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1140] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(175), 1,
      sym__actor_word,
    ACTIONS(178), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(181), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(184), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(187), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(190), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(193), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(196), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(199), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(202), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(205), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(208), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(211), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(214), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(217), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(220), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(223), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(226), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(229), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym__subdocument,
    STATE(103), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(256), 1,
      sym_actor,
    ACTIONS(158), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(100), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1240] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1339] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(306), 1,
      sym__newline,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(254), 1,
      sym_actor,
    STATE(41), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(139), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1436] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1535] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(27), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1634] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1733] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(16), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1832] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1931] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2030] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2129] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(20), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2228] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(21), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2327] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2426] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(272), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      sym__newline,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(254), 1,
      sym_actor,
    STATE(28), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(139), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2523] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2622] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(272), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(306), 1,
      sym__newline,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(254), 1,
      sym_actor,
    STATE(41), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(139), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2719] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(336), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2818] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(338), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2917] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(340), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3016] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(342), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(29), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3115] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(344), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3214] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(346), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(30), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3313] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(348), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3412] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(350), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3511] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(352), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(38), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3610] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(354), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3709] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(356), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3808] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(232), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(358), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(39), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3907] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(365), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(368), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(371), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(374), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(377), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(380), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(383), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(386), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(389), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(392), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(395), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(398), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(401), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(404), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(407), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(410), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(413), 1,
      sym__newline,
    ACTIONS(416), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(254), 1,
      sym_actor,
    STATE(41), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(139), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4004] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(272), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(419), 1,
      sym__newline,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(254), 1,
      sym_actor,
    STATE(15), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(139), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4101] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(158), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(175), 1,
      sym__actor_word,
    ACTIONS(421), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(424), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(427), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(430), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(433), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(436), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(439), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(442), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(445), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(448), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(451), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(454), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(457), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(460), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(463), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(466), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(469), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(472), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(168), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(255), 1,
      sym_actor,
    STATE(137), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4200] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(65), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(103), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(256), 1,
      sym_actor,
    STATE(100), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4296] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(21), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(59), 1,
      sym__newline,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(10), 1,
      aux_sym__subdocument,
    STATE(86), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(257), 1,
      sym_actor,
    STATE(106), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4392] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(65), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym__subdocument,
    STATE(103), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(256), 1,
      sym_actor,
    STATE(100), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4488] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(21), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(59), 1,
      sym__newline,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(6), 1,
      aux_sym__subdocument,
    STATE(86), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(257), 1,
      sym_actor,
    STATE(106), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4584] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(21), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(59), 1,
      sym__newline,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(2), 1,
      aux_sym__subdocument,
    STATE(86), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(257), 1,
      sym_actor,
    STATE(106), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4680] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(21), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(59), 1,
      sym__newline,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(3), 1,
      aux_sym__subdocument,
    STATE(86), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(257), 1,
      sym_actor,
    STATE(106), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4776] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(65), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(4), 1,
      aux_sym__subdocument,
    STATE(103), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(256), 1,
      sym_actor,
    STATE(100), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4872] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(65), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(9), 1,
      aux_sym__subdocument,
    STATE(103), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(256), 1,
      sym_actor,
    STATE(100), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4968] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(21), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(59), 1,
      sym__newline,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(8), 1,
      aux_sym__subdocument,
    STATE(86), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(257), 1,
      sym_actor,
    STATE(106), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5064] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(65), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(67), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(5), 1,
      aux_sym__subdocument,
    STATE(103), 1,
      sym__sequence_stmt,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(256), 1,
      sym_actor,
    STATE(100), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5160] = 16,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(481), 1,
      sym__newline,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(493), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(495), 1,
      aux_sym_state_name_token1,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(195), 1,
      sym_state_name,
    STATE(210), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(58), 14,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
      aux_sym_state_composite_body_repeat1,
  [5223] = 16,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(493), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(495), 1,
      aux_sym_state_name_token1,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    ACTIONS(501), 1,
      sym__newline,
    STATE(195), 1,
      sym_state_name,
    STATE(210), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(54), 14,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
      aux_sym_state_composite_body_repeat1,
  [5286] = 16,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(481), 1,
      sym__newline,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(493), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(495), 1,
      aux_sym_state_name_token1,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(195), 1,
      sym_state_name,
    STATE(210), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(57), 14,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
      aux_sym_state_composite_body_repeat1,
  [5349] = 16,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(493), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(495), 1,
      aux_sym_state_name_token1,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(505), 1,
      sym__newline,
    STATE(195), 1,
      sym_state_name,
    STATE(210), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(58), 14,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
      aux_sym_state_composite_body_repeat1,
  [5412] = 16,
    ACTIONS(507), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    ACTIONS(512), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      sym__newline,
    ACTIONS(518), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(521), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(524), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(530), 1,
      anon_sym_DASH_DASH,
    ACTIONS(533), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(536), 1,
      aux_sym_state_name_token1,
    ACTIONS(539), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(195), 1,
      sym_state_name,
    STATE(210), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(58), 14,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
      aux_sym_state_composite_body_repeat1,
  [5475] = 15,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(548), 1,
      aux_sym_state_name_token1,
    STATE(210), 1,
      sym_state_hide_empty_description,
    STATE(294), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(447), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5534] = 15,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(493), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(495), 1,
      aux_sym_state_name_token1,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(195), 1,
      sym_state_name,
    STATE(210), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(239), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5593] = 15,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(544), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(548), 1,
      aux_sym_state_name_token1,
    ACTIONS(550), 1,
      sym__newline,
    STATE(210), 1,
      sym_state_hide_empty_description,
    STATE(294), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(377), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5652] = 15,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(493), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(495), 1,
      aux_sym_state_name_token1,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_state_name,
    STATE(210), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(239), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5711] = 15,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(493), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(495), 1,
      aux_sym_state_name_token1,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_state_name,
    STATE(210), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(239), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5770] = 15,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(544), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(548), 1,
      aux_sym_state_name_token1,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    STATE(210), 1,
      sym_state_hide_empty_description,
    STATE(294), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(447), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5829] = 15,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(544), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(548), 1,
      aux_sym_state_name_token1,
    ACTIONS(556), 1,
      sym__newline,
    STATE(210), 1,
      sym_state_hide_empty_description,
    STATE(294), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(419), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5888] = 15,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(493), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(495), 1,
      aux_sym_state_name_token1,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(558), 1,
      sym__newline,
    STATE(195), 1,
      sym_state_name,
    STATE(210), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(55), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5947] = 15,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(544), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(548), 1,
      aux_sym_state_name_token1,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    STATE(210), 1,
      sym_state_hide_empty_description,
    STATE(294), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(447), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6006] = 15,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(544), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(548), 1,
      aux_sym_state_name_token1,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
    STATE(210), 1,
      sym_state_hide_empty_description,
    STATE(294), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(447), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6065] = 14,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(544), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(548), 1,
      aux_sym_state_name_token1,
    STATE(210), 1,
      sym_state_hide_empty_description,
    STATE(294), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(447), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6121] = 14,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(493), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(495), 1,
      aux_sym_state_name_token1,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(195), 1,
      sym_state_name,
    STATE(210), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(56), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6177] = 14,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(493), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(495), 1,
      aux_sym_state_name_token1,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(195), 1,
      sym_state_name,
    STATE(210), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(239), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6233] = 14,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(544), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(548), 1,
      aux_sym_state_name_token1,
    STATE(210), 1,
      sym_state_hide_empty_description,
    STATE(294), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(337), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6289] = 14,
    ACTIONS(479), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(483), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(485), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(487), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(489), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH,
    ACTIONS(497), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(544), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(548), 1,
      aux_sym_state_name_token1,
    STATE(210), 1,
      sym_state_hide_empty_description,
    STATE(294), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(377), 13,
      sym__direction,
      sym__state_stmt,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(564), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(566), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(568), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(570), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(572), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(574), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(576), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(578), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(580), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(582), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(584), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(586), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(588), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(590), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(592), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(594), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(596), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(598), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(600), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(602), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(604), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(606), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(608), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(610), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(612), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(614), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [6761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(616), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(618), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(620), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(622), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [6825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(624), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(626), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(628), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(630), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(632), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(634), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(636), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(638), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(640), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(642), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(644), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(646), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(648), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(650), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(652), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(654), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(656), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(658), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(660), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(662), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(664), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(666), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(668), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(670), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(672), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(674), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(676), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(678), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(612), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(614), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(680), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(682), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(672), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(674), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(668), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(670), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(664), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(666), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(660), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(662), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(656), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(658), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(652), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(654), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(620), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(622), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(644), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(646), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(636), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(638), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(632), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(634), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(628), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(630), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(624), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(626), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(616), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(618), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(608), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(610), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(604), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(606), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(600), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(602), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(596), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(598), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(592), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(594), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(588), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(590), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(584), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(586), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(580), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(582), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(576), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(578), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(572), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(574), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(568), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(570), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(640), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(642), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(648), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(650), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(676), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(678), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(680), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(682), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(564), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(566), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(660), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(662), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(628), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(630), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(564), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(566), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(668), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(670), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(664), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(666), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(668), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(670), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(680), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(682), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(656), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(658), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(652), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(654), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(620), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(622), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(644), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(646), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(636), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(638), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(632), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(634), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(676), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(678), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(628), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(630), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(624), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(626), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(616), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(618), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(608), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(610), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(604), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(606), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(600), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(602), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(596), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(598), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(592), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(594), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(588), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(590), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(584), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(586), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(580), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(582), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(576), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(578), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(572), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(574), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(568), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(570), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(644), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(646), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(636), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(638), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(632), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(634), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(592), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(594), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(624), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(626), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(616), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(618), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(612), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(614), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(640), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(642), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(608), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(610), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(648), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(650), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(604), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(606), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(676), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(678), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(680), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(682), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(648), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(650), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(652), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(654), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(640), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(642), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(656), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(658), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(568), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(570), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(564), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(566), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(572), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(574), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(660), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(662), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(664), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(666), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(620), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(622), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(588), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(590), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(584), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(586), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(580), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(582), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(672), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(674), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(672), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(674), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(600), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(602), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(596), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(598), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(576), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(578), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10094] = 15,
    ACTIONS(684), 1,
      anon_sym_COLON,
    ACTIONS(686), 1,
      anon_sym_STAR,
    ACTIONS(688), 1,
      sym__dquote_string,
    ACTIONS(690), 1,
      sym_class_reltype_aggregation,
    ACTIONS(694), 1,
      anon_sym_LT,
    ACTIONS(696), 1,
      anon_sym_GT,
    ACTIONS(698), 1,
      anon_sym_DASH_DASH,
    ACTIONS(700), 1,
      sym_class_linetype_dotted,
    STATE(213), 1,
      sym__class_linetype,
    STATE(258), 1,
      sym_class_linetype_solid,
    STATE(277), 1,
      sym_class_relation,
    STATE(303), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(288), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10144] = 6,
    ACTIONS(704), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
    ACTIONS(708), 1,
      aux_sym_state_name_token1,
    STATE(204), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(702), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10175] = 6,
    ACTIONS(710), 1,
      anon_sym_COLON,
    ACTIONS(714), 1,
      anon_sym_DASH_DASH_GT,
    STATE(326), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(712), 10,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10205] = 13,
    ACTIONS(686), 1,
      anon_sym_STAR,
    ACTIONS(690), 1,
      sym_class_reltype_aggregation,
    ACTIONS(694), 1,
      anon_sym_LT,
    ACTIONS(696), 1,
      anon_sym_GT,
    ACTIONS(698), 1,
      anon_sym_DASH_DASH,
    ACTIONS(700), 1,
      sym_class_linetype_dotted,
    STATE(213), 1,
      sym__class_linetype,
    STATE(258), 1,
      sym_class_linetype_solid,
    STATE(285), 1,
      sym_class_relation,
    STATE(303), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(288), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10249] = 3,
    ACTIONS(720), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(718), 14,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token2,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10273] = 5,
    ACTIONS(724), 1,
      anon_sym_TILDE,
    ACTIONS(726), 1,
      anon_sym_LT,
    STATE(246), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(722), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [10300] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(730), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(728), 12,
      anon_sym_COLON,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10323] = 4,
    ACTIONS(734), 1,
      anon_sym_COLON,
    ACTIONS(736), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(732), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(742), 1,
      aux_sym_class_label_token1,
    STATE(230), 1,
      sym_state_description,
    ACTIONS(740), 4,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
    ACTIONS(738), 8,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      aux_sym_state_hide_empty_description_token1,
  [10377] = 3,
    ACTIONS(746), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(744), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10399] = 3,
    ACTIONS(750), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(748), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10421] = 3,
    ACTIONS(754), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(752), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10443] = 3,
    ACTIONS(758), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(756), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10465] = 10,
    ACTIONS(686), 1,
      anon_sym_STAR,
    ACTIONS(694), 1,
      anon_sym_LT,
    ACTIONS(696), 1,
      anon_sym_GT,
    ACTIONS(760), 1,
      sym__class_name,
    ACTIONS(764), 1,
      sym_class_reltype_aggregation,
    STATE(369), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(762), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(288), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10501] = 3,
    ACTIONS(768), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(766), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10523] = 3,
    ACTIONS(772), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(770), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10545] = 3,
    ACTIONS(730), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(728), 12,
      anon_sym_COLON,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10567] = 3,
    ACTIONS(776), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(774), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10589] = 3,
    ACTIONS(780), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(778), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10611] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(784), 1,
      sym__actor_word,
    STATE(212), 1,
      aux_sym_actor_repeat1,
    ACTIONS(787), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(782), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [10639] = 10,
    ACTIONS(686), 1,
      anon_sym_STAR,
    ACTIONS(694), 1,
      anon_sym_LT,
    ACTIONS(696), 1,
      anon_sym_GT,
    ACTIONS(764), 1,
      sym_class_reltype_aggregation,
    ACTIONS(789), 1,
      sym__class_name,
    STATE(413), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(791), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(288), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10675] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(795), 1,
      sym__actor_word,
    STATE(212), 1,
      aux_sym_actor_repeat1,
    ACTIONS(797), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(793), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [10703] = 3,
    ACTIONS(801), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(799), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10725] = 3,
    ACTIONS(805), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(803), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10747] = 3,
    ACTIONS(809), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(807), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [10769] = 3,
    ACTIONS(813), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(811), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10791] = 3,
    ACTIONS(817), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(815), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10813] = 3,
    ACTIONS(821), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(819), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10835] = 3,
    ACTIONS(825), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(823), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10857] = 5,
    ACTIONS(829), 1,
      sym__class_name,
    ACTIONS(831), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(833), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(827), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [10883] = 3,
    ACTIONS(833), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(827), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [10905] = 3,
    ACTIONS(837), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(835), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10927] = 8,
    ACTIONS(704), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(839), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(841), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(843), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(220), 4,
      sym__state_annotation,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [10959] = 3,
    ACTIONS(847), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(845), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10981] = 3,
    ACTIONS(851), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(849), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11003] = 11,
    ACTIONS(853), 1,
      ts_builtin_sym_end,
    ACTIONS(855), 1,
      anon_sym_class,
    ACTIONS(857), 1,
      anon_sym_LT_LT,
    ACTIONS(859), 1,
      sym__class_name,
    ACTIONS(861), 1,
      sym__bquote_string,
    STATE(193), 1,
      sym_class_name,
    STATE(198), 1,
      sym_class_name_body,
    STATE(382), 1,
      aux_sym_class_name_body_repeat1,
    STATE(434), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(431), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11041] = 11,
    ACTIONS(855), 1,
      anon_sym_class,
    ACTIONS(857), 1,
      anon_sym_LT_LT,
    ACTIONS(859), 1,
      sym__class_name,
    ACTIONS(861), 1,
      sym__bquote_string,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
    STATE(193), 1,
      sym_class_name,
    STATE(198), 1,
      sym_class_name_body,
    STATE(382), 1,
      aux_sym_class_name_body_repeat1,
    STATE(434), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(431), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11079] = 3,
    ACTIONS(867), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(865), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11101] = 3,
    ACTIONS(871), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(869), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11123] = 11,
    ACTIONS(855), 1,
      anon_sym_class,
    ACTIONS(857), 1,
      anon_sym_LT_LT,
    ACTIONS(859), 1,
      sym__class_name,
    ACTIONS(861), 1,
      sym__bquote_string,
    ACTIONS(873), 1,
      ts_builtin_sym_end,
    STATE(193), 1,
      sym_class_name,
    STATE(198), 1,
      sym_class_name_body,
    STATE(382), 1,
      aux_sym_class_name_body_repeat1,
    STATE(434), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(431), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11161] = 5,
    ACTIONS(829), 1,
      sym__class_name,
    ACTIONS(831), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(809), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(807), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [11187] = 3,
    ACTIONS(877), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(875), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11209] = 3,
    ACTIONS(881), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(879), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11231] = 10,
    ACTIONS(855), 1,
      anon_sym_class,
    ACTIONS(857), 1,
      anon_sym_LT_LT,
    ACTIONS(859), 1,
      sym__class_name,
    ACTIONS(861), 1,
      sym__bquote_string,
    STATE(193), 1,
      sym_class_name,
    STATE(198), 1,
      sym_class_name_body,
    STATE(382), 1,
      aux_sym_class_name_body_repeat1,
    STATE(434), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(431), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11266] = 11,
    ACTIONS(883), 1,
      anon_sym_TILDE,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_DASH,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      anon_sym_LT_LT,
    ACTIONS(895), 1,
      sym__newline,
    ACTIONS(897), 1,
      sym__alpha_num_token,
    STATE(262), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(379), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [11303] = 10,
    ACTIONS(855), 1,
      anon_sym_class,
    ACTIONS(857), 1,
      anon_sym_LT_LT,
    ACTIONS(859), 1,
      sym__class_name,
    ACTIONS(861), 1,
      sym__bquote_string,
    STATE(193), 1,
      sym_class_name,
    STATE(198), 1,
      sym_class_name_body,
    STATE(382), 1,
      aux_sym_class_name_body_repeat1,
    STATE(386), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(431), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11338] = 3,
    ACTIONS(899), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(510), 11,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11359] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(728), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      aux_sym_sequence_stmt_participant_token2,
      anon_sym_LBRACE,
      sym__newline,
      anon_sym_DASH_DASH_GT,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
  [11378] = 11,
    ACTIONS(883), 1,
      anon_sym_TILDE,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_DASH,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      anon_sym_LT_LT,
    ACTIONS(897), 1,
      sym__alpha_num_token,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(446), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [11415] = 10,
    ACTIONS(855), 1,
      anon_sym_class,
    ACTIONS(857), 1,
      anon_sym_LT_LT,
    ACTIONS(859), 1,
      sym__class_name,
    ACTIONS(861), 1,
      sym__bquote_string,
    STATE(193), 1,
      sym_class_name,
    STATE(198), 1,
      sym_class_name_body,
    STATE(336), 1,
      sym__class_stmt,
    STATE(382), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(431), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11450] = 11,
    ACTIONS(883), 1,
      anon_sym_TILDE,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_DASH,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      anon_sym_LT_LT,
    ACTIONS(897), 1,
      sym__alpha_num_token,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(446), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [11487] = 11,
    ACTIONS(883), 1,
      anon_sym_TILDE,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_DASH,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      anon_sym_LT_LT,
    ACTIONS(897), 1,
      sym__alpha_num_token,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(446), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [11524] = 11,
    ACTIONS(883), 1,
      anon_sym_TILDE,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_DASH,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      anon_sym_LT_LT,
    ACTIONS(897), 1,
      sym__alpha_num_token,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(446), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [11561] = 3,
    ACTIONS(911), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(909), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [11582] = 3,
    ACTIONS(915), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(913), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [11603] = 11,
    ACTIONS(883), 1,
      anon_sym_TILDE,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_DASH,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      anon_sym_LT_LT,
    ACTIONS(897), 1,
      sym__alpha_num_token,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(446), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [11640] = 11,
    ACTIONS(883), 1,
      anon_sym_TILDE,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_DASH,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      anon_sym_LT_LT,
    ACTIONS(897), 1,
      sym__alpha_num_token,
    ACTIONS(919), 1,
      sym__newline,
    STATE(262), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(338), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [11677] = 11,
    ACTIONS(883), 1,
      anon_sym_TILDE,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_DASH,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      anon_sym_LT_LT,
    ACTIONS(897), 1,
      sym__alpha_num_token,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(446), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [11714] = 10,
    ACTIONS(883), 1,
      anon_sym_TILDE,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_DASH,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      anon_sym_LT_LT,
    ACTIONS(897), 1,
      sym__alpha_num_token,
    STATE(262), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(358), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [11748] = 10,
    ACTIONS(883), 1,
      anon_sym_TILDE,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_DASH,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      anon_sym_LT_LT,
    ACTIONS(897), 1,
      sym__alpha_num_token,
    STATE(262), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(314), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [11782] = 10,
    ACTIONS(883), 1,
      anon_sym_TILDE,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_DASH,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      anon_sym_LT_LT,
    ACTIONS(897), 1,
      sym__alpha_num_token,
    STATE(262), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(446), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [11816] = 6,
    ACTIONS(925), 1,
      sym_solid_open_arrow,
    ACTIONS(927), 1,
      anon_sym_DASH_DASH_GT,
    STATE(276), 1,
      sym_signal_type,
    STATE(394), 1,
      sym_dotted_open_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(923), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [11841] = 6,
    ACTIONS(925), 1,
      sym_solid_open_arrow,
    ACTIONS(927), 1,
      anon_sym_DASH_DASH_GT,
    STATE(269), 1,
      sym_signal_type,
    STATE(394), 1,
      sym_dotted_open_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(923), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [11866] = 6,
    ACTIONS(925), 1,
      sym_solid_open_arrow,
    ACTIONS(927), 1,
      anon_sym_DASH_DASH_GT,
    STATE(275), 1,
      sym_signal_type,
    STATE(394), 1,
      sym_dotted_open_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(923), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [11891] = 6,
    ACTIONS(925), 1,
      sym_solid_open_arrow,
    ACTIONS(927), 1,
      anon_sym_DASH_DASH_GT,
    STATE(273), 1,
      sym_signal_type,
    STATE(394), 1,
      sym_dotted_open_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(923), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [11916] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(931), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(929), 6,
      anon_sym_STAR,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
  [11934] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(933), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(935), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(937), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(939), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(941), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(943), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(260), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
  [11964] = 6,
    ACTIONS(945), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(952), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(950), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(260), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
    ACTIONS(948), 3,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
  [11988] = 4,
    STATE(261), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(957), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(955), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      sym__newline,
  [12008] = 6,
    ACTIONS(964), 1,
      anon_sym_STAR,
    ACTIONS(966), 1,
      anon_sym_DOLLAR,
    STATE(261), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(960), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
    ACTIONS(962), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [12032] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(970), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(968), 6,
      anon_sym_STAR,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
  [12050] = 6,
    ACTIONS(974), 1,
      anon_sym_STAR,
    ACTIONS(976), 1,
      anon_sym_DOLLAR,
    STATE(261), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(962), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(972), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [12074] = 9,
    ACTIONS(883), 1,
      anon_sym_TILDE,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_DASH,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(897), 1,
      sym__alpha_num_token,
    STATE(262), 1,
      aux_sym_class_method_line_repeat1,
    STATE(424), 1,
      sym_class_method_line,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12104] = 6,
    ACTIONS(980), 1,
      anon_sym_STAR,
    ACTIONS(982), 1,
      anon_sym_DOLLAR,
    STATE(261), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(962), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(978), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [12128] = 6,
    ACTIONS(986), 1,
      anon_sym_STAR,
    ACTIONS(988), 1,
      anon_sym_DOLLAR,
    STATE(261), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(962), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(984), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [12152] = 6,
    ACTIONS(992), 1,
      anon_sym_STAR,
    ACTIONS(994), 1,
      anon_sym_DOLLAR,
    STATE(261), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(962), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(990), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [12176] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(996), 1,
      anon_sym_PLUS,
    ACTIONS(998), 1,
      anon_sym_DASH,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(597), 1,
      sym_actor,
    STATE(367), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [12202] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(831), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(807), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [12218] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(564), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(566), 5,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      sym__newline,
  [12234] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(831), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(827), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [12250] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(996), 1,
      anon_sym_PLUS,
    ACTIONS(998), 1,
      anon_sym_DASH,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(627), 1,
      sym_actor,
    STATE(357), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [12276] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(620), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(622), 5,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      sym__newline,
  [12292] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(996), 1,
      anon_sym_PLUS,
    ACTIONS(998), 1,
      anon_sym_DASH,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(612), 1,
      sym_actor,
    STATE(395), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [12318] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    ACTIONS(996), 1,
      anon_sym_PLUS,
    ACTIONS(998), 1,
      anon_sym_DASH,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(634), 1,
      sym_actor,
    STATE(365), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [12344] = 7,
    ACTIONS(861), 1,
      sym__bquote_string,
    ACTIONS(1000), 1,
      sym__class_name,
    ACTIONS(1002), 1,
      sym__dquote_string,
    STATE(198), 1,
      sym_class_name_body,
    STATE(317), 1,
      aux_sym_class_name_body_repeat1,
    STATE(412), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [12367] = 6,
    ACTIONS(1004), 1,
      aux_sym_sequence_stmt_note_token2,
    ACTIONS(1006), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1008), 1,
      aux_sym_note_placement_right_token1,
    STATE(364), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(554), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [12388] = 6,
    ACTIONS(1006), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1008), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1010), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(406), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(554), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [12409] = 6,
    ACTIONS(1006), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1008), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1012), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(388), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(554), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [12430] = 6,
    ACTIONS(1006), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1008), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1014), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(360), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(554), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [12451] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(831), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(807), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [12466] = 4,
    ACTIONS(1016), 1,
      anon_sym_TILDE,
    STATE(305), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(722), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [12483] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(831), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(827), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [12498] = 7,
    ACTIONS(861), 1,
      sym__bquote_string,
    ACTIONS(1000), 1,
      sym__class_name,
    ACTIONS(1018), 1,
      sym__dquote_string,
    STATE(198), 1,
      sym_class_name_body,
    STATE(317), 1,
      aux_sym_class_name_body_repeat1,
    STATE(370), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [12521] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1020), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [12533] = 6,
    ACTIONS(861), 1,
      sym__bquote_string,
    ACTIONS(1022), 1,
      sym__class_name,
    STATE(198), 1,
      sym_class_name_body,
    STATE(374), 1,
      aux_sym_class_name_body_repeat1,
    STATE(433), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [12553] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1024), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [12565] = 6,
    ACTIONS(861), 1,
      sym__bquote_string,
    ACTIONS(1000), 1,
      sym__class_name,
    STATE(198), 1,
      sym_class_name_body,
    STATE(317), 1,
      aux_sym_class_name_body_repeat1,
    STATE(346), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [12585] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(807), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [12597] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1026), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [12609] = 6,
    ACTIONS(861), 1,
      sym__bquote_string,
    ACTIONS(1000), 1,
      sym__class_name,
    STATE(198), 1,
      sym_class_name_body,
    STATE(317), 1,
      aux_sym_class_name_body_repeat1,
    STATE(370), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [12629] = 5,
    ACTIONS(1028), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1030), 1,
      aux_sym_note_placement_right_token1,
    STATE(381), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(454), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [12647] = 5,
    ACTIONS(710), 1,
      anon_sym_COLON,
    ACTIONS(714), 1,
      anon_sym_DASH_DASH_GT,
    STATE(373), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(712), 2,
      ts_builtin_sym_end,
      sym__newline,
  [12665] = 5,
    ACTIONS(1028), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1030), 1,
      aux_sym_note_placement_right_token1,
    STATE(417), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(454), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [12683] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1032), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [12695] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(827), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [12707] = 5,
    ACTIONS(1034), 1,
      sym__dquote_string,
    STATE(194), 1,
      sym_state_alias,
    STATE(225), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(546), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [12725] = 6,
    ACTIONS(1022), 1,
      sym__class_name,
    ACTIONS(1036), 1,
      sym__bquote_string,
    STATE(283), 1,
      sym_class_name_body,
    STATE(308), 1,
      sym_class_name,
    STATE(385), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [12745] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1040), 1,
      aux_sym_class_label_token1,
    STATE(448), 1,
      sym_class_label,
    ACTIONS(1038), 2,
      ts_builtin_sym_end,
      sym__newline,
  [12762] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(913), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [12773] = 3,
    STATE(267), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1042), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [12786] = 5,
    ACTIONS(698), 1,
      anon_sym_DASH_DASH,
    ACTIONS(700), 1,
      sym_class_linetype_dotted,
    STATE(206), 1,
      sym__class_linetype,
    STATE(258), 1,
      sym_class_linetype_solid,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [12803] = 3,
    STATE(266), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1044), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [12816] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(909), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [12827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1040), 1,
      aux_sym_class_label_token1,
    STATE(452), 1,
      sym_class_label,
    ACTIONS(1046), 2,
      ts_builtin_sym_end,
      sym__newline,
  [12844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1048), 1,
      sym__actor_word,
    STATE(307), 1,
      aux_sym_actor_repeat1,
    ACTIONS(782), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [12861] = 4,
    ACTIONS(1053), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1055), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1051), 2,
      ts_builtin_sym_end,
      sym__newline,
  [12876] = 3,
    STATE(264), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1057), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [12889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1059), 1,
      sym__actor_word,
    STATE(307), 1,
      aux_sym_actor_repeat1,
    ACTIONS(793), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [12906] = 3,
    STATE(268), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1061), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [12919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1040), 1,
      aux_sym_class_label_token1,
    STATE(442), 1,
      sym_class_label,
    ACTIONS(1063), 2,
      ts_builtin_sym_end,
      sym__newline,
  [12936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(742), 1,
      aux_sym_class_label_token1,
    STATE(230), 1,
      sym_state_description,
    ACTIONS(738), 2,
      ts_builtin_sym_end,
      sym__newline,
  [12953] = 4,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    ACTIONS(1065), 1,
      sym__newline,
    STATE(389), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [12967] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(522), 1,
      sym_actor,
  [12983] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1067), 1,
      sym__actor_word,
    STATE(310), 1,
      aux_sym_actor_repeat1,
    STATE(428), 1,
      sym_actor,
  [12999] = 4,
    ACTIONS(1069), 1,
      sym__class_name,
    ACTIONS(1071), 1,
      sym__bquote_string,
    STATE(354), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(564), 1,
      sym_actor,
  [13029] = 4,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1073), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(361), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13043] = 4,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1075), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(363), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1067), 1,
      sym__actor_word,
    STATE(310), 1,
      aux_sym_actor_repeat1,
    STATE(427), 1,
      sym_actor,
  [13073] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1077), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13083] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(465), 1,
      sym_actor,
  [13099] = 4,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1079), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(361), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13113] = 4,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1081), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(363), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13127] = 3,
    STATE(200), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1083), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [13139] = 4,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    ACTIONS(1065), 1,
      sym__newline,
    STATE(333), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13153] = 4,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1085), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(361), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13167] = 4,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1087), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(363), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13181] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(546), 1,
      sym_actor,
  [13197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(547), 1,
      sym_actor,
  [13213] = 4,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    ACTIONS(1089), 1,
      sym__newline,
    STATE(334), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13227] = 4,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    ACTIONS(1093), 1,
      sym__newline,
    STATE(333), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13241] = 4,
    ACTIONS(1096), 1,
      ts_builtin_sym_end,
    ACTIONS(1098), 1,
      sym__newline,
    STATE(334), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13255] = 4,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    ACTIONS(1101), 1,
      sym__newline,
    STATE(333), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13269] = 4,
    ACTIONS(873), 1,
      ts_builtin_sym_end,
    ACTIONS(1103), 1,
      sym__newline,
    STATE(414), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13283] = 4,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    ACTIONS(1089), 1,
      sym__newline,
    STATE(411), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13297] = 4,
    ACTIONS(1105), 1,
      anon_sym_RBRACE,
    ACTIONS(1107), 1,
      sym__newline,
    STATE(327), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13311] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(464), 1,
      sym_actor,
  [13327] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(566), 1,
      sym_actor,
  [13343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(545), 1,
      sym_actor,
  [13359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(567), 1,
      sym_actor,
  [13375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(568), 1,
      sym_actor,
  [13391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(540), 1,
      sym_actor,
  [13407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(642), 1,
      sym_actor,
  [13423] = 3,
    ACTIONS(1109), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1038), 2,
      ts_builtin_sym_end,
      sym__newline,
  [13435] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1111), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13445] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(629), 1,
      sym_actor,
  [13461] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1113), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13471] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1115), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13481] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1117), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13491] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1119), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13501] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1121), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13511] = 4,
    ACTIONS(1123), 1,
      sym__class_name,
    ACTIONS(1126), 1,
      sym__bquote_string,
    STATE(354), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13525] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1128), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13535] = 4,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    ACTIONS(1130), 1,
      sym__newline,
    STATE(333), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13549] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(628), 1,
      sym_actor,
  [13565] = 4,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    ACTIONS(1130), 1,
      sym__newline,
    STATE(335), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13579] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(569), 1,
      sym_actor,
  [13595] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(626), 1,
      sym_actor,
  [13611] = 4,
    ACTIONS(1132), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1134), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(361), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(437), 1,
      sym_actor,
  [13641] = 4,
    ACTIONS(1137), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1139), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(363), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13655] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(596), 1,
      sym_actor,
  [13671] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(649), 1,
      sym_actor,
  [13687] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(544), 1,
      sym_actor,
  [13703] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(598), 1,
      sym_actor,
  [13719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(561), 1,
      sym_actor,
  [13735] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1142), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [13745] = 3,
    ACTIONS(1144), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1063), 2,
      ts_builtin_sym_end,
      sym__newline,
  [13757] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(978), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13767] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1146), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13777] = 3,
    STATE(200), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(546), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [13789] = 4,
    ACTIONS(1071), 1,
      sym__bquote_string,
    ACTIONS(1148), 1,
      sym__class_name,
    STATE(354), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(562), 1,
      sym_actor,
  [13819] = 4,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
    ACTIONS(1150), 1,
      sym__newline,
    STATE(334), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13833] = 4,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
    ACTIONS(1150), 1,
      sym__newline,
    STATE(332), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13847] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(563), 1,
      sym_actor,
  [13863] = 4,
    ACTIONS(1152), 1,
      anon_sym_RBRACE,
    ACTIONS(1154), 1,
      sym__newline,
    STATE(356), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(523), 1,
      sym_actor,
  [13893] = 3,
    STATE(618), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(546), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [13905] = 4,
    ACTIONS(1071), 1,
      sym__bquote_string,
    ACTIONS(1156), 1,
      sym__class_name,
    STATE(354), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(599), 1,
      sym_actor,
  [13935] = 3,
    ACTIONS(1160), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1158), 2,
      ts_builtin_sym_end,
      sym__newline,
  [13947] = 4,
    ACTIONS(1148), 1,
      sym__class_name,
    ACTIONS(1162), 1,
      sym__bquote_string,
    STATE(354), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13961] = 4,
    ACTIONS(1164), 1,
      ts_builtin_sym_end,
    ACTIONS(1166), 1,
      sym__newline,
    STATE(391), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13975] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(443), 1,
      sym_actor,
  [13991] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(611), 1,
      sym_actor,
  [14007] = 4,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    ACTIONS(1168), 1,
      sym__newline,
    STATE(333), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14021] = 4,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1170), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(361), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14035] = 4,
    ACTIONS(873), 1,
      ts_builtin_sym_end,
    ACTIONS(1103), 1,
      sym__newline,
    STATE(399), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14049] = 4,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1172), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(363), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1176), 1,
      sym__actor_word,
    ACTIONS(1174), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1180), 1,
      sym__actor_word,
    ACTIONS(1178), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(613), 1,
      sym_actor,
  [14107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(521), 1,
      sym_actor,
  [14123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(520), 1,
      sym_actor,
  [14139] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1067), 1,
      sym__actor_word,
    STATE(310), 1,
      aux_sym_actor_repeat1,
    STATE(422), 1,
      sym_actor,
  [14155] = 4,
    ACTIONS(1182), 1,
      ts_builtin_sym_end,
    ACTIONS(1184), 1,
      sym__newline,
    STATE(399), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14169] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(502), 1,
      sym_actor,
  [14185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(501), 1,
      sym_actor,
  [14201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1067), 1,
      sym__actor_word,
    STATE(310), 1,
      aux_sym_actor_repeat1,
    STATE(432), 1,
      sym_actor,
  [14217] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1067), 1,
      sym__actor_word,
    STATE(310), 1,
      aux_sym_actor_repeat1,
    STATE(430), 1,
      sym_actor,
  [14233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1067), 1,
      sym__actor_word,
    STATE(310), 1,
      aux_sym_actor_repeat1,
    STATE(423), 1,
      sym_actor,
  [14249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(481), 1,
      sym_actor,
  [14265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(602), 1,
      sym_actor,
  [14281] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(480), 1,
      sym_actor,
  [14297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1067), 1,
      sym__actor_word,
    STATE(310), 1,
      aux_sym_actor_repeat1,
    STATE(458), 1,
      sym_actor,
  [14313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(440), 1,
      sym_actor,
  [14329] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1067), 1,
      sym__actor_word,
    STATE(310), 1,
      aux_sym_actor_repeat1,
    STATE(457), 1,
      sym_actor,
  [14345] = 4,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(1187), 1,
      sym__newline,
    STATE(334), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14359] = 3,
    ACTIONS(1191), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1189), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14371] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(762), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [14381] = 4,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
    ACTIONS(1193), 1,
      sym__newline,
    STATE(399), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14395] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(539), 1,
      sym_actor,
  [14411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(438), 1,
      sym_actor,
  [14427] = 3,
    STATE(472), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(546), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [14439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__actor_word,
    STATE(214), 1,
      aux_sym_actor_repeat1,
    STATE(614), 1,
      sym_actor,
  [14455] = 4,
    ACTIONS(1195), 1,
      ts_builtin_sym_end,
    ACTIONS(1197), 1,
      sym__newline,
    STATE(376), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14469] = 3,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
    STATE(231), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(742), 1,
      aux_sym_class_label_token1,
    STATE(227), 1,
      sym_state_description,
  [14493] = 3,
    ACTIONS(1199), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1201), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14504] = 3,
    ACTIONS(1203), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1205), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14515] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1207), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14524] = 3,
    ACTIONS(1209), 1,
      anon_sym_COLON,
    ACTIONS(1211), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14535] = 3,
    ACTIONS(1213), 1,
      anon_sym_COLON,
    ACTIONS(1215), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14546] = 3,
    ACTIONS(1217), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1219), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14557] = 3,
    ACTIONS(1221), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1223), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14568] = 3,
    ACTIONS(1225), 1,
      anon_sym_COLON,
    ACTIONS(1227), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14579] = 3,
    ACTIONS(1229), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1231), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14590] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1233), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14599] = 3,
    ACTIONS(1235), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1237), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14610] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1239), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14619] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(742), 1,
      aux_sym_class_label_token1,
    STATE(202), 1,
      sym_state_description,
  [14641] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1241), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [14650] = 3,
    ACTIONS(1243), 1,
      anon_sym_COLON,
    ACTIONS(1245), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14661] = 3,
    ACTIONS(1247), 1,
      anon_sym_COLON,
    ACTIONS(1249), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14672] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1251), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14681] = 3,
    ACTIONS(1253), 1,
      anon_sym_COLON,
    ACTIONS(1255), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14692] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1257), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14701] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1038), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14710] = 3,
    ACTIONS(1259), 1,
      anon_sym_COLON,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14721] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1263), 2,
      anon_sym_RBRACE,
      sym__newline,
  [14730] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1265), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14739] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1091), 2,
      anon_sym_RBRACE,
      sym__newline,
  [14748] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1096), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14757] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1046), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14766] = 3,
    ACTIONS(1267), 1,
      anon_sym_COLON,
    ACTIONS(1269), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14777] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1271), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14786] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1273), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14795] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1275), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14804] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1277), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14813] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1279), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [14822] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1281), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [14831] = 3,
    ACTIONS(1283), 1,
      anon_sym_COLON,
    ACTIONS(1285), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14842] = 3,
    ACTIONS(1287), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1289), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14853] = 3,
    ACTIONS(1291), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1293), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14864] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1295), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [14873] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1297), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14882] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1299), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14891] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1301), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14900] = 2,
    ACTIONS(1303), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14908] = 2,
    ACTIONS(1305), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14916] = 2,
    ACTIONS(1307), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14924] = 2,
    ACTIONS(1309), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1311), 1,
      sym__rest_text,
  [14942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1313), 1,
      sym__rest_text,
  [14952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1315), 1,
      sym__rest_text,
  [14962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1317), 1,
      sym__rest_text,
  [14972] = 2,
    ACTIONS(1319), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14980] = 2,
    ACTIONS(1321), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14988] = 2,
    ACTIONS(1323), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14996] = 2,
    ACTIONS(1325), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15004] = 2,
    ACTIONS(1327), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15012] = 2,
    ACTIONS(1329), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15020] = 2,
    ACTIONS(1331), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15028] = 2,
    ACTIONS(1333), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15036] = 2,
    ACTIONS(1335), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15044] = 2,
    ACTIONS(1337), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15052] = 2,
    ACTIONS(1339), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15060] = 2,
    ACTIONS(1341), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1343), 1,
      sym__rest_text,
  [15078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1345), 1,
      sym__rest_text,
  [15088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1347), 1,
      sym__rest_text,
  [15098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1349), 1,
      sym__rest_text,
  [15108] = 2,
    ACTIONS(1351), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1353), 1,
      sym__rest_text,
  [15126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1355), 1,
      sym__rest_text,
  [15136] = 2,
    ACTIONS(1357), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15144] = 2,
    ACTIONS(1359), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1361), 1,
      sym__rest_text,
  [15162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1363), 1,
      sym__rest_text,
  [15172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1365), 1,
      sym__rest_text,
  [15182] = 2,
    ACTIONS(1367), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15190] = 2,
    ACTIONS(1369), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15198] = 2,
    ACTIONS(1371), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15206] = 2,
    ACTIONS(1373), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15214] = 2,
    ACTIONS(1375), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15222] = 2,
    ACTIONS(1377), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15230] = 2,
    ACTIONS(1379), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15238] = 2,
    ACTIONS(1381), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15246] = 2,
    ACTIONS(1383), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1385), 1,
      sym__rest_text,
  [15264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1387), 1,
      sym__rest_text,
  [15274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1389), 1,
      sym__rest_text,
  [15284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1391), 1,
      sym__rest_text,
  [15294] = 2,
    ACTIONS(1393), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15302] = 2,
    ACTIONS(1395), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15310] = 2,
    ACTIONS(1397), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15318] = 2,
    ACTIONS(1399), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15326] = 2,
    ACTIONS(1401), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15334] = 2,
    ACTIONS(1403), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15342] = 2,
    ACTIONS(1405), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15350] = 2,
    ACTIONS(1407), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15358] = 2,
    ACTIONS(1409), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15366] = 2,
    ACTIONS(1411), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15374] = 2,
    ACTIONS(1413), 1,
      sym_type_directive,
    ACTIONS(57), 2,
      sym__whitespace,
      sym_comment,
  [15382] = 2,
    ACTIONS(1415), 1,
      sym_arg_directive,
    ACTIONS(57), 2,
      sym__whitespace,
      sym_comment,
  [15390] = 2,
    ACTIONS(1417), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15398] = 2,
    ACTIONS(1419), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15406] = 2,
    ACTIONS(1421), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15414] = 2,
    ACTIONS(1423), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1425), 1,
      sym__rest_text,
  [15432] = 2,
    ACTIONS(1427), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15440] = 2,
    ACTIONS(1429), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15448] = 2,
    ACTIONS(1431), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15456] = 2,
    ACTIONS(1433), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1435), 1,
      sym__rest_text,
  [15474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1437), 1,
      sym__rest_text,
  [15484] = 2,
    ACTIONS(1439), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15492] = 2,
    ACTIONS(1441), 1,
      sym_arg_directive,
    ACTIONS(57), 2,
      sym__whitespace,
      sym_comment,
  [15500] = 2,
    ACTIONS(1443), 1,
      aux_sym_class_generics_token1,
    ACTIONS(57), 2,
      sym__whitespace,
      sym_comment,
  [15508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1445), 1,
      sym__rest_text,
  [15518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1447), 1,
      sym__rest_text,
  [15528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1449), 1,
      sym__rest_text,
  [15538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1451), 1,
      sym__rest_text,
  [15548] = 2,
    ACTIONS(1453), 1,
      sym_type_directive,
    ACTIONS(57), 2,
      sym__whitespace,
      sym_comment,
  [15556] = 2,
    ACTIONS(1455), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15564] = 2,
    ACTIONS(1457), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1459), 1,
      sym__actor_word,
  [15582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1461), 1,
      sym__actor_word,
  [15592] = 2,
    ACTIONS(1463), 1,
      sym_arg_directive,
    ACTIONS(57), 2,
      sym__whitespace,
      sym_comment,
  [15600] = 2,
    ACTIONS(1465), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15608] = 2,
    ACTIONS(1467), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15616] = 2,
    ACTIONS(1469), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15624] = 2,
    ACTIONS(1471), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1473), 1,
      sym__rest_text,
  [15642] = 2,
    ACTIONS(1475), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15650] = 2,
    ACTIONS(1477), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15658] = 2,
    ACTIONS(1479), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1481), 1,
      sym__rest_text,
  [15676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1483), 1,
      sym__rest_text,
  [15686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1485), 1,
      sym__actor_word,
  [15696] = 2,
    ACTIONS(1487), 1,
      sym_type_directive,
    ACTIONS(57), 2,
      sym__whitespace,
      sym_comment,
  [15704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1489), 1,
      sym__rest_text,
  [15714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1491), 1,
      sym__rest_text,
  [15724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1493), 1,
      sym__rest_text,
  [15734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1495), 1,
      sym__rest_text,
  [15744] = 2,
    ACTIONS(1497), 1,
      sym_type_directive,
    ACTIONS(57), 2,
      sym__whitespace,
      sym_comment,
  [15752] = 2,
    ACTIONS(1499), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15760] = 2,
    ACTIONS(1501), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15768] = 2,
    ACTIONS(1503), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15776] = 2,
    ACTIONS(1505), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15784] = 2,
    ACTIONS(1507), 1,
      sym_arg_directive,
    ACTIONS(57), 2,
      sym__whitespace,
      sym_comment,
  [15792] = 2,
    ACTIONS(1509), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15800] = 2,
    ACTIONS(1511), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15808] = 2,
    ACTIONS(1513), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15816] = 2,
    ACTIONS(1515), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1517), 1,
      sym__rest_text,
  [15834] = 2,
    ACTIONS(1519), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15842] = 2,
    ACTIONS(1521), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15850] = 2,
    ACTIONS(1523), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1525), 1,
      sym__rest_text,
  [15868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1527), 1,
      sym__rest_text,
  [15878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1529), 1,
      sym__rest_text,
  [15888] = 2,
    ACTIONS(1531), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1533), 1,
      sym__rest_text,
  [15906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1535), 1,
      sym__rest_text,
  [15916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1537), 1,
      sym__rest_text,
  [15926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1539), 1,
      sym__rest_text,
  [15936] = 2,
    ACTIONS(1541), 1,
      sym_type_directive,
    ACTIONS(57), 2,
      sym__whitespace,
      sym_comment,
  [15944] = 2,
    ACTIONS(1543), 1,
      sym_arg_directive,
    ACTIONS(57), 2,
      sym__whitespace,
      sym_comment,
  [15952] = 2,
    ACTIONS(1545), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15960] = 2,
    ACTIONS(1547), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1549), 1,
      sym__actor_word,
  [15978] = 2,
    ACTIONS(1551), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15986] = 2,
    ACTIONS(1553), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1555), 1,
      sym__rest_text,
  [16004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1557), 1,
      sym__rest_text,
  [16014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1559), 1,
      sym__rest_text,
  [16024] = 2,
    ACTIONS(1561), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16032] = 2,
    ACTIONS(1563), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16040] = 2,
    ACTIONS(1565), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16048] = 2,
    ACTIONS(1567), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16056] = 2,
    ACTIONS(1243), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16064] = 2,
    ACTIONS(1569), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16072] = 2,
    ACTIONS(1571), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16080] = 2,
    ACTIONS(1573), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1575), 1,
      sym__rest_text,
  [16098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1577), 1,
      sym__rest_text,
  [16108] = 2,
    ACTIONS(1253), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1579), 1,
      sym__rest_text,
  [16126] = 2,
    ACTIONS(1581), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1583), 1,
      sym__rest_text,
  [16144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1585), 1,
      sym__rest_text,
  [16154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1587), 1,
      sym__rest_text,
  [16164] = 2,
    ACTIONS(1589), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16172] = 2,
    ACTIONS(1591), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1593), 1,
      sym__rest_text,
  [16190] = 2,
    ACTIONS(1259), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16198] = 2,
    ACTIONS(1595), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16206] = 2,
    ACTIONS(1597), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16214] = 2,
    ACTIONS(1599), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16222] = 2,
    ACTIONS(1601), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1603), 1,
      sym__rest_text,
  [16240] = 2,
    ACTIONS(1605), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16248] = 2,
    ACTIONS(1607), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16256] = 2,
    ACTIONS(1609), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1611), 1,
      sym__rest_text,
  [16274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1613), 1,
      sym__rest_text,
  [16284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1615), 1,
      sym__rest_text,
  [16294] = 2,
    ACTIONS(1617), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16302] = 2,
    ACTIONS(1619), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16310] = 2,
    ACTIONS(1621), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16318] = 2,
    ACTIONS(1247), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16326] = 2,
    ACTIONS(1623), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16334] = 2,
    ACTIONS(1625), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16342] = 2,
    ACTIONS(1627), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1629), 1,
      sym__rest_text,
  [16360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1631), 1,
      sym__rest_text,
  [16370] = 2,
    ACTIONS(1633), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1635), 1,
      sym__actor_word,
  [16388] = 2,
    ACTIONS(1637), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1639), 1,
      sym__rest_text,
  [16406] = 2,
    ACTIONS(1641), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1643), 1,
      sym__rest_text,
  [16424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1645), 1,
      sym__rest_text,
  [16434] = 2,
    ACTIONS(1647), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1649), 1,
      sym__rest_text,
  [16452] = 2,
    ACTIONS(1651), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16460] = 2,
    ACTIONS(1653), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16468] = 2,
    ACTIONS(1655), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1657), 1,
      sym__rest_text,
  [16486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      sym__rest_text,
  [16496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1661), 1,
      sym__rest_text,
  [16506] = 2,
    ACTIONS(1663), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16514] = 2,
    ACTIONS(1665), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16522] = 2,
    ACTIONS(1667), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1669), 1,
      sym__rest_text,
  [16540] = 2,
    ACTIONS(1671), 1,
      aux_sym_class_generics_token1,
    ACTIONS(57), 2,
      sym__whitespace,
      sym_comment,
  [16548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__whitespace,
    ACTIONS(1673), 1,
      sym__rest_text,
  [16558] = 2,
    ACTIONS(1675), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16566] = 2,
    ACTIONS(1677), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16574] = 2,
    ACTIONS(1679), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16582] = 2,
    ACTIONS(1681), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 420,
  [SMALL_STATE(7)] = 525,
  [SMALL_STATE(8)] = 630,
  [SMALL_STATE(9)] = 735,
  [SMALL_STATE(10)] = 840,
  [SMALL_STATE(11)] = 940,
  [SMALL_STATE(12)] = 1040,
  [SMALL_STATE(13)] = 1140,
  [SMALL_STATE(14)] = 1240,
  [SMALL_STATE(15)] = 1339,
  [SMALL_STATE(16)] = 1436,
  [SMALL_STATE(17)] = 1535,
  [SMALL_STATE(18)] = 1634,
  [SMALL_STATE(19)] = 1733,
  [SMALL_STATE(20)] = 1832,
  [SMALL_STATE(21)] = 1931,
  [SMALL_STATE(22)] = 2030,
  [SMALL_STATE(23)] = 2129,
  [SMALL_STATE(24)] = 2228,
  [SMALL_STATE(25)] = 2327,
  [SMALL_STATE(26)] = 2426,
  [SMALL_STATE(27)] = 2523,
  [SMALL_STATE(28)] = 2622,
  [SMALL_STATE(29)] = 2719,
  [SMALL_STATE(30)] = 2818,
  [SMALL_STATE(31)] = 2917,
  [SMALL_STATE(32)] = 3016,
  [SMALL_STATE(33)] = 3115,
  [SMALL_STATE(34)] = 3214,
  [SMALL_STATE(35)] = 3313,
  [SMALL_STATE(36)] = 3412,
  [SMALL_STATE(37)] = 3511,
  [SMALL_STATE(38)] = 3610,
  [SMALL_STATE(39)] = 3709,
  [SMALL_STATE(40)] = 3808,
  [SMALL_STATE(41)] = 3907,
  [SMALL_STATE(42)] = 4004,
  [SMALL_STATE(43)] = 4101,
  [SMALL_STATE(44)] = 4200,
  [SMALL_STATE(45)] = 4296,
  [SMALL_STATE(46)] = 4392,
  [SMALL_STATE(47)] = 4488,
  [SMALL_STATE(48)] = 4584,
  [SMALL_STATE(49)] = 4680,
  [SMALL_STATE(50)] = 4776,
  [SMALL_STATE(51)] = 4872,
  [SMALL_STATE(52)] = 4968,
  [SMALL_STATE(53)] = 5064,
  [SMALL_STATE(54)] = 5160,
  [SMALL_STATE(55)] = 5223,
  [SMALL_STATE(56)] = 5286,
  [SMALL_STATE(57)] = 5349,
  [SMALL_STATE(58)] = 5412,
  [SMALL_STATE(59)] = 5475,
  [SMALL_STATE(60)] = 5534,
  [SMALL_STATE(61)] = 5593,
  [SMALL_STATE(62)] = 5652,
  [SMALL_STATE(63)] = 5711,
  [SMALL_STATE(64)] = 5770,
  [SMALL_STATE(65)] = 5829,
  [SMALL_STATE(66)] = 5888,
  [SMALL_STATE(67)] = 5947,
  [SMALL_STATE(68)] = 6006,
  [SMALL_STATE(69)] = 6065,
  [SMALL_STATE(70)] = 6121,
  [SMALL_STATE(71)] = 6177,
  [SMALL_STATE(72)] = 6233,
  [SMALL_STATE(73)] = 6289,
  [SMALL_STATE(74)] = 6345,
  [SMALL_STATE(75)] = 6377,
  [SMALL_STATE(76)] = 6409,
  [SMALL_STATE(77)] = 6441,
  [SMALL_STATE(78)] = 6473,
  [SMALL_STATE(79)] = 6505,
  [SMALL_STATE(80)] = 6537,
  [SMALL_STATE(81)] = 6569,
  [SMALL_STATE(82)] = 6601,
  [SMALL_STATE(83)] = 6633,
  [SMALL_STATE(84)] = 6665,
  [SMALL_STATE(85)] = 6697,
  [SMALL_STATE(86)] = 6729,
  [SMALL_STATE(87)] = 6761,
  [SMALL_STATE(88)] = 6793,
  [SMALL_STATE(89)] = 6825,
  [SMALL_STATE(90)] = 6857,
  [SMALL_STATE(91)] = 6889,
  [SMALL_STATE(92)] = 6921,
  [SMALL_STATE(93)] = 6953,
  [SMALL_STATE(94)] = 6985,
  [SMALL_STATE(95)] = 7017,
  [SMALL_STATE(96)] = 7049,
  [SMALL_STATE(97)] = 7081,
  [SMALL_STATE(98)] = 7113,
  [SMALL_STATE(99)] = 7145,
  [SMALL_STATE(100)] = 7177,
  [SMALL_STATE(101)] = 7209,
  [SMALL_STATE(102)] = 7241,
  [SMALL_STATE(103)] = 7273,
  [SMALL_STATE(104)] = 7305,
  [SMALL_STATE(105)] = 7337,
  [SMALL_STATE(106)] = 7369,
  [SMALL_STATE(107)] = 7401,
  [SMALL_STATE(108)] = 7433,
  [SMALL_STATE(109)] = 7465,
  [SMALL_STATE(110)] = 7497,
  [SMALL_STATE(111)] = 7529,
  [SMALL_STATE(112)] = 7561,
  [SMALL_STATE(113)] = 7593,
  [SMALL_STATE(114)] = 7625,
  [SMALL_STATE(115)] = 7657,
  [SMALL_STATE(116)] = 7689,
  [SMALL_STATE(117)] = 7721,
  [SMALL_STATE(118)] = 7753,
  [SMALL_STATE(119)] = 7785,
  [SMALL_STATE(120)] = 7817,
  [SMALL_STATE(121)] = 7849,
  [SMALL_STATE(122)] = 7881,
  [SMALL_STATE(123)] = 7913,
  [SMALL_STATE(124)] = 7945,
  [SMALL_STATE(125)] = 7977,
  [SMALL_STATE(126)] = 8009,
  [SMALL_STATE(127)] = 8041,
  [SMALL_STATE(128)] = 8073,
  [SMALL_STATE(129)] = 8105,
  [SMALL_STATE(130)] = 8137,
  [SMALL_STATE(131)] = 8169,
  [SMALL_STATE(132)] = 8201,
  [SMALL_STATE(133)] = 8233,
  [SMALL_STATE(134)] = 8265,
  [SMALL_STATE(135)] = 8296,
  [SMALL_STATE(136)] = 8327,
  [SMALL_STATE(137)] = 8358,
  [SMALL_STATE(138)] = 8389,
  [SMALL_STATE(139)] = 8420,
  [SMALL_STATE(140)] = 8451,
  [SMALL_STATE(141)] = 8482,
  [SMALL_STATE(142)] = 8513,
  [SMALL_STATE(143)] = 8544,
  [SMALL_STATE(144)] = 8575,
  [SMALL_STATE(145)] = 8606,
  [SMALL_STATE(146)] = 8637,
  [SMALL_STATE(147)] = 8668,
  [SMALL_STATE(148)] = 8699,
  [SMALL_STATE(149)] = 8730,
  [SMALL_STATE(150)] = 8761,
  [SMALL_STATE(151)] = 8792,
  [SMALL_STATE(152)] = 8823,
  [SMALL_STATE(153)] = 8854,
  [SMALL_STATE(154)] = 8885,
  [SMALL_STATE(155)] = 8916,
  [SMALL_STATE(156)] = 8947,
  [SMALL_STATE(157)] = 8978,
  [SMALL_STATE(158)] = 9009,
  [SMALL_STATE(159)] = 9040,
  [SMALL_STATE(160)] = 9071,
  [SMALL_STATE(161)] = 9102,
  [SMALL_STATE(162)] = 9133,
  [SMALL_STATE(163)] = 9164,
  [SMALL_STATE(164)] = 9195,
  [SMALL_STATE(165)] = 9226,
  [SMALL_STATE(166)] = 9257,
  [SMALL_STATE(167)] = 9288,
  [SMALL_STATE(168)] = 9319,
  [SMALL_STATE(169)] = 9350,
  [SMALL_STATE(170)] = 9381,
  [SMALL_STATE(171)] = 9412,
  [SMALL_STATE(172)] = 9443,
  [SMALL_STATE(173)] = 9474,
  [SMALL_STATE(174)] = 9505,
  [SMALL_STATE(175)] = 9536,
  [SMALL_STATE(176)] = 9567,
  [SMALL_STATE(177)] = 9598,
  [SMALL_STATE(178)] = 9629,
  [SMALL_STATE(179)] = 9660,
  [SMALL_STATE(180)] = 9691,
  [SMALL_STATE(181)] = 9722,
  [SMALL_STATE(182)] = 9753,
  [SMALL_STATE(183)] = 9784,
  [SMALL_STATE(184)] = 9815,
  [SMALL_STATE(185)] = 9846,
  [SMALL_STATE(186)] = 9877,
  [SMALL_STATE(187)] = 9908,
  [SMALL_STATE(188)] = 9939,
  [SMALL_STATE(189)] = 9970,
  [SMALL_STATE(190)] = 10001,
  [SMALL_STATE(191)] = 10032,
  [SMALL_STATE(192)] = 10063,
  [SMALL_STATE(193)] = 10094,
  [SMALL_STATE(194)] = 10144,
  [SMALL_STATE(195)] = 10175,
  [SMALL_STATE(196)] = 10205,
  [SMALL_STATE(197)] = 10249,
  [SMALL_STATE(198)] = 10273,
  [SMALL_STATE(199)] = 10300,
  [SMALL_STATE(200)] = 10323,
  [SMALL_STATE(201)] = 10348,
  [SMALL_STATE(202)] = 10377,
  [SMALL_STATE(203)] = 10399,
  [SMALL_STATE(204)] = 10421,
  [SMALL_STATE(205)] = 10443,
  [SMALL_STATE(206)] = 10465,
  [SMALL_STATE(207)] = 10501,
  [SMALL_STATE(208)] = 10523,
  [SMALL_STATE(209)] = 10545,
  [SMALL_STATE(210)] = 10567,
  [SMALL_STATE(211)] = 10589,
  [SMALL_STATE(212)] = 10611,
  [SMALL_STATE(213)] = 10639,
  [SMALL_STATE(214)] = 10675,
  [SMALL_STATE(215)] = 10703,
  [SMALL_STATE(216)] = 10725,
  [SMALL_STATE(217)] = 10747,
  [SMALL_STATE(218)] = 10769,
  [SMALL_STATE(219)] = 10791,
  [SMALL_STATE(220)] = 10813,
  [SMALL_STATE(221)] = 10835,
  [SMALL_STATE(222)] = 10857,
  [SMALL_STATE(223)] = 10883,
  [SMALL_STATE(224)] = 10905,
  [SMALL_STATE(225)] = 10927,
  [SMALL_STATE(226)] = 10959,
  [SMALL_STATE(227)] = 10981,
  [SMALL_STATE(228)] = 11003,
  [SMALL_STATE(229)] = 11041,
  [SMALL_STATE(230)] = 11079,
  [SMALL_STATE(231)] = 11101,
  [SMALL_STATE(232)] = 11123,
  [SMALL_STATE(233)] = 11161,
  [SMALL_STATE(234)] = 11187,
  [SMALL_STATE(235)] = 11209,
  [SMALL_STATE(236)] = 11231,
  [SMALL_STATE(237)] = 11266,
  [SMALL_STATE(238)] = 11303,
  [SMALL_STATE(239)] = 11338,
  [SMALL_STATE(240)] = 11359,
  [SMALL_STATE(241)] = 11378,
  [SMALL_STATE(242)] = 11415,
  [SMALL_STATE(243)] = 11450,
  [SMALL_STATE(244)] = 11487,
  [SMALL_STATE(245)] = 11524,
  [SMALL_STATE(246)] = 11561,
  [SMALL_STATE(247)] = 11582,
  [SMALL_STATE(248)] = 11603,
  [SMALL_STATE(249)] = 11640,
  [SMALL_STATE(250)] = 11677,
  [SMALL_STATE(251)] = 11714,
  [SMALL_STATE(252)] = 11748,
  [SMALL_STATE(253)] = 11782,
  [SMALL_STATE(254)] = 11816,
  [SMALL_STATE(255)] = 11841,
  [SMALL_STATE(256)] = 11866,
  [SMALL_STATE(257)] = 11891,
  [SMALL_STATE(258)] = 11916,
  [SMALL_STATE(259)] = 11934,
  [SMALL_STATE(260)] = 11964,
  [SMALL_STATE(261)] = 11988,
  [SMALL_STATE(262)] = 12008,
  [SMALL_STATE(263)] = 12032,
  [SMALL_STATE(264)] = 12050,
  [SMALL_STATE(265)] = 12074,
  [SMALL_STATE(266)] = 12104,
  [SMALL_STATE(267)] = 12128,
  [SMALL_STATE(268)] = 12152,
  [SMALL_STATE(269)] = 12176,
  [SMALL_STATE(270)] = 12202,
  [SMALL_STATE(271)] = 12218,
  [SMALL_STATE(272)] = 12234,
  [SMALL_STATE(273)] = 12250,
  [SMALL_STATE(274)] = 12276,
  [SMALL_STATE(275)] = 12292,
  [SMALL_STATE(276)] = 12318,
  [SMALL_STATE(277)] = 12344,
  [SMALL_STATE(278)] = 12367,
  [SMALL_STATE(279)] = 12388,
  [SMALL_STATE(280)] = 12409,
  [SMALL_STATE(281)] = 12430,
  [SMALL_STATE(282)] = 12451,
  [SMALL_STATE(283)] = 12466,
  [SMALL_STATE(284)] = 12483,
  [SMALL_STATE(285)] = 12498,
  [SMALL_STATE(286)] = 12521,
  [SMALL_STATE(287)] = 12533,
  [SMALL_STATE(288)] = 12553,
  [SMALL_STATE(289)] = 12565,
  [SMALL_STATE(290)] = 12585,
  [SMALL_STATE(291)] = 12597,
  [SMALL_STATE(292)] = 12609,
  [SMALL_STATE(293)] = 12629,
  [SMALL_STATE(294)] = 12647,
  [SMALL_STATE(295)] = 12665,
  [SMALL_STATE(296)] = 12683,
  [SMALL_STATE(297)] = 12695,
  [SMALL_STATE(298)] = 12707,
  [SMALL_STATE(299)] = 12725,
  [SMALL_STATE(300)] = 12745,
  [SMALL_STATE(301)] = 12762,
  [SMALL_STATE(302)] = 12773,
  [SMALL_STATE(303)] = 12786,
  [SMALL_STATE(304)] = 12803,
  [SMALL_STATE(305)] = 12816,
  [SMALL_STATE(306)] = 12827,
  [SMALL_STATE(307)] = 12844,
  [SMALL_STATE(308)] = 12861,
  [SMALL_STATE(309)] = 12876,
  [SMALL_STATE(310)] = 12889,
  [SMALL_STATE(311)] = 12906,
  [SMALL_STATE(312)] = 12919,
  [SMALL_STATE(313)] = 12936,
  [SMALL_STATE(314)] = 12953,
  [SMALL_STATE(315)] = 12967,
  [SMALL_STATE(316)] = 12983,
  [SMALL_STATE(317)] = 12999,
  [SMALL_STATE(318)] = 13013,
  [SMALL_STATE(319)] = 13029,
  [SMALL_STATE(320)] = 13043,
  [SMALL_STATE(321)] = 13057,
  [SMALL_STATE(322)] = 13073,
  [SMALL_STATE(323)] = 13083,
  [SMALL_STATE(324)] = 13099,
  [SMALL_STATE(325)] = 13113,
  [SMALL_STATE(326)] = 13127,
  [SMALL_STATE(327)] = 13139,
  [SMALL_STATE(328)] = 13153,
  [SMALL_STATE(329)] = 13167,
  [SMALL_STATE(330)] = 13181,
  [SMALL_STATE(331)] = 13197,
  [SMALL_STATE(332)] = 13213,
  [SMALL_STATE(333)] = 13227,
  [SMALL_STATE(334)] = 13241,
  [SMALL_STATE(335)] = 13255,
  [SMALL_STATE(336)] = 13269,
  [SMALL_STATE(337)] = 13283,
  [SMALL_STATE(338)] = 13297,
  [SMALL_STATE(339)] = 13311,
  [SMALL_STATE(340)] = 13327,
  [SMALL_STATE(341)] = 13343,
  [SMALL_STATE(342)] = 13359,
  [SMALL_STATE(343)] = 13375,
  [SMALL_STATE(344)] = 13391,
  [SMALL_STATE(345)] = 13407,
  [SMALL_STATE(346)] = 13423,
  [SMALL_STATE(347)] = 13435,
  [SMALL_STATE(348)] = 13445,
  [SMALL_STATE(349)] = 13461,
  [SMALL_STATE(350)] = 13471,
  [SMALL_STATE(351)] = 13481,
  [SMALL_STATE(352)] = 13491,
  [SMALL_STATE(353)] = 13501,
  [SMALL_STATE(354)] = 13511,
  [SMALL_STATE(355)] = 13525,
  [SMALL_STATE(356)] = 13535,
  [SMALL_STATE(357)] = 13549,
  [SMALL_STATE(358)] = 13565,
  [SMALL_STATE(359)] = 13579,
  [SMALL_STATE(360)] = 13595,
  [SMALL_STATE(361)] = 13611,
  [SMALL_STATE(362)] = 13625,
  [SMALL_STATE(363)] = 13641,
  [SMALL_STATE(364)] = 13655,
  [SMALL_STATE(365)] = 13671,
  [SMALL_STATE(366)] = 13687,
  [SMALL_STATE(367)] = 13703,
  [SMALL_STATE(368)] = 13719,
  [SMALL_STATE(369)] = 13735,
  [SMALL_STATE(370)] = 13745,
  [SMALL_STATE(371)] = 13757,
  [SMALL_STATE(372)] = 13767,
  [SMALL_STATE(373)] = 13777,
  [SMALL_STATE(374)] = 13789,
  [SMALL_STATE(375)] = 13803,
  [SMALL_STATE(376)] = 13819,
  [SMALL_STATE(377)] = 13833,
  [SMALL_STATE(378)] = 13847,
  [SMALL_STATE(379)] = 13863,
  [SMALL_STATE(380)] = 13877,
  [SMALL_STATE(381)] = 13893,
  [SMALL_STATE(382)] = 13905,
  [SMALL_STATE(383)] = 13919,
  [SMALL_STATE(384)] = 13935,
  [SMALL_STATE(385)] = 13947,
  [SMALL_STATE(386)] = 13961,
  [SMALL_STATE(387)] = 13975,
  [SMALL_STATE(388)] = 13991,
  [SMALL_STATE(389)] = 14007,
  [SMALL_STATE(390)] = 14021,
  [SMALL_STATE(391)] = 14035,
  [SMALL_STATE(392)] = 14049,
  [SMALL_STATE(393)] = 14063,
  [SMALL_STATE(394)] = 14077,
  [SMALL_STATE(395)] = 14091,
  [SMALL_STATE(396)] = 14107,
  [SMALL_STATE(397)] = 14123,
  [SMALL_STATE(398)] = 14139,
  [SMALL_STATE(399)] = 14155,
  [SMALL_STATE(400)] = 14169,
  [SMALL_STATE(401)] = 14185,
  [SMALL_STATE(402)] = 14201,
  [SMALL_STATE(403)] = 14217,
  [SMALL_STATE(404)] = 14233,
  [SMALL_STATE(405)] = 14249,
  [SMALL_STATE(406)] = 14265,
  [SMALL_STATE(407)] = 14281,
  [SMALL_STATE(408)] = 14297,
  [SMALL_STATE(409)] = 14313,
  [SMALL_STATE(410)] = 14329,
  [SMALL_STATE(411)] = 14345,
  [SMALL_STATE(412)] = 14359,
  [SMALL_STATE(413)] = 14371,
  [SMALL_STATE(414)] = 14381,
  [SMALL_STATE(415)] = 14395,
  [SMALL_STATE(416)] = 14411,
  [SMALL_STATE(417)] = 14427,
  [SMALL_STATE(418)] = 14439,
  [SMALL_STATE(419)] = 14455,
  [SMALL_STATE(420)] = 14469,
  [SMALL_STATE(421)] = 14480,
  [SMALL_STATE(422)] = 14493,
  [SMALL_STATE(423)] = 14504,
  [SMALL_STATE(424)] = 14515,
  [SMALL_STATE(425)] = 14524,
  [SMALL_STATE(426)] = 14535,
  [SMALL_STATE(427)] = 14546,
  [SMALL_STATE(428)] = 14557,
  [SMALL_STATE(429)] = 14568,
  [SMALL_STATE(430)] = 14579,
  [SMALL_STATE(431)] = 14590,
  [SMALL_STATE(432)] = 14599,
  [SMALL_STATE(433)] = 14610,
  [SMALL_STATE(434)] = 14619,
  [SMALL_STATE(435)] = 14628,
  [SMALL_STATE(436)] = 14641,
  [SMALL_STATE(437)] = 14650,
  [SMALL_STATE(438)] = 14661,
  [SMALL_STATE(439)] = 14672,
  [SMALL_STATE(440)] = 14681,
  [SMALL_STATE(441)] = 14692,
  [SMALL_STATE(442)] = 14701,
  [SMALL_STATE(443)] = 14710,
  [SMALL_STATE(444)] = 14721,
  [SMALL_STATE(445)] = 14730,
  [SMALL_STATE(446)] = 14739,
  [SMALL_STATE(447)] = 14748,
  [SMALL_STATE(448)] = 14757,
  [SMALL_STATE(449)] = 14766,
  [SMALL_STATE(450)] = 14777,
  [SMALL_STATE(451)] = 14786,
  [SMALL_STATE(452)] = 14795,
  [SMALL_STATE(453)] = 14804,
  [SMALL_STATE(454)] = 14813,
  [SMALL_STATE(455)] = 14822,
  [SMALL_STATE(456)] = 14831,
  [SMALL_STATE(457)] = 14842,
  [SMALL_STATE(458)] = 14853,
  [SMALL_STATE(459)] = 14864,
  [SMALL_STATE(460)] = 14873,
  [SMALL_STATE(461)] = 14882,
  [SMALL_STATE(462)] = 14891,
  [SMALL_STATE(463)] = 14900,
  [SMALL_STATE(464)] = 14908,
  [SMALL_STATE(465)] = 14916,
  [SMALL_STATE(466)] = 14924,
  [SMALL_STATE(467)] = 14932,
  [SMALL_STATE(468)] = 14942,
  [SMALL_STATE(469)] = 14952,
  [SMALL_STATE(470)] = 14962,
  [SMALL_STATE(471)] = 14972,
  [SMALL_STATE(472)] = 14980,
  [SMALL_STATE(473)] = 14988,
  [SMALL_STATE(474)] = 14996,
  [SMALL_STATE(475)] = 15004,
  [SMALL_STATE(476)] = 15012,
  [SMALL_STATE(477)] = 15020,
  [SMALL_STATE(478)] = 15028,
  [SMALL_STATE(479)] = 15036,
  [SMALL_STATE(480)] = 15044,
  [SMALL_STATE(481)] = 15052,
  [SMALL_STATE(482)] = 15060,
  [SMALL_STATE(483)] = 15068,
  [SMALL_STATE(484)] = 15078,
  [SMALL_STATE(485)] = 15088,
  [SMALL_STATE(486)] = 15098,
  [SMALL_STATE(487)] = 15108,
  [SMALL_STATE(488)] = 15116,
  [SMALL_STATE(489)] = 15126,
  [SMALL_STATE(490)] = 15136,
  [SMALL_STATE(491)] = 15144,
  [SMALL_STATE(492)] = 15152,
  [SMALL_STATE(493)] = 15162,
  [SMALL_STATE(494)] = 15172,
  [SMALL_STATE(495)] = 15182,
  [SMALL_STATE(496)] = 15190,
  [SMALL_STATE(497)] = 15198,
  [SMALL_STATE(498)] = 15206,
  [SMALL_STATE(499)] = 15214,
  [SMALL_STATE(500)] = 15222,
  [SMALL_STATE(501)] = 15230,
  [SMALL_STATE(502)] = 15238,
  [SMALL_STATE(503)] = 15246,
  [SMALL_STATE(504)] = 15254,
  [SMALL_STATE(505)] = 15264,
  [SMALL_STATE(506)] = 15274,
  [SMALL_STATE(507)] = 15284,
  [SMALL_STATE(508)] = 15294,
  [SMALL_STATE(509)] = 15302,
  [SMALL_STATE(510)] = 15310,
  [SMALL_STATE(511)] = 15318,
  [SMALL_STATE(512)] = 15326,
  [SMALL_STATE(513)] = 15334,
  [SMALL_STATE(514)] = 15342,
  [SMALL_STATE(515)] = 15350,
  [SMALL_STATE(516)] = 15358,
  [SMALL_STATE(517)] = 15366,
  [SMALL_STATE(518)] = 15374,
  [SMALL_STATE(519)] = 15382,
  [SMALL_STATE(520)] = 15390,
  [SMALL_STATE(521)] = 15398,
  [SMALL_STATE(522)] = 15406,
  [SMALL_STATE(523)] = 15414,
  [SMALL_STATE(524)] = 15422,
  [SMALL_STATE(525)] = 15432,
  [SMALL_STATE(526)] = 15440,
  [SMALL_STATE(527)] = 15448,
  [SMALL_STATE(528)] = 15456,
  [SMALL_STATE(529)] = 15464,
  [SMALL_STATE(530)] = 15474,
  [SMALL_STATE(531)] = 15484,
  [SMALL_STATE(532)] = 15492,
  [SMALL_STATE(533)] = 15500,
  [SMALL_STATE(534)] = 15508,
  [SMALL_STATE(535)] = 15518,
  [SMALL_STATE(536)] = 15528,
  [SMALL_STATE(537)] = 15538,
  [SMALL_STATE(538)] = 15548,
  [SMALL_STATE(539)] = 15556,
  [SMALL_STATE(540)] = 15564,
  [SMALL_STATE(541)] = 15572,
  [SMALL_STATE(542)] = 15582,
  [SMALL_STATE(543)] = 15592,
  [SMALL_STATE(544)] = 15600,
  [SMALL_STATE(545)] = 15608,
  [SMALL_STATE(546)] = 15616,
  [SMALL_STATE(547)] = 15624,
  [SMALL_STATE(548)] = 15632,
  [SMALL_STATE(549)] = 15642,
  [SMALL_STATE(550)] = 15650,
  [SMALL_STATE(551)] = 15658,
  [SMALL_STATE(552)] = 15666,
  [SMALL_STATE(553)] = 15676,
  [SMALL_STATE(554)] = 15686,
  [SMALL_STATE(555)] = 15696,
  [SMALL_STATE(556)] = 15704,
  [SMALL_STATE(557)] = 15714,
  [SMALL_STATE(558)] = 15724,
  [SMALL_STATE(559)] = 15734,
  [SMALL_STATE(560)] = 15744,
  [SMALL_STATE(561)] = 15752,
  [SMALL_STATE(562)] = 15760,
  [SMALL_STATE(563)] = 15768,
  [SMALL_STATE(564)] = 15776,
  [SMALL_STATE(565)] = 15784,
  [SMALL_STATE(566)] = 15792,
  [SMALL_STATE(567)] = 15800,
  [SMALL_STATE(568)] = 15808,
  [SMALL_STATE(569)] = 15816,
  [SMALL_STATE(570)] = 15824,
  [SMALL_STATE(571)] = 15834,
  [SMALL_STATE(572)] = 15842,
  [SMALL_STATE(573)] = 15850,
  [SMALL_STATE(574)] = 15858,
  [SMALL_STATE(575)] = 15868,
  [SMALL_STATE(576)] = 15878,
  [SMALL_STATE(577)] = 15888,
  [SMALL_STATE(578)] = 15896,
  [SMALL_STATE(579)] = 15906,
  [SMALL_STATE(580)] = 15916,
  [SMALL_STATE(581)] = 15926,
  [SMALL_STATE(582)] = 15936,
  [SMALL_STATE(583)] = 15944,
  [SMALL_STATE(584)] = 15952,
  [SMALL_STATE(585)] = 15960,
  [SMALL_STATE(586)] = 15968,
  [SMALL_STATE(587)] = 15978,
  [SMALL_STATE(588)] = 15986,
  [SMALL_STATE(589)] = 15994,
  [SMALL_STATE(590)] = 16004,
  [SMALL_STATE(591)] = 16014,
  [SMALL_STATE(592)] = 16024,
  [SMALL_STATE(593)] = 16032,
  [SMALL_STATE(594)] = 16040,
  [SMALL_STATE(595)] = 16048,
  [SMALL_STATE(596)] = 16056,
  [SMALL_STATE(597)] = 16064,
  [SMALL_STATE(598)] = 16072,
  [SMALL_STATE(599)] = 16080,
  [SMALL_STATE(600)] = 16088,
  [SMALL_STATE(601)] = 16098,
  [SMALL_STATE(602)] = 16108,
  [SMALL_STATE(603)] = 16116,
  [SMALL_STATE(604)] = 16126,
  [SMALL_STATE(605)] = 16134,
  [SMALL_STATE(606)] = 16144,
  [SMALL_STATE(607)] = 16154,
  [SMALL_STATE(608)] = 16164,
  [SMALL_STATE(609)] = 16172,
  [SMALL_STATE(610)] = 16180,
  [SMALL_STATE(611)] = 16190,
  [SMALL_STATE(612)] = 16198,
  [SMALL_STATE(613)] = 16206,
  [SMALL_STATE(614)] = 16214,
  [SMALL_STATE(615)] = 16222,
  [SMALL_STATE(616)] = 16230,
  [SMALL_STATE(617)] = 16240,
  [SMALL_STATE(618)] = 16248,
  [SMALL_STATE(619)] = 16256,
  [SMALL_STATE(620)] = 16264,
  [SMALL_STATE(621)] = 16274,
  [SMALL_STATE(622)] = 16284,
  [SMALL_STATE(623)] = 16294,
  [SMALL_STATE(624)] = 16302,
  [SMALL_STATE(625)] = 16310,
  [SMALL_STATE(626)] = 16318,
  [SMALL_STATE(627)] = 16326,
  [SMALL_STATE(628)] = 16334,
  [SMALL_STATE(629)] = 16342,
  [SMALL_STATE(630)] = 16350,
  [SMALL_STATE(631)] = 16360,
  [SMALL_STATE(632)] = 16370,
  [SMALL_STATE(633)] = 16378,
  [SMALL_STATE(634)] = 16388,
  [SMALL_STATE(635)] = 16396,
  [SMALL_STATE(636)] = 16406,
  [SMALL_STATE(637)] = 16414,
  [SMALL_STATE(638)] = 16424,
  [SMALL_STATE(639)] = 16434,
  [SMALL_STATE(640)] = 16442,
  [SMALL_STATE(641)] = 16452,
  [SMALL_STATE(642)] = 16460,
  [SMALL_STATE(643)] = 16468,
  [SMALL_STATE(644)] = 16476,
  [SMALL_STATE(645)] = 16486,
  [SMALL_STATE(646)] = 16496,
  [SMALL_STATE(647)] = 16506,
  [SMALL_STATE(648)] = 16514,
  [SMALL_STATE(649)] = 16522,
  [SMALL_STATE(650)] = 16530,
  [SMALL_STATE(651)] = 16540,
  [SMALL_STATE(652)] = 16548,
  [SMALL_STATE(653)] = 16558,
  [SMALL_STATE(654)] = 16566,
  [SMALL_STATE(655)] = 16574,
  [SMALL_STATE(656)] = 16582,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, .production_id = 15),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, .production_id = 15),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(582),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(403),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(402),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(105),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(401),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(400),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(281),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(340),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(342),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(343),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(359),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(619),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(620),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__subdocument, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(621),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(622),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(644),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(645),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(86),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(214),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(560),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(410),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(408),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(101),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(407),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(405),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(280),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(366),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(341),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(330),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(331),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(604),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(605),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(606),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(607),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(637),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(638),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(103),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(518),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(398),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(404),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(188),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(415),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(344),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(279),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(368),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(375),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(378),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(318),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(495),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(494),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(493),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(492),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(489),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(488),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(41),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(214),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(538),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(321),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(316),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(189),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(339),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(323),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(278),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(397),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(396),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(315),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(380),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(588),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(589),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(590),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(591),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(630),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(631),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(168),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(295),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(298),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(71),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(203),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(224),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(226),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(235),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(221),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(199),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(199),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(207),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 6),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 7),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 7),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 7),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 7),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 7),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 7),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 6),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 6),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 5),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 5),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 4),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 3),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 3),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__subdocument, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__subdocument, 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 1),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 7),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 7),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, .production_id = 2),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, .production_id = 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_tb, 1),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_tb, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actor_repeat1, 2),
  [784] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2), SHIFT_REPEAT(212),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actor, 1),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_actor, 1),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_bt, 1),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_bt, 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_rl, 1),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_rl, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 6),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, .production_id = 14),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, .production_id = 14),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_lr, 1),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_lr, 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(555),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(260),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2),
  [957] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2), SHIFT_REPEAT(261),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 10),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 12),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 11),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2), SHIFT_REPEAT(307),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 10),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2),
  [1093] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2), SHIFT_REPEAT(253),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2),
  [1098] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2), SHIFT_REPEAT(69),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 19),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 12),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 18),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 11),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 17),
  [1123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2), SHIFT_REPEAT(354),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 16),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2), SHIFT_REPEAT(45),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2), SHIFT_REPEAT(44),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 13),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, .production_id = 8),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_open_arrow, 1),
  [1176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_open_arrow, 1),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_type, 1),
  [1180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_type, 1),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2),
  [1184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2), SHIFT_REPEAT(236),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, .production_id = 9),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, .production_id = 9),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, .production_id = 8),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, .production_id = 8),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement, 1),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, .production_id = 8),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, .production_id = 8),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [1389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1395] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1),
  [1461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1),
  [1463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement, 1),
  [1487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [1497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_plus_sign, 1),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [1577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_minus_sign, 1),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [1645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [1659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [1673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mermaid(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
