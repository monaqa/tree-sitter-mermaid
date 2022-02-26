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
#define STATE_COUNT 699
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 202
#define ALIAS_COUNT 21
#define TOKEN_COUNT 101
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 28

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
  aux_sym_diagram_gantt_token1 = 47,
  aux_sym_gantt_stmt_dateformat_token1 = 48,
  aux_sym_gantt_stmt_inclusiveenddates_token1 = 49,
  aux_sym_gantt_stmt_topaxis_token1 = 50,
  aux_sym_gantt_stmt_axisformat_token1 = 51,
  aux_sym_gantt_stmt_includes_token1 = 52,
  aux_sym_gantt_stmt_excludes_token1 = 53,
  aux_sym_gantt_stmt_todaymarker_token1 = 54,
  aux_sym_gantt_stmt_section_token1 = 55,
  sym__whitespace = 56,
  sym__newline = 57,
  sym_comment = 58,
  sym_type_directive = 59,
  sym_arg_directive = 60,
  aux_sym_direction_tb_token1 = 61,
  aux_sym_direction_bt_token1 = 62,
  aux_sym_direction_rl_token1 = 63,
  aux_sym_direction_lr_token1 = 64,
  aux_sym__rest_text_token1 = 65,
  sym__actor_word = 66,
  sym_solid_arrow = 67,
  sym_dotted_arrow = 68,
  sym_solid_open_arrow = 69,
  anon_sym_DASH_DASH_GT = 70,
  sym_solid_cross = 71,
  sym_dotted_cross = 72,
  sym_solid_point = 73,
  sym_dotted_point = 74,
  aux_sym_note_placement_left_token1 = 75,
  aux_sym_note_placement_right_token1 = 76,
  sym__class_name = 77,
  sym__alpha_num_token = 78,
  sym__bquote_string = 79,
  sym__dquote_string = 80,
  sym_class_reltype_aggregation = 81,
  anon_sym_LT_PIPE = 82,
  anon_sym_PIPE_GT = 83,
  anon_sym_LT = 84,
  anon_sym_GT = 85,
  anon_sym_DASH_DASH = 86,
  sym_class_linetype_dotted = 87,
  aux_sym_class_label_token1 = 88,
  anon_sym_LBRACK_STAR_RBRACK = 89,
  aux_sym_state_name_token1 = 90,
  aux_sym_state_hide_empty_description_token1 = 91,
  sym_state_id = 92,
  aux_sym_state_annotation_fork_token1 = 93,
  aux_sym_state_annotation_fork_token2 = 94,
  aux_sym_state_annotation_join_token1 = 95,
  aux_sym_state_annotation_join_token2 = 96,
  aux_sym_state_annotation_choice_token1 = 97,
  aux_sym_state_annotation_choice_token2 = 98,
  aux_sym_gantt_task_text_token1 = 99,
  sym_gantt_task_data = 100,
  sym_source_file = 101,
  sym_directive = 102,
  sym__direction = 103,
  sym_diagram_sequence = 104,
  sym__sequence_stmt = 105,
  sym_sequence_stmt_participant = 106,
  sym_sequence_stmt_actor = 107,
  sym_actor = 108,
  sym_sequence_stmt_signal = 109,
  sym_signal_type = 110,
  sym_sequence_stmt_autonumber = 111,
  sym_sequence_stmt_activate = 112,
  sym_sequence_stmt_deactivate = 113,
  sym_sequence_stmt_note = 114,
  sym_sequence_stmt_links = 115,
  sym_sequence_stmt_link = 116,
  sym_sequence_stmt_properties = 117,
  sym_sequence_stmt_details = 118,
  sym_note_placement = 119,
  sym_sequence_stmt_title = 120,
  sym_sequence_stmt_loop = 121,
  sym_sequence_stmt_rect = 122,
  sym_sequence_stmt_opt = 123,
  aux_sym__subdocument = 124,
  sym_sequence_stmt_alt = 125,
  sym_sequence_stmt_par = 126,
  sym_diagram_class = 127,
  sym__class_stmt = 128,
  sym_class_stmt_relation = 129,
  sym_class_name = 130,
  sym_class_name_body = 131,
  sym_class_generics = 132,
  sym_class_relation = 133,
  sym__class_reltype = 134,
  sym__class_linetype = 135,
  sym_class_stmt_class = 136,
  sym_class_method_line = 137,
  sym_class_annotation_line = 138,
  sym_class_stmt_method = 139,
  sym_class_stmt_annotation = 140,
  sym_diagram_state = 141,
  sym__state_stmt = 142,
  sym_state_stmt_simple = 143,
  sym_state_stmt_arrow = 144,
  sym_state_stmt_composite = 145,
  sym_state_composite_body = 146,
  sym_state_stmt_annotation = 147,
  sym_state_alias = 148,
  sym_state_stmt_hide_empty_description = 149,
  sym__state_annotation = 150,
  sym_state_note = 151,
  sym_diagram_gantt = 152,
  sym__gantt_stmt = 153,
  sym_gantt_stmt_dateformat = 154,
  sym_gantt_stmt_inclusiveenddates = 155,
  sym_gantt_stmt_topaxis = 156,
  sym_gantt_stmt_axisformat = 157,
  sym_gantt_stmt_includes = 158,
  sym_gantt_stmt_excludes = 159,
  sym_gantt_stmt_todaymarker = 160,
  sym_gantt_stmt_title = 161,
  sym_gantt_stmt_section = 162,
  sym_gantt_stmt_task = 163,
  sym_direction_tb = 164,
  sym_direction_bt = 165,
  sym_direction_rl = 166,
  sym_direction_lr = 167,
  sym__rest_text = 168,
  sym_dotted_open_arrow = 169,
  sym_signal_plus_sign = 170,
  sym_signal_minus_sign = 171,
  sym_note_placement_left = 172,
  sym_note_placement_right = 173,
  sym_class_reltype_extension = 174,
  sym_class_reltype_composition = 175,
  sym_class_reltype_dependency = 176,
  sym_class_linetype_solid = 177,
  sym_class_label = 178,
  sym_state_name = 179,
  sym_state_arrow = 180,
  sym_state_description = 181,
  sym_state_hide_empty_description = 182,
  sym_state_division = 183,
  sym_state_annotation_fork = 184,
  sym_state_annotation_join = 185,
  sym_state_annotation_choice = 186,
  sym_gantt_meta_format = 187,
  sym_gantt_task_text = 188,
  aux_sym_diagram_sequence_repeat1 = 189,
  aux_sym_diagram_sequence_repeat2 = 190,
  aux_sym_actor_repeat1 = 191,
  aux_sym_sequence_stmt_alt_repeat1 = 192,
  aux_sym_sequence_stmt_par_repeat1 = 193,
  aux_sym_diagram_class_repeat1 = 194,
  aux_sym_class_name_body_repeat1 = 195,
  aux_sym_class_stmt_class_repeat1 = 196,
  aux_sym_class_method_line_repeat1 = 197,
  aux_sym_diagram_state_repeat1 = 198,
  aux_sym_state_composite_body_repeat1 = 199,
  aux_sym_diagram_gantt_repeat1 = 200,
  aux_sym_gantt_task_text_repeat1 = 201,
  alias_sym_alias = 202,
  alias_sym_annotation = 203,
  alias_sym_class_classifier_abstract = 204,
  alias_sym_class_style_name = 205,
  alias_sym_class_visibility_internal = 206,
  alias_sym_class_visibility_private = 207,
  alias_sym_class_visibility_public = 208,
  alias_sym_gantt_axis_format = 209,
  alias_sym_gantt_end_dates = 210,
  alias_sym_gantt_excludes = 211,
  alias_sym_gantt_includes = 212,
  alias_sym_gantt_section = 213,
  alias_sym_gantt_title = 214,
  alias_sym_gantt_today_marker = 215,
  alias_sym_gantt_top_axis = 216,
  alias_sym_note_content = 217,
  alias_sym_sequence_stmt_alt_branch = 218,
  alias_sym_sequence_stmt_loop_inner = 219,
  alias_sym_sequence_stmt_opt_inner = 220,
  alias_sym_sequence_stmt_rect_inner = 221,
  alias_sym_title = 222,
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
  [aux_sym_diagram_gantt_token1] = "gantt",
  [aux_sym_gantt_stmt_dateformat_token1] = "dateformat",
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = "inclusiveenddates",
  [aux_sym_gantt_stmt_topaxis_token1] = "topaxis",
  [aux_sym_gantt_stmt_axisformat_token1] = "axisformat",
  [aux_sym_gantt_stmt_includes_token1] = "includes",
  [aux_sym_gantt_stmt_excludes_token1] = "excludes",
  [aux_sym_gantt_stmt_todaymarker_token1] = "todaymarker",
  [aux_sym_gantt_stmt_section_token1] = "section",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [sym_type_directive] = "type_directive",
  [sym_arg_directive] = "arg_directive",
  [aux_sym_direction_tb_token1] = "direction tb",
  [aux_sym_direction_bt_token1] = "direction bt",
  [aux_sym_direction_rl_token1] = "direction rl",
  [aux_sym_direction_lr_token1] = "direction lr",
  [aux_sym__rest_text_token1] = "_rest_text_token1",
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
  [aux_sym_gantt_task_text_token1] = "gantt_task_text_token1",
  [sym_gantt_task_data] = "gantt_task_data",
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
  [sym_diagram_gantt] = "diagram_gantt",
  [sym__gantt_stmt] = "_gantt_stmt",
  [sym_gantt_stmt_dateformat] = "gantt_stmt_dateformat",
  [sym_gantt_stmt_inclusiveenddates] = "gantt_stmt_inclusiveenddates",
  [sym_gantt_stmt_topaxis] = "gantt_stmt_topaxis",
  [sym_gantt_stmt_axisformat] = "gantt_stmt_axisformat",
  [sym_gantt_stmt_includes] = "gantt_stmt_includes",
  [sym_gantt_stmt_excludes] = "gantt_stmt_excludes",
  [sym_gantt_stmt_todaymarker] = "gantt_stmt_todaymarker",
  [sym_gantt_stmt_title] = "gantt_stmt_title",
  [sym_gantt_stmt_section] = "gantt_stmt_section",
  [sym_gantt_stmt_task] = "gantt_stmt_task",
  [sym_direction_tb] = "direction_tb",
  [sym_direction_bt] = "direction_bt",
  [sym_direction_rl] = "direction_rl",
  [sym_direction_lr] = "direction_lr",
  [sym__rest_text] = "text",
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
  [sym_gantt_meta_format] = "gantt_date_format",
  [sym_gantt_task_text] = "gantt_task_text",
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
  [aux_sym_diagram_gantt_repeat1] = "diagram_gantt_repeat1",
  [aux_sym_gantt_task_text_repeat1] = "gantt_task_text_repeat1",
  [alias_sym_alias] = "alias",
  [alias_sym_annotation] = "annotation",
  [alias_sym_class_classifier_abstract] = "class_classifier_abstract",
  [alias_sym_class_style_name] = "class_style_name",
  [alias_sym_class_visibility_internal] = "class_visibility_internal",
  [alias_sym_class_visibility_private] = "class_visibility_private",
  [alias_sym_class_visibility_public] = "class_visibility_public",
  [alias_sym_gantt_axis_format] = "gantt_axis_format",
  [alias_sym_gantt_end_dates] = "gantt_end_dates",
  [alias_sym_gantt_excludes] = "gantt_excludes",
  [alias_sym_gantt_includes] = "gantt_includes",
  [alias_sym_gantt_section] = "gantt_section",
  [alias_sym_gantt_title] = "gantt_title",
  [alias_sym_gantt_today_marker] = "gantt_today_marker",
  [alias_sym_gantt_top_axis] = "gantt_top_axis",
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
  [aux_sym_diagram_gantt_token1] = aux_sym_diagram_gantt_token1,
  [aux_sym_gantt_stmt_dateformat_token1] = aux_sym_gantt_stmt_dateformat_token1,
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = aux_sym_gantt_stmt_inclusiveenddates_token1,
  [aux_sym_gantt_stmt_topaxis_token1] = aux_sym_gantt_stmt_topaxis_token1,
  [aux_sym_gantt_stmt_axisformat_token1] = aux_sym_gantt_stmt_axisformat_token1,
  [aux_sym_gantt_stmt_includes_token1] = aux_sym_gantt_stmt_includes_token1,
  [aux_sym_gantt_stmt_excludes_token1] = aux_sym_gantt_stmt_excludes_token1,
  [aux_sym_gantt_stmt_todaymarker_token1] = aux_sym_gantt_stmt_todaymarker_token1,
  [aux_sym_gantt_stmt_section_token1] = aux_sym_gantt_stmt_section_token1,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [sym_type_directive] = sym_type_directive,
  [sym_arg_directive] = sym_arg_directive,
  [aux_sym_direction_tb_token1] = aux_sym_direction_tb_token1,
  [aux_sym_direction_bt_token1] = aux_sym_direction_bt_token1,
  [aux_sym_direction_rl_token1] = aux_sym_direction_rl_token1,
  [aux_sym_direction_lr_token1] = aux_sym_direction_lr_token1,
  [aux_sym__rest_text_token1] = aux_sym__rest_text_token1,
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
  [aux_sym_gantt_task_text_token1] = aux_sym_gantt_task_text_token1,
  [sym_gantt_task_data] = sym_gantt_task_data,
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
  [sym_diagram_gantt] = sym_diagram_gantt,
  [sym__gantt_stmt] = sym__gantt_stmt,
  [sym_gantt_stmt_dateformat] = sym_gantt_stmt_dateformat,
  [sym_gantt_stmt_inclusiveenddates] = sym_gantt_stmt_inclusiveenddates,
  [sym_gantt_stmt_topaxis] = sym_gantt_stmt_topaxis,
  [sym_gantt_stmt_axisformat] = sym_gantt_stmt_axisformat,
  [sym_gantt_stmt_includes] = sym_gantt_stmt_includes,
  [sym_gantt_stmt_excludes] = sym_gantt_stmt_excludes,
  [sym_gantt_stmt_todaymarker] = sym_gantt_stmt_todaymarker,
  [sym_gantt_stmt_title] = sym_gantt_stmt_title,
  [sym_gantt_stmt_section] = sym_gantt_stmt_section,
  [sym_gantt_stmt_task] = sym_gantt_stmt_task,
  [sym_direction_tb] = sym_direction_tb,
  [sym_direction_bt] = sym_direction_bt,
  [sym_direction_rl] = sym_direction_rl,
  [sym_direction_lr] = sym_direction_lr,
  [sym__rest_text] = sym__rest_text,
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
  [sym_gantt_meta_format] = sym_gantt_meta_format,
  [sym_gantt_task_text] = sym_gantt_task_text,
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
  [aux_sym_diagram_gantt_repeat1] = aux_sym_diagram_gantt_repeat1,
  [aux_sym_gantt_task_text_repeat1] = aux_sym_gantt_task_text_repeat1,
  [alias_sym_alias] = alias_sym_alias,
  [alias_sym_annotation] = alias_sym_annotation,
  [alias_sym_class_classifier_abstract] = alias_sym_class_classifier_abstract,
  [alias_sym_class_style_name] = alias_sym_class_style_name,
  [alias_sym_class_visibility_internal] = alias_sym_class_visibility_internal,
  [alias_sym_class_visibility_private] = alias_sym_class_visibility_private,
  [alias_sym_class_visibility_public] = alias_sym_class_visibility_public,
  [alias_sym_gantt_axis_format] = alias_sym_gantt_axis_format,
  [alias_sym_gantt_end_dates] = alias_sym_gantt_end_dates,
  [alias_sym_gantt_excludes] = alias_sym_gantt_excludes,
  [alias_sym_gantt_includes] = alias_sym_gantt_includes,
  [alias_sym_gantt_section] = alias_sym_gantt_section,
  [alias_sym_gantt_title] = alias_sym_gantt_title,
  [alias_sym_gantt_today_marker] = alias_sym_gantt_today_marker,
  [alias_sym_gantt_top_axis] = alias_sym_gantt_top_axis,
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
  [aux_sym_diagram_gantt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_dateformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_topaxis_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_axisformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_includes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_excludes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_todaymarker_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_section_token1] = {
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
  [aux_sym__rest_text_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_gantt_task_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_gantt_task_data] = {
    .visible = true,
    .named = true,
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
  [sym_diagram_gantt] = {
    .visible = true,
    .named = true,
  },
  [sym__gantt_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_gantt_stmt_dateformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_inclusiveenddates] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_topaxis] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_axisformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_includes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_excludes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_todaymarker] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_section] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_task] = {
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
  [sym__rest_text] = {
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
  [sym_gantt_meta_format] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_task_text] = {
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
  [aux_sym_diagram_gantt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_repeat1] = {
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
  [alias_sym_gantt_axis_format] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_end_dates] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_excludes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_includes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_section] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_title] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_today_marker] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_top_axis] = {
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
    [1] = alias_sym_gantt_title,
  },
  [2] = {
    [1] = alias_sym_gantt_end_dates,
  },
  [3] = {
    [1] = alias_sym_gantt_top_axis,
  },
  [4] = {
    [1] = alias_sym_gantt_axis_format,
  },
  [5] = {
    [1] = alias_sym_gantt_includes,
  },
  [6] = {
    [1] = alias_sym_gantt_excludes,
  },
  [7] = {
    [1] = alias_sym_gantt_today_marker,
  },
  [8] = {
    [1] = alias_sym_gantt_section,
  },
  [9] = {
    [2] = alias_sym_title,
  },
  [10] = {
    [0] = sym_state_description,
  },
  [11] = {
    [3] = alias_sym_alias,
  },
  [12] = {
    [3] = alias_sym_sequence_stmt_loop_inner,
  },
  [13] = {
    [3] = alias_sym_sequence_stmt_rect_inner,
  },
  [14] = {
    [3] = alias_sym_sequence_stmt_opt_inner,
  },
  [15] = {
    [3] = alias_sym_sequence_stmt_alt_branch,
  },
  [16] = {
    [3] = alias_sym_class_style_name,
  },
  [17] = {
    [1] = alias_sym_annotation,
  },
  [18] = {
    [0] = alias_sym_class_visibility_internal,
  },
  [19] = {
    [0] = alias_sym_class_visibility_public,
  },
  [20] = {
    [0] = alias_sym_class_visibility_private,
  },
  [21] = {
    [1] = alias_sym_class_classifier_abstract,
  },
  [22] = {
    [4] = alias_sym_note_content,
  },
  [23] = {
    [1] = alias_sym_sequence_stmt_alt_branch,
  },
  [24] = {
    [0] = alias_sym_class_visibility_internal,
    [2] = alias_sym_class_classifier_abstract,
  },
  [25] = {
    [0] = alias_sym_class_visibility_public,
    [2] = alias_sym_class_classifier_abstract,
  },
  [26] = {
    [0] = alias_sym_class_visibility_private,
    [2] = alias_sym_class_classifier_abstract,
  },
  [27] = {
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
  sym__rest_text, 3,
    sym__rest_text,
    alias_sym_alias,
    alias_sym_title,
  sym_state_description, 2,
    sym_state_description,
    alias_sym_note_content,
  sym_gantt_meta_format, 9,
    sym_gantt_meta_format,
    alias_sym_gantt_axis_format,
    alias_sym_gantt_end_dates,
    alias_sym_gantt_excludes,
    alias_sym_gantt_includes,
    alias_sym_gantt_section,
    alias_sym_gantt_title,
    alias_sym_gantt_today_marker,
    alias_sym_gantt_top_axis,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 3,
  [7] = 3,
  [8] = 2,
  [9] = 2,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 15,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 19,
  [26] = 15,
  [27] = 21,
  [28] = 21,
  [29] = 23,
  [30] = 24,
  [31] = 22,
  [32] = 19,
  [33] = 11,
  [34] = 22,
  [35] = 35,
  [36] = 22,
  [37] = 23,
  [38] = 24,
  [39] = 19,
  [40] = 15,
  [41] = 21,
  [42] = 23,
  [43] = 24,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 45,
  [48] = 48,
  [49] = 49,
  [50] = 44,
  [51] = 44,
  [52] = 45,
  [53] = 44,
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
  [94] = 89,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 80,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 111,
  [113] = 90,
  [114] = 83,
  [115] = 84,
  [116] = 81,
  [117] = 85,
  [118] = 86,
  [119] = 87,
  [120] = 82,
  [121] = 88,
  [122] = 91,
  [123] = 92,
  [124] = 93,
  [125] = 95,
  [126] = 96,
  [127] = 110,
  [128] = 109,
  [129] = 108,
  [130] = 107,
  [131] = 97,
  [132] = 98,
  [133] = 99,
  [134] = 100,
  [135] = 102,
  [136] = 79,
  [137] = 103,
  [138] = 104,
  [139] = 105,
  [140] = 106,
  [141] = 91,
  [142] = 79,
  [143] = 82,
  [144] = 100,
  [145] = 102,
  [146] = 103,
  [147] = 104,
  [148] = 105,
  [149] = 106,
  [150] = 79,
  [151] = 89,
  [152] = 107,
  [153] = 108,
  [154] = 109,
  [155] = 110,
  [156] = 111,
  [157] = 90,
  [158] = 97,
  [159] = 98,
  [160] = 81,
  [161] = 82,
  [162] = 83,
  [163] = 98,
  [164] = 97,
  [165] = 96,
  [166] = 84,
  [167] = 95,
  [168] = 93,
  [169] = 92,
  [170] = 85,
  [171] = 81,
  [172] = 86,
  [173] = 91,
  [174] = 87,
  [175] = 89,
  [176] = 88,
  [177] = 88,
  [178] = 87,
  [179] = 86,
  [180] = 85,
  [181] = 96,
  [182] = 99,
  [183] = 84,
  [184] = 83,
  [185] = 107,
  [186] = 108,
  [187] = 109,
  [188] = 110,
  [189] = 90,
  [190] = 95,
  [191] = 93,
  [192] = 92,
  [193] = 99,
  [194] = 106,
  [195] = 105,
  [196] = 104,
  [197] = 103,
  [198] = 102,
  [199] = 80,
  [200] = 111,
  [201] = 100,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 207,
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
  [230] = 90,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
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
  [253] = 89,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
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
  [270] = 270,
  [271] = 271,
  [272] = 207,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 277,
  [279] = 277,
  [280] = 280,
  [281] = 277,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 90,
  [292] = 89,
  [293] = 293,
  [294] = 293,
  [295] = 257,
  [296] = 221,
  [297] = 293,
  [298] = 293,
  [299] = 299,
  [300] = 299,
  [301] = 301,
  [302] = 208,
  [303] = 299,
  [304] = 304,
  [305] = 299,
  [306] = 221,
  [307] = 257,
  [308] = 212,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 205,
  [314] = 310,
  [315] = 315,
  [316] = 316,
  [317] = 256,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 262,
  [323] = 229,
  [324] = 324,
  [325] = 255,
  [326] = 326,
  [327] = 327,
  [328] = 271,
  [329] = 329,
  [330] = 210,
  [331] = 331,
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
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 342,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 342,
  [352] = 343,
  [353] = 348,
  [354] = 350,
  [355] = 342,
  [356] = 356,
  [357] = 343,
  [358] = 348,
  [359] = 359,
  [360] = 350,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 362,
  [369] = 364,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 365,
  [382] = 367,
  [383] = 343,
  [384] = 362,
  [385] = 364,
  [386] = 386,
  [387] = 365,
  [388] = 367,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 389,
  [394] = 390,
  [395] = 391,
  [396] = 392,
  [397] = 397,
  [398] = 398,
  [399] = 389,
  [400] = 400,
  [401] = 401,
  [402] = 390,
  [403] = 391,
  [404] = 404,
  [405] = 392,
  [406] = 406,
  [407] = 337,
  [408] = 392,
  [409] = 391,
  [410] = 390,
  [411] = 389,
  [412] = 412,
  [413] = 367,
  [414] = 359,
  [415] = 365,
  [416] = 364,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 397,
  [422] = 420,
  [423] = 406,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 337,
  [428] = 362,
  [429] = 429,
  [430] = 420,
  [431] = 431,
  [432] = 432,
  [433] = 406,
  [434] = 337,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 420,
  [440] = 348,
  [441] = 406,
  [442] = 442,
  [443] = 350,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 445,
  [464] = 464,
  [465] = 455,
  [466] = 454,
  [467] = 457,
  [468] = 459,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 457,
  [478] = 478,
  [479] = 459,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 480,
  [489] = 481,
  [490] = 483,
  [491] = 484,
  [492] = 492,
  [493] = 493,
  [494] = 445,
  [495] = 455,
  [496] = 454,
  [497] = 480,
  [498] = 481,
  [499] = 483,
  [500] = 484,
  [501] = 471,
  [502] = 472,
  [503] = 473,
  [504] = 474,
  [505] = 474,
  [506] = 506,
  [507] = 457,
  [508] = 459,
  [509] = 458,
  [510] = 462,
  [511] = 481,
  [512] = 483,
  [513] = 484,
  [514] = 449,
  [515] = 515,
  [516] = 469,
  [517] = 517,
  [518] = 476,
  [519] = 473,
  [520] = 472,
  [521] = 471,
  [522] = 445,
  [523] = 455,
  [524] = 454,
  [525] = 506,
  [526] = 458,
  [527] = 527,
  [528] = 462,
  [529] = 471,
  [530] = 472,
  [531] = 473,
  [532] = 474,
  [533] = 449,
  [534] = 515,
  [535] = 535,
  [536] = 536,
  [537] = 469,
  [538] = 476,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 480,
  [545] = 545,
  [546] = 546,
  [547] = 515,
  [548] = 548,
  [549] = 506,
  [550] = 445,
  [551] = 458,
  [552] = 445,
  [553] = 462,
  [554] = 449,
  [555] = 555,
  [556] = 556,
  [557] = 506,
  [558] = 515,
  [559] = 469,
  [560] = 476,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 563,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 568,
  [576] = 568,
  [577] = 577,
  [578] = 574,
  [579] = 579,
  [580] = 579,
  [581] = 581,
  [582] = 582,
  [583] = 569,
  [584] = 564,
  [585] = 570,
  [586] = 586,
  [587] = 563,
  [588] = 588,
  [589] = 565,
  [590] = 566,
  [591] = 567,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 568,
  [598] = 598,
  [599] = 599,
  [600] = 574,
  [601] = 601,
  [602] = 577,
  [603] = 579,
  [604] = 581,
  [605] = 569,
  [606] = 564,
  [607] = 570,
  [608] = 586,
  [609] = 563,
  [610] = 610,
  [611] = 565,
  [612] = 566,
  [613] = 567,
  [614] = 582,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 592,
  [619] = 588,
  [620] = 562,
  [621] = 574,
  [622] = 574,
  [623] = 569,
  [624] = 574,
  [625] = 569,
  [626] = 596,
  [627] = 596,
  [628] = 628,
  [629] = 629,
  [630] = 586,
  [631] = 569,
  [632] = 632,
  [633] = 598,
  [634] = 634,
  [635] = 635,
  [636] = 632,
  [637] = 599,
  [638] = 601,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 639,
  [643] = 577,
  [644] = 644,
  [645] = 579,
  [646] = 592,
  [647] = 581,
  [648] = 635,
  [649] = 567,
  [650] = 635,
  [651] = 632,
  [652] = 582,
  [653] = 601,
  [654] = 639,
  [655] = 640,
  [656] = 641,
  [657] = 573,
  [658] = 658,
  [659] = 577,
  [660] = 566,
  [661] = 592,
  [662] = 565,
  [663] = 658,
  [664] = 588,
  [665] = 635,
  [666] = 632,
  [667] = 562,
  [668] = 601,
  [669] = 639,
  [670] = 640,
  [671] = 641,
  [672] = 672,
  [673] = 111,
  [674] = 674,
  [675] = 672,
  [676] = 640,
  [677] = 596,
  [678] = 568,
  [679] = 598,
  [680] = 599,
  [681] = 582,
  [682] = 682,
  [683] = 641,
  [684] = 581,
  [685] = 685,
  [686] = 686,
  [687] = 568,
  [688] = 599,
  [689] = 689,
  [690] = 598,
  [691] = 453,
  [692] = 460,
  [693] = 461,
  [694] = 588,
  [695] = 562,
  [696] = 564,
  [697] = 570,
  [698] = 586,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(233);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '+') ADVANCE(226);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == '<') ADVANCE(530);
      if (lookahead == '>') ADVANCE(533);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '`') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(372);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(395);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(467);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(375);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(410);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '%') ADVANCE(283);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(303);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(309);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(285);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '%') ADVANCE(283);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(303);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(309);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(285);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '%') ADVANCE(283);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(303);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(309);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(285);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '%') ADVANCE(284);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '%') ADVANCE(284);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '%') ADVANCE(284);
      if (lookahead == '+') ADVANCE(226);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == '+') ADVANCE(226);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '~') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '%') ADVANCE(546);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == '[') ADVANCE(547);
      if (lookahead == '}') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(563);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(564);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(574);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '{') ADVANCE(183);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == '<') ADVANCE(531);
      if (lookahead == '>') ADVANCE(532);
      if (lookahead == '`') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(525);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(187);
      END_STATE();
    case 20:
      if (lookahead == '%') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == '%') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 22:
      if (lookahead == '%') ADVANCE(702);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(703);
      END_STATE();
    case 23:
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(220);
      END_STATE();
    case 24:
      if (lookahead == '%') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(266);
      END_STATE();
    case 25:
      if (lookahead == '%') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(621);
      END_STATE();
    case 26:
      if (lookahead == '%') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == '%') ADVANCE(632);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(366);
      if (lookahead == '>') ADVANCE(362);
      if (lookahead == 'x') ADVANCE(364);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(365);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '>') ADVANCE(360);
      if (lookahead == 'x') ADVANCE(363);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '[') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(534);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(536);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(538);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(212);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(238);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(222);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '<') ADVANCE(234);
      END_STATE();
    case 41:
      if (lookahead == '<') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(235);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(529);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(361);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(622);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(624);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(626);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(111);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(113);
      END_STATE();
    case 54:
      if (lookahead == '[') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(591);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(623);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(625);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(627);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == ']') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == '`') ADVANCE(524);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(271);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(157);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(129);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(130);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(135);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(136);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 94:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(367);
      END_STATE();
    case 95:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(368);
      END_STATE();
    case 96:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 97:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 99:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 100:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 101:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 102:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 103:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 114:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 115:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(48);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 119:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 120:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 121:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 122:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 126:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 138:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 139:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 140:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(162);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 153:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 161:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 162:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 163:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 164:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 165:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 166:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 167:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(270);
      if (lookahead == '%') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 168:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(17);
      END_STATE();
    case 169:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(62);
      END_STATE();
    case 170:
      if (eof) ADVANCE(182);
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '%') ADVANCE(283);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(303);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(309);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(285);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 171:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == '<') ADVANCE(531);
      if (lookahead == '>') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(64);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 172:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '`') ADVANCE(169);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 173:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '$') ADVANCE(233);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(523);
      END_STATE();
    case 174:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '%') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(695);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(633);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(673);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(649);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 175:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '%') ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 176:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(604);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(605);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(609);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 177:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(611);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(604);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(605);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(609);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 178:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(604);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(605);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(609);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 179:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 180:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == '`') ADVANCE(169);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 181:
      if (eof) ADVANCE(182);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '`') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RBRACE_PERCENT_PERCENT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_diagram_sequence_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token2);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_actor_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_autonumber_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_activate_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_deactivate_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_links_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_link_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_properties_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_details_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_title_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token2);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_rect_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_opt_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token2);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(437);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_diagram_class_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_diagram_class_token2);
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(523);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(220);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == '>') ADVANCE(360);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_diagram_state_token2);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_state_stmt_simple_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_diagram_gantt_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_dateformat_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_inclusiveenddates_token1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_topaxis_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_axisformat_token1);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_includes_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_excludes_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_todaymarker_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_section_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(249);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(703);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(266);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(262);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(270);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(262);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(270);
      if (lookahead == '%') ADVANCE(267);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_direction_tb_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_direction_bt_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_direction_rl_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_direction_lr_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '{') ADVANCE(278);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '{') ADVANCE(357);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(11);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(11);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(11);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == ' ') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '%') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '%') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(297);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_solid_arrow);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_dotted_arrow);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_solid_open_arrow);
      if (lookahead == '>') ADVANCE(358);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(359);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_solid_cross);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_dotted_cross);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_solid_point);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_dotted_point);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_note_placement_left_token1);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_note_placement_right_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'l') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(477);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(504);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(502);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(505);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(376);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(420);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(460);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(503);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(494);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__bquote_string);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__dquote_string);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(234);
      if (lookahead == '|') ADVANCE(528);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '|') ADVANCE(528);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(235);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == ')') ADVANCE(366);
      if (lookahead == '>') ADVANCE(361);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(361);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_class_linetype_dotted);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '{') ADVANCE(590);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '%') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '*') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '-') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ']') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(581);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(590);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_state_hide_empty_description_token1);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(619);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '{') ADVANCE(11);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(621);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token2);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token2);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token1);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token2);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '{') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(634);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(653);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(690);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(699);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '{') ADVANCE(703);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(701);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(701);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '%') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(703);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 171},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 170},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 170},
  [17] = {.lex_state = 170},
  [18] = {.lex_state = 170},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 170},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 170},
  [45] = {.lex_state = 170},
  [46] = {.lex_state = 170},
  [47] = {.lex_state = 170},
  [48] = {.lex_state = 170},
  [49] = {.lex_state = 170},
  [50] = {.lex_state = 170},
  [51] = {.lex_state = 170},
  [52] = {.lex_state = 170},
  [53] = {.lex_state = 170},
  [54] = {.lex_state = 174},
  [55] = {.lex_state = 174},
  [56] = {.lex_state = 174},
  [57] = {.lex_state = 174},
  [58] = {.lex_state = 174},
  [59] = {.lex_state = 176},
  [60] = {.lex_state = 176},
  [61] = {.lex_state = 176},
  [62] = {.lex_state = 176},
  [63] = {.lex_state = 176},
  [64] = {.lex_state = 176},
  [65] = {.lex_state = 176},
  [66] = {.lex_state = 176},
  [67] = {.lex_state = 176},
  [68] = {.lex_state = 176},
  [69] = {.lex_state = 176},
  [70] = {.lex_state = 176},
  [71] = {.lex_state = 176},
  [72] = {.lex_state = 176},
  [73] = {.lex_state = 176},
  [74] = {.lex_state = 176},
  [75] = {.lex_state = 176},
  [76] = {.lex_state = 176},
  [77] = {.lex_state = 176},
  [78] = {.lex_state = 176},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 170},
  [142] = {.lex_state = 170},
  [143] = {.lex_state = 170},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 170},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 170},
  [157] = {.lex_state = 170},
  [158] = {.lex_state = 170},
  [159] = {.lex_state = 170},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 170},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 170},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 170},
  [171] = {.lex_state = 170},
  [172] = {.lex_state = 170},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 170},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 170},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 170},
  [182] = {.lex_state = 170},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 170},
  [186] = {.lex_state = 170},
  [187] = {.lex_state = 170},
  [188] = {.lex_state = 170},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 170},
  [191] = {.lex_state = 170},
  [192] = {.lex_state = 170},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 170},
  [195] = {.lex_state = 170},
  [196] = {.lex_state = 170},
  [197] = {.lex_state = 170},
  [198] = {.lex_state = 170},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 170},
  [202] = {.lex_state = 171},
  [203] = {.lex_state = 177},
  [204] = {.lex_state = 177},
  [205] = {.lex_state = 178},
  [206] = {.lex_state = 171},
  [207] = {.lex_state = 178},
  [208] = {.lex_state = 171},
  [209] = {.lex_state = 176},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 176},
  [212] = {.lex_state = 171},
  [213] = {.lex_state = 176},
  [214] = {.lex_state = 174},
  [215] = {.lex_state = 176},
  [216] = {.lex_state = 176},
  [217] = {.lex_state = 176},
  [218] = {.lex_state = 176},
  [219] = {.lex_state = 176},
  [220] = {.lex_state = 176},
  [221] = {.lex_state = 15},
  [222] = {.lex_state = 176},
  [223] = {.lex_state = 176},
  [224] = {.lex_state = 176},
  [225] = {.lex_state = 15},
  [226] = {.lex_state = 181},
  [227] = {.lex_state = 174},
  [228] = {.lex_state = 181},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 174},
  [231] = {.lex_state = 174},
  [232] = {.lex_state = 174},
  [233] = {.lex_state = 174},
  [234] = {.lex_state = 174},
  [235] = {.lex_state = 174},
  [236] = {.lex_state = 174},
  [237] = {.lex_state = 181},
  [238] = {.lex_state = 176},
  [239] = {.lex_state = 15},
  [240] = {.lex_state = 174},
  [241] = {.lex_state = 176},
  [242] = {.lex_state = 174},
  [243] = {.lex_state = 176},
  [244] = {.lex_state = 176},
  [245] = {.lex_state = 174},
  [246] = {.lex_state = 176},
  [247] = {.lex_state = 176},
  [248] = {.lex_state = 176},
  [249] = {.lex_state = 176},
  [250] = {.lex_state = 176},
  [251] = {.lex_state = 176},
  [252] = {.lex_state = 176},
  [253] = {.lex_state = 174},
  [254] = {.lex_state = 177},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 171},
  [257] = {.lex_state = 15},
  [258] = {.lex_state = 7},
  [259] = {.lex_state = 181},
  [260] = {.lex_state = 7},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 171},
  [263] = {.lex_state = 176},
  [264] = {.lex_state = 181},
  [265] = {.lex_state = 7},
  [266] = {.lex_state = 181},
  [267] = {.lex_state = 7},
  [268] = {.lex_state = 7},
  [269] = {.lex_state = 7},
  [270] = {.lex_state = 7},
  [271] = {.lex_state = 171},
  [272] = {.lex_state = 179},
  [273] = {.lex_state = 7},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 171},
  [277] = {.lex_state = 181},
  [278] = {.lex_state = 181},
  [279] = {.lex_state = 181},
  [280] = {.lex_state = 171},
  [281] = {.lex_state = 181},
  [282] = {.lex_state = 173},
  [283] = {.lex_state = 173},
  [284] = {.lex_state = 173},
  [285] = {.lex_state = 173},
  [286] = {.lex_state = 173},
  [287] = {.lex_state = 15},
  [288] = {.lex_state = 15},
  [289] = {.lex_state = 173},
  [290] = {.lex_state = 7},
  [291] = {.lex_state = 171},
  [292] = {.lex_state = 171},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 6},
  [295] = {.lex_state = 172},
  [296] = {.lex_state = 172},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 179},
  [300] = {.lex_state = 179},
  [301] = {.lex_state = 172},
  [302] = {.lex_state = 177},
  [303] = {.lex_state = 179},
  [304] = {.lex_state = 172},
  [305] = {.lex_state = 179},
  [306] = {.lex_state = 180},
  [307] = {.lex_state = 180},
  [308] = {.lex_state = 177},
  [309] = {.lex_state = 172},
  [310] = {.lex_state = 171},
  [311] = {.lex_state = 172},
  [312] = {.lex_state = 16},
  [313] = {.lex_state = 178},
  [314] = {.lex_state = 171},
  [315] = {.lex_state = 172},
  [316] = {.lex_state = 172},
  [317] = {.lex_state = 177},
  [318] = {.lex_state = 172},
  [319] = {.lex_state = 172},
  [320] = {.lex_state = 172},
  [321] = {.lex_state = 172},
  [322] = {.lex_state = 177},
  [323] = {.lex_state = 5},
  [324] = {.lex_state = 175},
  [325] = {.lex_state = 5},
  [326] = {.lex_state = 173},
  [327] = {.lex_state = 177},
  [328] = {.lex_state = 177},
  [329] = {.lex_state = 173},
  [330] = {.lex_state = 175},
  [331] = {.lex_state = 173},
  [332] = {.lex_state = 175},
  [333] = {.lex_state = 173},
  [334] = {.lex_state = 175},
  [335] = {.lex_state = 171},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 171},
  [338] = {.lex_state = 27},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 4},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 4},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 4},
  [351] = {.lex_state = 4},
  [352] = {.lex_state = 4},
  [353] = {.lex_state = 4},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 4},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 4},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 16},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 172},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 4},
  [365] = {.lex_state = 4},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 4},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 4},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 4},
  [382] = {.lex_state = 4},
  [383] = {.lex_state = 4},
  [384] = {.lex_state = 4},
  [385] = {.lex_state = 4},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 4},
  [388] = {.lex_state = 4},
  [389] = {.lex_state = 4},
  [390] = {.lex_state = 4},
  [391] = {.lex_state = 4},
  [392] = {.lex_state = 4},
  [393] = {.lex_state = 4},
  [394] = {.lex_state = 4},
  [395] = {.lex_state = 4},
  [396] = {.lex_state = 4},
  [397] = {.lex_state = 16},
  [398] = {.lex_state = 171},
  [399] = {.lex_state = 4},
  [400] = {.lex_state = 171},
  [401] = {.lex_state = 27},
  [402] = {.lex_state = 4},
  [403] = {.lex_state = 4},
  [404] = {.lex_state = 172},
  [405] = {.lex_state = 4},
  [406] = {.lex_state = 171},
  [407] = {.lex_state = 171},
  [408] = {.lex_state = 4},
  [409] = {.lex_state = 4},
  [410] = {.lex_state = 4},
  [411] = {.lex_state = 4},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 4},
  [414] = {.lex_state = 16},
  [415] = {.lex_state = 4},
  [416] = {.lex_state = 4},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 172},
  [421] = {.lex_state = 16},
  [422] = {.lex_state = 172},
  [423] = {.lex_state = 171},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 171},
  [428] = {.lex_state = 4},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 172},
  [431] = {.lex_state = 6},
  [432] = {.lex_state = 6},
  [433] = {.lex_state = 171},
  [434] = {.lex_state = 171},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 172},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 172},
  [440] = {.lex_state = 4},
  [441] = {.lex_state = 171},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 4},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 171},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 21},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 16},
  [454] = {.lex_state = 171},
  [455] = {.lex_state = 171},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 21},
  [458] = {.lex_state = 21},
  [459] = {.lex_state = 21},
  [460] = {.lex_state = 16},
  [461] = {.lex_state = 16},
  [462] = {.lex_state = 21},
  [463] = {.lex_state = 171},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 171},
  [466] = {.lex_state = 171},
  [467] = {.lex_state = 21},
  [468] = {.lex_state = 21},
  [469] = {.lex_state = 21},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 21},
  [472] = {.lex_state = 21},
  [473] = {.lex_state = 21},
  [474] = {.lex_state = 21},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 21},
  [477] = {.lex_state = 21},
  [478] = {.lex_state = 175},
  [479] = {.lex_state = 21},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 21},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 21},
  [484] = {.lex_state = 21},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 21},
  [490] = {.lex_state = 21},
  [491] = {.lex_state = 21},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 171},
  [495] = {.lex_state = 171},
  [496] = {.lex_state = 171},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 21},
  [499] = {.lex_state = 21},
  [500] = {.lex_state = 21},
  [501] = {.lex_state = 21},
  [502] = {.lex_state = 21},
  [503] = {.lex_state = 21},
  [504] = {.lex_state = 21},
  [505] = {.lex_state = 21},
  [506] = {.lex_state = 21},
  [507] = {.lex_state = 21},
  [508] = {.lex_state = 21},
  [509] = {.lex_state = 21},
  [510] = {.lex_state = 21},
  [511] = {.lex_state = 21},
  [512] = {.lex_state = 21},
  [513] = {.lex_state = 21},
  [514] = {.lex_state = 21},
  [515] = {.lex_state = 21},
  [516] = {.lex_state = 21},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 21},
  [519] = {.lex_state = 21},
  [520] = {.lex_state = 21},
  [521] = {.lex_state = 21},
  [522] = {.lex_state = 171},
  [523] = {.lex_state = 171},
  [524] = {.lex_state = 171},
  [525] = {.lex_state = 21},
  [526] = {.lex_state = 21},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 21},
  [529] = {.lex_state = 21},
  [530] = {.lex_state = 21},
  [531] = {.lex_state = 21},
  [532] = {.lex_state = 21},
  [533] = {.lex_state = 21},
  [534] = {.lex_state = 21},
  [535] = {.lex_state = 175},
  [536] = {.lex_state = 16},
  [537] = {.lex_state = 21},
  [538] = {.lex_state = 21},
  [539] = {.lex_state = 21},
  [540] = {.lex_state = 21},
  [541] = {.lex_state = 21},
  [542] = {.lex_state = 21},
  [543] = {.lex_state = 21},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 21},
  [546] = {.lex_state = 21},
  [547] = {.lex_state = 21},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 21},
  [550] = {.lex_state = 171},
  [551] = {.lex_state = 21},
  [552] = {.lex_state = 171},
  [553] = {.lex_state = 21},
  [554] = {.lex_state = 21},
  [555] = {.lex_state = 21},
  [556] = {.lex_state = 21},
  [557] = {.lex_state = 21},
  [558] = {.lex_state = 21},
  [559] = {.lex_state = 21},
  [560] = {.lex_state = 21},
  [561] = {.lex_state = 4},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 171},
  [569] = {.lex_state = 167},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 22},
  [573] = {.lex_state = 23},
  [574] = {.lex_state = 24},
  [575] = {.lex_state = 171},
  [576] = {.lex_state = 171},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 24},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 167},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 171},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 171},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 24},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 167},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 173},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 173},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 24},
  [622] = {.lex_state = 24},
  [623] = {.lex_state = 167},
  [624] = {.lex_state = 24},
  [625] = {.lex_state = 167},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 176},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 167},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 173},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 176},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 23},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 4},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 171},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 25},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 171},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 25},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 4},
  [692] = {.lex_state = 4},
  [693] = {.lex_state = 4},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
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
    [aux_sym_diagram_gantt_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_dateformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_inclusiveenddates_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_topaxis_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_axisformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_includes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_excludes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_todaymarker_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_section_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(595),
    [sym_directive] = STATE(280),
    [sym_diagram_sequence] = STATE(594),
    [sym_diagram_class] = STATE(594),
    [sym_diagram_state] = STATE(594),
    [sym_diagram_gantt] = STATE(594),
    [aux_sym_diagram_sequence_repeat1] = STATE(280),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(5),
    [aux_sym_diagram_sequence_token1] = ACTIONS(7),
    [aux_sym_diagram_class_token1] = ACTIONS(9),
    [aux_sym_diagram_class_token2] = ACTIONS(11),
    [aux_sym_diagram_state_token1] = ACTIONS(13),
    [aux_sym_diagram_state_token2] = ACTIONS(15),
    [aux_sym_diagram_gantt_token1] = ACTIONS(17),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(80), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(277), 1,
      sym_actor,
    STATE(434), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(116), 18,
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
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(103), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(279), 1,
      sym_actor,
    STATE(406), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(81), 18,
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
    ACTIONS(21), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(63), 1,
      sym__actor_word,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(80), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(277), 1,
      sym_actor,
    STATE(407), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(116), 18,
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
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(279), 1,
      sym_actor,
    STATE(441), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(81), 18,
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
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(279), 1,
      sym_actor,
    STATE(433), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(81), 18,
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
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(279), 1,
      sym_actor,
    STATE(423), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(81), 18,
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
    ACTIONS(21), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(63), 1,
      sym__actor_word,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(80), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(277), 1,
      sym_actor,
    STATE(427), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(116), 18,
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
    ACTIONS(21), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(63), 1,
      sym__actor_word,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(80), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(277), 1,
      sym_actor,
    STATE(337), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(116), 18,
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
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(279), 1,
      sym_actor,
    ACTIONS(117), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(81), 18,
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
    ACTIONS(59), 1,
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
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(279), 1,
      sym_actor,
    ACTIONS(158), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(81), 18,
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
    ACTIONS(59), 1,
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
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(80), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(277), 1,
      sym_actor,
    ACTIONS(158), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(116), 18,
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
    ACTIONS(21), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(80), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(277), 1,
      sym_actor,
    ACTIONS(232), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(116), 18,
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
  [1240] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(270), 1,
      sym__newline,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(281), 1,
      sym_actor,
    STATE(17), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(171), 18,
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
  [1337] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [1436] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    ACTIONS(236), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 1,
      sym__newline,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(281), 1,
      sym_actor,
    STATE(14), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(171), 18,
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
  [1533] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(325), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(334), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(337), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(340), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(343), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(346), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(349), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(352), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(355), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(358), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(361), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(364), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(367), 1,
      sym__newline,
    ACTIONS(370), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(281), 1,
      sym_actor,
    STATE(17), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(171), 18,
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
  [1630] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    ACTIONS(236), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(270), 1,
      sym__newline,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(281), 1,
      sym_actor,
    STATE(17), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(171), 18,
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
  [1727] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(375), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [1826] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(377), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [1925] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(379), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [2024] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(381), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [2123] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(383), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(20), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [2222] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(385), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(21), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [2321] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(387), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [2420] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(389), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [2519] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(391), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [2618] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(393), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [2717] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(395), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(26), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [2816] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(397), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(27), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [2915] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(399), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(39), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [3014] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(401), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [3113] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(158), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(175), 1,
      sym__actor_word,
    ACTIONS(403), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(406), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(409), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(412), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(415), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(418), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(421), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(424), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(427), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(430), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(433), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(436), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(439), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(442), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(445), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(448), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(451), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(454), 1,
      sym__newline,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [3212] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(457), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [3311] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(238), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(459), 1,
      sym__newline,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(281), 1,
      sym_actor,
    STATE(18), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(171), 18,
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
  [3408] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(461), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(19), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [3507] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(463), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [3606] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(465), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [3705] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(467), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [3804] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(469), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [3903] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(471), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
  [4002] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(473), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__subdocument,
    STATE(199), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(278), 1,
      sym_actor,
    STATE(160), 18,
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
    ACTIONS(21), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(4), 1,
      aux_sym__subdocument,
    STATE(80), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(277), 1,
      sym_actor,
    STATE(116), 18,
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
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym__subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(279), 1,
      sym_actor,
    STATE(81), 18,
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
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym__subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(279), 1,
      sym_actor,
    STATE(81), 18,
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
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym__subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(279), 1,
      sym_actor,
    STATE(81), 18,
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
    ACTIONS(21), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(13), 1,
      aux_sym__subdocument,
    STATE(80), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(277), 1,
      sym_actor,
    STATE(116), 18,
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
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym__subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(279), 1,
      sym_actor,
    STATE(81), 18,
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
    ACTIONS(21), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(2), 1,
      aux_sym__subdocument,
    STATE(80), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(277), 1,
      sym_actor,
    STATE(116), 18,
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
    ACTIONS(21), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(8), 1,
      aux_sym__subdocument,
    STATE(80), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(277), 1,
      sym_actor,
    STATE(116), 18,
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
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
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
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      sym__newline,
    STATE(5), 1,
      aux_sym__subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(279), 1,
      sym_actor,
    STATE(81), 18,
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
    ACTIONS(21), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(23), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(9), 1,
      aux_sym__subdocument,
    STATE(80), 1,
      sym__sequence_stmt,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(277), 1,
      sym_actor,
    STATE(116), 18,
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
  [5160] = 17,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(481), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(483), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(485), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(487), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(489), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(491), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(493), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(495), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(497), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(499), 1,
      sym__newline,
    ACTIONS(501), 1,
      aux_sym_gantt_task_text_token1,
    STATE(401), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(629), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(55), 13,
      sym_directive,
      sym__gantt_stmt,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
      aux_sym_diagram_gantt_repeat1,
  [5225] = 17,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(508), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(511), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(514), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(517), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(520), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(523), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(526), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(529), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(532), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(535), 1,
      sym__newline,
    ACTIONS(538), 1,
      aux_sym_gantt_task_text_token1,
    STATE(401), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(629), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(55), 13,
      sym_directive,
      sym__gantt_stmt,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
      aux_sym_diagram_gantt_repeat1,
  [5290] = 17,
    ACTIONS(479), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(481), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(483), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(485), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(487), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(489), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(491), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(493), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(495), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(497), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(499), 1,
      sym__newline,
    ACTIONS(501), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
    STATE(401), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(629), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(55), 13,
      sym_directive,
      sym__gantt_stmt,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
      aux_sym_diagram_gantt_repeat1,
  [5355] = 17,
    ACTIONS(479), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(481), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(483), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(485), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(487), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(489), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(491), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(493), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(495), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(497), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(501), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
    ACTIONS(543), 1,
      sym__newline,
    STATE(401), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(629), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(54), 13,
      sym_directive,
      sym__gantt_stmt,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
      aux_sym_diagram_gantt_repeat1,
  [5420] = 17,
    ACTIONS(479), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(481), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(483), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(485), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(487), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(489), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(491), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(493), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(495), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(497), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(501), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(545), 1,
      ts_builtin_sym_end,
    ACTIONS(547), 1,
      sym__newline,
    STATE(401), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(629), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(56), 13,
      sym_directive,
      sym__gantt_stmt,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
      aux_sym_diagram_gantt_repeat1,
  [5485] = 16,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(555), 1,
      sym__newline,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(205), 1,
      sym_state_name,
    STATE(251), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(60), 14,
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
  [5548] = 16,
    ACTIONS(573), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
    ACTIONS(578), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(581), 1,
      sym__newline,
    ACTIONS(584), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(587), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(590), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(593), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(596), 1,
      anon_sym_DASH_DASH,
    ACTIONS(599), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(602), 1,
      aux_sym_state_name_token1,
    ACTIONS(605), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(205), 1,
      sym_state_name,
    STATE(251), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(60), 14,
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
  [5611] = 16,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(610), 1,
      sym__newline,
    STATE(205), 1,
      sym_state_name,
    STATE(251), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(60), 14,
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
  [5674] = 16,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(610), 1,
      sym__newline,
    STATE(205), 1,
      sym_state_name,
    STATE(251), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(59), 14,
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
  [5737] = 16,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    ACTIONS(614), 1,
      sym__newline,
    STATE(205), 1,
      sym_state_name,
    STATE(251), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(61), 14,
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
  [5800] = 15,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(618), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(620), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(622), 1,
      aux_sym_state_name_token1,
    STATE(251), 1,
      sym_state_hide_empty_description,
    STATE(313), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(485), 13,
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
  [5859] = 15,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(624), 1,
      sym__newline,
    STATE(205), 1,
      sym_state_name,
    STATE(251), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(63), 13,
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
  [5918] = 15,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(618), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(620), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(622), 1,
      aux_sym_state_name_token1,
    ACTIONS(626), 1,
      sym__newline,
    STATE(251), 1,
      sym_state_hide_empty_description,
    STATE(313), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(418), 13,
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
  [5977] = 15,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      sym_state_name,
    STATE(251), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 13,
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
  [6036] = 15,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      sym_state_name,
    STATE(251), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 13,
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
  [6095] = 15,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(618), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(620), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(622), 1,
      aux_sym_state_name_token1,
    ACTIONS(630), 1,
      sym__newline,
    STATE(251), 1,
      sym_state_hide_empty_description,
    STATE(313), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(442), 13,
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
  [6154] = 15,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(618), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(620), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(622), 1,
      aux_sym_state_name_token1,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    STATE(251), 1,
      sym_state_hide_empty_description,
    STATE(313), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(485), 13,
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
  [6213] = 15,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(205), 1,
      sym_state_name,
    STATE(251), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 13,
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
  [6272] = 15,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(618), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(620), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(622), 1,
      aux_sym_state_name_token1,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    STATE(251), 1,
      sym_state_hide_empty_description,
    STATE(313), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(485), 13,
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
  [6331] = 15,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(618), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(620), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(622), 1,
      aux_sym_state_name_token1,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    STATE(251), 1,
      sym_state_hide_empty_description,
    STATE(313), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(485), 13,
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
  [6390] = 14,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(205), 1,
      sym_state_name,
    STATE(251), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 13,
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
  [6446] = 14,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(618), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(620), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(622), 1,
      aux_sym_state_name_token1,
    STATE(251), 1,
      sym_state_hide_empty_description,
    STATE(313), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(340), 13,
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
  [6502] = 14,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(618), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(620), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(622), 1,
      aux_sym_state_name_token1,
    STATE(251), 1,
      sym_state_hide_empty_description,
    STATE(313), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(485), 13,
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
  [6558] = 14,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(618), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(620), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(622), 1,
      aux_sym_state_name_token1,
    STATE(251), 1,
      sym_state_hide_empty_description,
    STATE(313), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(418), 13,
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
  [6614] = 14,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(205), 1,
      sym_state_name,
    STATE(251), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(62), 13,
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
  [6670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(638), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(640), 17,
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
  [6702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(642), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(644), 17,
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
  [6734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(646), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(648), 17,
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
  [6766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(650), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(652), 17,
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
  [6798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(654), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(656), 17,
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
  [6830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(658), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(660), 17,
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
  [6862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(662), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(664), 17,
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
  [6894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(666), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(668), 17,
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
  [6926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(670), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(672), 17,
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
  [6958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(674), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(676), 17,
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
  [6990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(678), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(680), 17,
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
  [7022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(682), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(684), 17,
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
  [7054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(686), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(688), 17,
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
  [7086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(692), 17,
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
  [7118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(696), 17,
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
  [7150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(678), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(680), 17,
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
  [7182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(700), 17,
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
  [7214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(704), 17,
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
  [7246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(708), 17,
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
  [7278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(712), 17,
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
  [7310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(716), 17,
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
  [7342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(720), 17,
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
  [7374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(642), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(644), 17,
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
  [7406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(724), 17,
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
  [7438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(728), 17,
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
  [7470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(732), 17,
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
  [7502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(736), 17,
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
  [7534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(740), 17,
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
  [7566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(744), 17,
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
  [7598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(748), 17,
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
  [7630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(752), 17,
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
  [7662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(756), 17,
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
  [7694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(760), 17,
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
  [7726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(760), 17,
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
  [7758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(682), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(684), 17,
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
  [7790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(654), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(656), 17,
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
  [7822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(658), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(660), 17,
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
  [7854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(646), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(648), 17,
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
  [7886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(662), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(664), 17,
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
  [7918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(666), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(668), 17,
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
  [7950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(670), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(672), 17,
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
  [7982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(650), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(652), 17,
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
  [8014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(674), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(676), 17,
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
  [8046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(686), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(688), 17,
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
  [8078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(692), 17,
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
  [8110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(696), 17,
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
  [8142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(700), 17,
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
  [8174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(704), 17,
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
  [8206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(756), 17,
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
  [8238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(752), 17,
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
  [8270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(748), 17,
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
  [8302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(744), 17,
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
  [8334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(708), 17,
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
  [8366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(712), 17,
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
  [8398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(716), 17,
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
  [8430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(720), 17,
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
  [8462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(724), 17,
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
  [8494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(638), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(640), 17,
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
  [8526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(728), 17,
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
  [8558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(732), 17,
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
  [8590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(736), 17,
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
  [8622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(740), 17,
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
  [8654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(686), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(688), 16,
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
  [8685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(638), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(640), 16,
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
  [8716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(650), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(652), 16,
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
  [8747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(720), 16,
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
  [8778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(724), 16,
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
  [8809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(728), 16,
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
  [8840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(732), 16,
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
  [8871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(736), 16,
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
  [8902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(740), 16,
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
  [8933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(638), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(640), 16,
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
  [8964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(678), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(680), 16,
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
  [8995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(744), 16,
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
  [9026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(748), 16,
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
  [9057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(752), 16,
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
  [9088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(756), 16,
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
  [9119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(760), 16,
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
  [9150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(682), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(684), 16,
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
  [9181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(708), 16,
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
  [9212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(712), 16,
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
  [9243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(646), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(648), 16,
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
  [9274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(650), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(652), 16,
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
  [9305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(654), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(656), 16,
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
  [9336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(712), 16,
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
  [9367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(708), 16,
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
  [9398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(704), 16,
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
  [9429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(658), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(660), 16,
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
  [9460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(700), 16,
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
  [9491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(696), 16,
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
  [9522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(692), 16,
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
  [9553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(662), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(664), 16,
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
  [9584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(646), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(648), 16,
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
  [9615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(666), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(668), 16,
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
  [9646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(686), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(688), 16,
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
  [9677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(670), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(672), 16,
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
  [9708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(678), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(680), 16,
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
  [9739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(674), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(676), 16,
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
  [9770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(674), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(676), 16,
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
  [9801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(670), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(672), 16,
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
  [9832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(666), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(668), 16,
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
  [9863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(662), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(664), 16,
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
  [9894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(704), 16,
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
  [9925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(716), 16,
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
  [9956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(658), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(660), 16,
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
  [9987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(654), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(656), 16,
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
  [10018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(744), 16,
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
  [10049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(748), 16,
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
  [10080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(752), 16,
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
  [10111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(756), 16,
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
  [10142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(682), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(684), 16,
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
  [10173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(700), 16,
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
  [10204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(696), 16,
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
  [10235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(692), 16,
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
  [10266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(716), 16,
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
  [10297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(740), 16,
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
  [10328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(736), 16,
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
  [10359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(732), 16,
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
  [10390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(728), 16,
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
  [10421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(724), 16,
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
  [10452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(642), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(644), 16,
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
  [10483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(760), 16,
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
  [10514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(720), 16,
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
  [10545] = 15,
    ACTIONS(762), 1,
      anon_sym_COLON,
    ACTIONS(764), 1,
      anon_sym_STAR,
    ACTIONS(766), 1,
      sym__dquote_string,
    ACTIONS(768), 1,
      sym_class_reltype_aggregation,
    ACTIONS(772), 1,
      anon_sym_LT,
    ACTIONS(774), 1,
      anon_sym_GT,
    ACTIONS(776), 1,
      anon_sym_DASH_DASH,
    ACTIONS(778), 1,
      sym_class_linetype_dotted,
    STATE(225), 1,
      sym__class_linetype,
    STATE(287), 1,
      sym_class_linetype_solid,
    STATE(304), 1,
      sym_class_relation,
    STATE(335), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(770), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(319), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10595] = 6,
    ACTIONS(782), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    ACTIONS(786), 1,
      aux_sym_state_name_token1,
    STATE(220), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(780), 12,
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
  [10626] = 3,
    ACTIONS(790), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(788), 14,
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
  [10650] = 6,
    ACTIONS(792), 1,
      anon_sym_COLON,
    ACTIONS(796), 1,
      anon_sym_DASH_DASH_GT,
    STATE(359), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(798), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(794), 10,
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
  [10680] = 13,
    ACTIONS(764), 1,
      anon_sym_STAR,
    ACTIONS(768), 1,
      sym_class_reltype_aggregation,
    ACTIONS(772), 1,
      anon_sym_LT,
    ACTIONS(774), 1,
      anon_sym_GT,
    ACTIONS(776), 1,
      anon_sym_DASH_DASH,
    ACTIONS(778), 1,
      sym_class_linetype_dotted,
    STATE(225), 1,
      sym__class_linetype,
    STATE(287), 1,
      sym_class_linetype_solid,
    STATE(301), 1,
      sym_class_relation,
    STATE(335), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(770), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(319), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10724] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(802), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(800), 12,
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
  [10747] = 5,
    ACTIONS(806), 1,
      anon_sym_TILDE,
    ACTIONS(808), 1,
      anon_sym_LT,
    STATE(262), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(804), 11,
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
  [10774] = 4,
    ACTIONS(812), 1,
      anon_sym_COLON,
    ACTIONS(814), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(810), 12,
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
  [10799] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(820), 1,
      aux_sym_class_label_token1,
    STATE(252), 1,
      sym_state_description,
    ACTIONS(818), 4,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
    ACTIONS(816), 8,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      aux_sym_state_hide_empty_description_token1,
  [10828] = 3,
    ACTIONS(802), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(800), 12,
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
  [10850] = 3,
    ACTIONS(824), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(822), 12,
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
  [10872] = 3,
    ACTIONS(828), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(826), 12,
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
  [10894] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(832), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(830), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [10916] = 3,
    ACTIONS(836), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(834), 12,
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
  [10938] = 3,
    ACTIONS(840), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(838), 12,
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
  [10960] = 3,
    ACTIONS(844), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(842), 12,
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
  [10982] = 3,
    ACTIONS(848), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(846), 12,
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
  [11004] = 3,
    ACTIONS(852), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(850), 12,
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
  [11026] = 3,
    ACTIONS(856), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(854), 12,
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
  [11048] = 5,
    ACTIONS(858), 1,
      sym__class_name,
    ACTIONS(860), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(824), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(822), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [11074] = 3,
    ACTIONS(864), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(862), 12,
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
  [11096] = 3,
    ACTIONS(868), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(866), 12,
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
  [11118] = 3,
    ACTIONS(872), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(870), 12,
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
  [11140] = 10,
    ACTIONS(764), 1,
      anon_sym_STAR,
    ACTIONS(772), 1,
      anon_sym_LT,
    ACTIONS(774), 1,
      anon_sym_GT,
    ACTIONS(874), 1,
      sym__class_name,
    ACTIONS(878), 1,
      sym_class_reltype_aggregation,
    STATE(436), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(770), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(876), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(319), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11176] = 11,
    ACTIONS(880), 1,
      ts_builtin_sym_end,
    ACTIONS(882), 1,
      anon_sym_class,
    ACTIONS(884), 1,
      anon_sym_LT_LT,
    ACTIONS(886), 1,
      sym__class_name,
    ACTIONS(888), 1,
      sym__bquote_string,
    STATE(202), 1,
      sym_class_name,
    STATE(208), 1,
      sym_class_name_body,
    STATE(422), 1,
      aux_sym_class_name_body_repeat1,
    STATE(456), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(527), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11214] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(892), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(890), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11236] = 11,
    ACTIONS(882), 1,
      anon_sym_class,
    ACTIONS(884), 1,
      anon_sym_LT_LT,
    ACTIONS(886), 1,
      sym__class_name,
    ACTIONS(888), 1,
      sym__bquote_string,
    ACTIONS(894), 1,
      ts_builtin_sym_end,
    STATE(202), 1,
      sym_class_name,
    STATE(208), 1,
      sym_class_name_body,
    STATE(422), 1,
      aux_sym_class_name_body_repeat1,
    STATE(456), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(527), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11274] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(898), 1,
      sym__actor_word,
    STATE(255), 1,
      aux_sym_actor_repeat1,
    ACTIONS(900), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(896), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [11302] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(684), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11324] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(904), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(902), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11346] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(908), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(906), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11368] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(912), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(910), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11390] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(916), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(914), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11412] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(920), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(918), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11434] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(924), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(922), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11456] = 11,
    ACTIONS(882), 1,
      anon_sym_class,
    ACTIONS(884), 1,
      anon_sym_LT_LT,
    ACTIONS(886), 1,
      sym__class_name,
    ACTIONS(888), 1,
      sym__bquote_string,
    ACTIONS(926), 1,
      ts_builtin_sym_end,
    STATE(202), 1,
      sym_class_name,
    STATE(208), 1,
      sym_class_name_body,
    STATE(422), 1,
      aux_sym_class_name_body_repeat1,
    STATE(456), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(527), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11494] = 3,
    ACTIONS(930), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(928), 12,
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
  [11516] = 10,
    ACTIONS(764), 1,
      anon_sym_STAR,
    ACTIONS(772), 1,
      anon_sym_LT,
    ACTIONS(774), 1,
      anon_sym_GT,
    ACTIONS(878), 1,
      sym_class_reltype_aggregation,
    ACTIONS(932), 1,
      sym__class_name,
    STATE(404), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(770), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(934), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(319), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11552] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(938), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(936), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11574] = 3,
    ACTIONS(942), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(940), 12,
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
  [11596] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(946), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(944), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11618] = 3,
    ACTIONS(950), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(948), 12,
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
  [11640] = 3,
    ACTIONS(954), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(952), 12,
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
  [11662] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(958), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(956), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11684] = 3,
    ACTIONS(962), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(960), 12,
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
  [11706] = 3,
    ACTIONS(966), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(964), 12,
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
  [11728] = 3,
    ACTIONS(970), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(968), 12,
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
  [11750] = 3,
    ACTIONS(974), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(972), 12,
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
  [11772] = 3,
    ACTIONS(978), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(976), 12,
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
  [11794] = 3,
    ACTIONS(982), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(980), 12,
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
  [11816] = 3,
    ACTIONS(986), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(984), 12,
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
  [11838] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(678), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(680), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11860] = 8,
    ACTIONS(782), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    STATE(220), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(988), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(990), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(992), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(216), 4,
      sym__state_annotation,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [11892] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(996), 1,
      sym__actor_word,
    STATE(255), 1,
      aux_sym_actor_repeat1,
    ACTIONS(999), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(994), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [11920] = 3,
    ACTIONS(1003), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1001), 12,
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
  [11942] = 5,
    ACTIONS(858), 1,
      sym__class_name,
    ACTIONS(860), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1003), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1001), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [11968] = 11,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1007), 1,
      anon_sym_RBRACE,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    ACTIONS(1011), 1,
      anon_sym_DASH,
    ACTIONS(1013), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_LT_LT,
    ACTIONS(1019), 1,
      sym__alpha_num_token,
    STATE(283), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(464), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12005] = 10,
    ACTIONS(882), 1,
      anon_sym_class,
    ACTIONS(884), 1,
      anon_sym_LT_LT,
    ACTIONS(886), 1,
      sym__class_name,
    ACTIONS(888), 1,
      sym__bquote_string,
    STATE(202), 1,
      sym_class_name,
    STATE(208), 1,
      sym_class_name_body,
    STATE(422), 1,
      aux_sym_class_name_body_repeat1,
    STATE(456), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(527), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12040] = 11,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    ACTIONS(1011), 1,
      anon_sym_DASH,
    ACTIONS(1013), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_LT_LT,
    ACTIONS(1019), 1,
      sym__alpha_num_token,
    ACTIONS(1021), 1,
      sym__newline,
    STATE(283), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(363), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12077] = 11,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    ACTIONS(1011), 1,
      anon_sym_DASH,
    ACTIONS(1013), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_LT_LT,
    ACTIONS(1019), 1,
      sym__alpha_num_token,
    ACTIONS(1023), 1,
      sym__newline,
    STATE(283), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(429), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12114] = 3,
    ACTIONS(1027), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 11,
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
  [12135] = 3,
    ACTIONS(1029), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(576), 11,
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
  [12156] = 10,
    ACTIONS(882), 1,
      anon_sym_class,
    ACTIONS(884), 1,
      anon_sym_LT_LT,
    ACTIONS(886), 1,
      sym__class_name,
    ACTIONS(888), 1,
      sym__bquote_string,
    STATE(202), 1,
      sym_class_name,
    STATE(208), 1,
      sym_class_name_body,
    STATE(422), 1,
      aux_sym_class_name_body_repeat1,
    STATE(424), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(527), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12191] = 11,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    ACTIONS(1011), 1,
      anon_sym_DASH,
    ACTIONS(1013), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_LT_LT,
    ACTIONS(1019), 1,
      sym__alpha_num_token,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(464), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12228] = 10,
    ACTIONS(882), 1,
      anon_sym_class,
    ACTIONS(884), 1,
      anon_sym_LT_LT,
    ACTIONS(886), 1,
      sym__class_name,
    ACTIONS(888), 1,
      sym__bquote_string,
    STATE(202), 1,
      sym_class_name,
    STATE(208), 1,
      sym_class_name_body,
    STATE(339), 1,
      sym__class_stmt,
    STATE(422), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(527), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12263] = 11,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    ACTIONS(1011), 1,
      anon_sym_DASH,
    ACTIONS(1013), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_LT_LT,
    ACTIONS(1019), 1,
      sym__alpha_num_token,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(464), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12300] = 11,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    ACTIONS(1011), 1,
      anon_sym_DASH,
    ACTIONS(1013), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_LT_LT,
    ACTIONS(1019), 1,
      sym__alpha_num_token,
    ACTIONS(1035), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(464), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12337] = 11,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    ACTIONS(1011), 1,
      anon_sym_DASH,
    ACTIONS(1013), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_LT_LT,
    ACTIONS(1019), 1,
      sym__alpha_num_token,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(464), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12374] = 11,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    ACTIONS(1011), 1,
      anon_sym_DASH,
    ACTIONS(1013), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_LT_LT,
    ACTIONS(1019), 1,
      sym__alpha_num_token,
    ACTIONS(1039), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(464), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12411] = 3,
    ACTIONS(1043), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1041), 11,
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
  [12432] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(800), 12,
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
  [12451] = 10,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    ACTIONS(1011), 1,
      anon_sym_DASH,
    ACTIONS(1013), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_LT_LT,
    ACTIONS(1019), 1,
      sym__alpha_num_token,
    STATE(283), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(464), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12485] = 10,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    ACTIONS(1011), 1,
      anon_sym_DASH,
    ACTIONS(1013), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_LT_LT,
    ACTIONS(1019), 1,
      sym__alpha_num_token,
    STATE(283), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(346), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12519] = 10,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    ACTIONS(1011), 1,
      anon_sym_DASH,
    ACTIONS(1013), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_LT_LT,
    ACTIONS(1019), 1,
      sym__alpha_num_token,
    STATE(283), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(386), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12553] = 6,
    ACTIONS(1045), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1052), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1050), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(276), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
    ACTIONS(1048), 4,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
  [12578] = 6,
    ACTIONS(1057), 1,
      sym_solid_open_arrow,
    ACTIONS(1059), 1,
      anon_sym_DASH_DASH_GT,
    STATE(293), 1,
      sym_signal_type,
    STATE(432), 1,
      sym_dotted_open_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1055), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [12603] = 6,
    ACTIONS(1057), 1,
      sym_solid_open_arrow,
    ACTIONS(1059), 1,
      anon_sym_DASH_DASH_GT,
    STATE(298), 1,
      sym_signal_type,
    STATE(432), 1,
      sym_dotted_open_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1055), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [12628] = 6,
    ACTIONS(1057), 1,
      sym_solid_open_arrow,
    ACTIONS(1059), 1,
      anon_sym_DASH_DASH_GT,
    STATE(294), 1,
      sym_signal_type,
    STATE(432), 1,
      sym_dotted_open_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1055), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [12653] = 10,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1061), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(1063), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(1065), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(1067), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(1069), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(1071), 1,
      aux_sym_diagram_gantt_token1,
    ACTIONS(1073), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
  [12686] = 6,
    ACTIONS(1057), 1,
      sym_solid_open_arrow,
    ACTIONS(1059), 1,
      anon_sym_DASH_DASH_GT,
    STATE(297), 1,
      sym_signal_type,
    STATE(432), 1,
      sym_dotted_open_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1055), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [12711] = 6,
    ACTIONS(1079), 1,
      anon_sym_STAR,
    ACTIONS(1081), 1,
      anon_sym_DOLLAR,
    STATE(284), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1075), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
    ACTIONS(1077), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [12735] = 6,
    ACTIONS(1085), 1,
      anon_sym_STAR,
    ACTIONS(1087), 1,
      anon_sym_DOLLAR,
    STATE(284), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1077), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1083), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [12759] = 4,
    STATE(284), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1091), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1089), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      sym__newline,
  [12779] = 6,
    ACTIONS(1096), 1,
      anon_sym_STAR,
    ACTIONS(1098), 1,
      anon_sym_DOLLAR,
    STATE(284), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1077), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1094), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [12803] = 6,
    ACTIONS(1102), 1,
      anon_sym_STAR,
    ACTIONS(1104), 1,
      anon_sym_DOLLAR,
    STATE(284), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1077), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1100), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [12827] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1108), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1106), 6,
      anon_sym_STAR,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
  [12845] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1112), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1110), 6,
      anon_sym_STAR,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
  [12863] = 6,
    ACTIONS(1116), 1,
      anon_sym_STAR,
    ACTIONS(1118), 1,
      anon_sym_DOLLAR,
    STATE(284), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1077), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1114), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [12887] = 9,
    ACTIONS(1005), 1,
      anon_sym_TILDE,
    ACTIONS(1009), 1,
      anon_sym_PLUS,
    ACTIONS(1011), 1,
      anon_sym_DASH,
    ACTIONS(1013), 1,
      anon_sym_POUND,
    ACTIONS(1019), 1,
      sym__alpha_num_token,
    STATE(283), 1,
      aux_sym_class_method_line_repeat1,
    STATE(486), 1,
      sym_class_method_line,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12917] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(682), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(684), 6,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      sym__newline,
  [12934] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(678), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(680), 6,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      sym__newline,
  [12951] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(654), 1,
      sym_actor,
    STATE(352), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [12977] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(669), 1,
      sym_actor,
    STATE(343), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [13003] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(860), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1001), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13019] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(860), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(822), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13035] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(642), 1,
      sym_actor,
    STATE(383), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [13061] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(639), 1,
      sym_actor,
    STATE(357), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [13087] = 6,
    ACTIONS(1124), 1,
      aux_sym_sequence_stmt_note_token2,
    ACTIONS(1126), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1128), 1,
      aux_sym_note_placement_right_token1,
    STATE(353), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(693), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [13108] = 6,
    ACTIONS(1126), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1128), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1130), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(358), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(693), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [13129] = 7,
    ACTIONS(888), 1,
      sym__bquote_string,
    ACTIONS(1132), 1,
      sym__class_name,
    ACTIONS(1134), 1,
      sym__dquote_string,
    STATE(208), 1,
      sym_class_name_body,
    STATE(419), 1,
      sym_class_name,
    STATE(430), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13152] = 4,
    ACTIONS(1136), 1,
      anon_sym_TILDE,
    STATE(322), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(804), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13169] = 6,
    ACTIONS(1126), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1128), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1138), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(440), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(693), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [13190] = 7,
    ACTIONS(888), 1,
      sym__bquote_string,
    ACTIONS(1132), 1,
      sym__class_name,
    ACTIONS(1140), 1,
      sym__dquote_string,
    STATE(208), 1,
      sym_class_name_body,
    STATE(430), 1,
      aux_sym_class_name_body_repeat1,
    STATE(435), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13213] = 6,
    ACTIONS(1126), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1128), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1142), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(348), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(693), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [13234] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(860), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(822), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [13249] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(860), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1001), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [13264] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(822), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13276] = 6,
    ACTIONS(888), 1,
      sym__bquote_string,
    ACTIONS(1132), 1,
      sym__class_name,
    STATE(208), 1,
      sym_class_name_body,
    STATE(419), 1,
      sym_class_name,
    STATE(430), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13296] = 5,
    ACTIONS(1144), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1146), 1,
      aux_sym_note_placement_right_token1,
    STATE(397), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(461), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [13314] = 6,
    ACTIONS(888), 1,
      sym__bquote_string,
    ACTIONS(1132), 1,
      sym__class_name,
    STATE(208), 1,
      sym_class_name_body,
    STATE(370), 1,
      sym_class_name,
    STATE(430), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13334] = 5,
    ACTIONS(1148), 1,
      sym__dquote_string,
    STATE(203), 1,
      sym_state_alias,
    STATE(254), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(620), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [13352] = 5,
    ACTIONS(792), 1,
      anon_sym_COLON,
    ACTIONS(796), 1,
      anon_sym_DASH_DASH_GT,
    STATE(414), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(794), 2,
      ts_builtin_sym_end,
      sym__newline,
  [13370] = 5,
    ACTIONS(1144), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1146), 1,
      aux_sym_note_placement_right_token1,
    STATE(421), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(461), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [13388] = 6,
    ACTIONS(1150), 1,
      sym__class_name,
    ACTIONS(1152), 1,
      sym__bquote_string,
    STATE(302), 1,
      sym_class_name_body,
    STATE(327), 1,
      sym_class_name,
    STATE(439), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13408] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1154), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [13420] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1001), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13432] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1156), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [13444] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1158), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [13456] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1160), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [13468] = 6,
    ACTIONS(888), 1,
      sym__bquote_string,
    ACTIONS(1150), 1,
      sym__class_name,
    STATE(208), 1,
      sym_class_name_body,
    STATE(420), 1,
      aux_sym_class_name_body_repeat1,
    STATE(444), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13488] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1162), 1,
      sym__actor_word,
    STATE(325), 1,
      aux_sym_actor_repeat1,
    ACTIONS(896), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [13516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1166), 1,
      aux_sym_class_label_token1,
    STATE(446), 1,
      sym_class_label,
    ACTIONS(1164), 2,
      ts_builtin_sym_end,
      sym__newline,
  [13533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1168), 1,
      sym__actor_word,
    STATE(325), 1,
      aux_sym_actor_repeat1,
    ACTIONS(994), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [13550] = 3,
    STATE(285), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1171), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [13563] = 4,
    ACTIONS(1175), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1177), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1173), 2,
      ts_builtin_sym_end,
      sym__newline,
  [13578] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1041), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13589] = 3,
    STATE(286), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1179), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [13602] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(820), 1,
      aux_sym_class_label_token1,
    STATE(252), 1,
      sym_state_description,
    ACTIONS(816), 2,
      ts_builtin_sym_end,
      sym__newline,
  [13619] = 3,
    STATE(289), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1181), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [13632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1166), 1,
      aux_sym_class_label_token1,
    STATE(452), 1,
      sym_class_label,
    ACTIONS(1183), 2,
      ts_builtin_sym_end,
      sym__newline,
  [13649] = 3,
    STATE(282), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1185), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [13662] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1166), 1,
      aux_sym_class_label_token1,
    STATE(487), 1,
      sym_class_label,
    ACTIONS(1187), 2,
      ts_builtin_sym_end,
      sym__newline,
  [13679] = 5,
    ACTIONS(776), 1,
      anon_sym_DASH_DASH,
    ACTIONS(778), 1,
      sym_class_linetype_dotted,
    STATE(239), 1,
      sym__class_linetype,
    STATE(287), 1,
      sym_class_linetype_solid,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13696] = 4,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    ACTIONS(1189), 1,
      sym__newline,
    STATE(349), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13710] = 4,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1191), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(400), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13724] = 4,
    ACTIONS(1193), 1,
      anon_sym_COLON,
    ACTIONS(1195), 1,
      aux_sym_gantt_task_text_token1,
    STATE(338), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13738] = 4,
    ACTIONS(880), 1,
      ts_builtin_sym_end,
    ACTIONS(1198), 1,
      sym__newline,
    STATE(437), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13752] = 4,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(1200), 1,
      sym__newline,
    STATE(438), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13766] = 4,
    ACTIONS(1039), 1,
      anon_sym_RBRACE,
    ACTIONS(1202), 1,
      sym__newline,
    STATE(349), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(671), 1,
      sym_actor,
  [13796] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(670), 1,
      sym_actor,
  [13812] = 3,
    ACTIONS(1206), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1204), 2,
      ts_builtin_sym_end,
      sym__newline,
  [13824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(683), 1,
      sym_actor,
  [13840] = 4,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    ACTIONS(1189), 1,
      sym__newline,
    STATE(341), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13854] = 4,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(1200), 1,
      sym__newline,
    STATE(366), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(668), 1,
      sym_actor,
  [13884] = 4,
    ACTIONS(1208), 1,
      anon_sym_RBRACE,
    ACTIONS(1210), 1,
      sym__newline,
    STATE(349), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13898] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(480), 1,
      sym_actor,
  [13914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(656), 1,
      sym_actor,
  [13930] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(655), 1,
      sym_actor,
  [13946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(653), 1,
      sym_actor,
  [13962] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(488), 1,
      sym_actor,
  [13978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(641), 1,
      sym_actor,
  [13994] = 4,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    ACTIONS(1213), 1,
      sym__newline,
    STATE(349), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14008] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(640), 1,
      sym_actor,
  [14024] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(638), 1,
      sym_actor,
  [14040] = 3,
    STATE(209), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1215), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [14052] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(497), 1,
      sym_actor,
  [14068] = 4,
    ACTIONS(1217), 1,
      sym__class_name,
    ACTIONS(1220), 1,
      sym__bquote_string,
    STATE(361), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(609), 1,
      sym_actor,
  [14098] = 4,
    ACTIONS(1222), 1,
      anon_sym_RBRACE,
    ACTIONS(1224), 1,
      sym__newline,
    STATE(336), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(608), 1,
      sym_actor,
  [14128] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(607), 1,
      sym_actor,
  [14144] = 4,
    ACTIONS(1226), 1,
      ts_builtin_sym_end,
    ACTIONS(1228), 1,
      sym__newline,
    STATE(366), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14158] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(606), 1,
      sym_actor,
  [14174] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(587), 1,
      sym_actor,
  [14190] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(586), 1,
      sym_actor,
  [14206] = 3,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1183), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14218] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1233), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14228] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1235), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14238] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1237), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14248] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1239), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14258] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1241), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14268] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1243), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14278] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1245), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14288] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1247), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14298] = 4,
    ACTIONS(880), 1,
      ts_builtin_sym_end,
    ACTIONS(1198), 1,
      sym__newline,
    STATE(412), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14312] = 4,
    ACTIONS(1035), 1,
      anon_sym_RBRACE,
    ACTIONS(1249), 1,
      sym__newline,
    STATE(349), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14326] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(585), 1,
      sym_actor,
  [14342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(584), 1,
      sym_actor,
  [14358] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(676), 1,
      sym_actor,
  [14374] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(563), 1,
      sym_actor,
  [14390] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(630), 1,
      sym_actor,
  [14406] = 4,
    ACTIONS(1035), 1,
      anon_sym_RBRACE,
    ACTIONS(1249), 1,
      sym__newline,
    STATE(356), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(570), 1,
      sym_actor,
  [14436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(564), 1,
      sym_actor,
  [14452] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(598), 1,
      sym_actor,
  [14468] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(599), 1,
      sym_actor,
  [14484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1251), 1,
      sym__actor_word,
    STATE(323), 1,
      aux_sym_actor_repeat1,
    STATE(524), 1,
      sym_actor,
  [14500] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1251), 1,
      sym__actor_word,
    STATE(323), 1,
      aux_sym_actor_repeat1,
    STATE(523), 1,
      sym_actor,
  [14516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(633), 1,
      sym_actor,
  [14532] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(637), 1,
      sym_actor,
  [14548] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1251), 1,
      sym__actor_word,
    STATE(323), 1,
      aux_sym_actor_repeat1,
    STATE(496), 1,
      sym_actor,
  [14564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1251), 1,
      sym__actor_word,
    STATE(323), 1,
      aux_sym_actor_repeat1,
    STATE(495), 1,
      sym_actor,
  [14580] = 3,
    STATE(672), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(620), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [14592] = 4,
    ACTIONS(1253), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1255), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(398), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(679), 1,
      sym_actor,
  [14622] = 4,
    ACTIONS(1258), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1260), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(400), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14636] = 4,
    ACTIONS(1263), 1,
      anon_sym_COLON,
    ACTIONS(1265), 1,
      aux_sym_gantt_task_text_token1,
    STATE(338), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(680), 1,
      sym_actor,
  [14666] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1251), 1,
      sym__actor_word,
    STATE(323), 1,
      aux_sym_actor_repeat1,
    STATE(466), 1,
      sym_actor,
  [14682] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1267), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [14692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1251), 1,
      sym__actor_word,
    STATE(323), 1,
      aux_sym_actor_repeat1,
    STATE(465), 1,
      sym_actor,
  [14708] = 4,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1269), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(398), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14722] = 4,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1271), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(400), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1251), 1,
      sym__actor_word,
    STATE(323), 1,
      aux_sym_actor_repeat1,
    STATE(455), 1,
      sym_actor,
  [14752] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1251), 1,
      sym__actor_word,
    STATE(323), 1,
      aux_sym_actor_repeat1,
    STATE(454), 1,
      sym_actor,
  [14768] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(688), 1,
      sym_actor,
  [14784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(690), 1,
      sym_actor,
  [14800] = 4,
    ACTIONS(1273), 1,
      ts_builtin_sym_end,
    ACTIONS(1275), 1,
      sym__newline,
    STATE(412), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(696), 1,
      sym_actor,
  [14830] = 3,
    STATE(209), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(620), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [14842] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(697), 1,
      sym_actor,
  [14858] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(698), 1,
      sym_actor,
  [14874] = 4,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    ACTIONS(1278), 1,
      sym__newline,
    STATE(366), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14888] = 4,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    ACTIONS(1278), 1,
      sym__newline,
    STATE(347), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14902] = 3,
    ACTIONS(1280), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1187), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14914] = 4,
    ACTIONS(1282), 1,
      sym__class_name,
    ACTIONS(1284), 1,
      sym__bquote_string,
    STATE(361), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14928] = 3,
    STATE(675), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(620), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [14940] = 4,
    ACTIONS(1284), 1,
      sym__bquote_string,
    ACTIONS(1286), 1,
      sym__class_name,
    STATE(361), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14954] = 4,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1288), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(398), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14968] = 4,
    ACTIONS(1290), 1,
      ts_builtin_sym_end,
    ACTIONS(1292), 1,
      sym__newline,
    STATE(379), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14982] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1094), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14992] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1294), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15002] = 4,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1296), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(400), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(571), 1,
      sym_actor,
  [15032] = 4,
    ACTIONS(1298), 1,
      anon_sym_RBRACE,
    ACTIONS(1300), 1,
      sym__newline,
    STATE(380), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15046] = 4,
    ACTIONS(1284), 1,
      sym__bquote_string,
    ACTIONS(1302), 1,
      sym__class_name,
    STATE(361), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1306), 1,
      sym__actor_word,
    ACTIONS(1304), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [15074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1310), 1,
      sym__actor_word,
    ACTIONS(1308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [15088] = 4,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1312), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(398), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15102] = 4,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1314), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(400), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15116] = 3,
    ACTIONS(1318), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1316), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15128] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(934), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [15138] = 4,
    ACTIONS(894), 1,
      ts_builtin_sym_end,
    ACTIONS(1320), 1,
      sym__newline,
    STATE(412), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15152] = 4,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    ACTIONS(1322), 1,
      sym__newline,
    STATE(366), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15166] = 4,
    ACTIONS(1282), 1,
      sym__class_name,
    ACTIONS(1324), 1,
      sym__bquote_string,
    STATE(361), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(601), 1,
      sym_actor,
  [15196] = 4,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1326), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(398), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15210] = 4,
    ACTIONS(1328), 1,
      ts_builtin_sym_end,
    ACTIONS(1330), 1,
      sym__newline,
    STATE(417), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15224] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__actor_word,
    STATE(229), 1,
      aux_sym_actor_repeat1,
    STATE(544), 1,
      sym_actor,
  [15240] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1332), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15249] = 3,
    ACTIONS(1334), 1,
      anon_sym_COLON,
    ACTIONS(1336), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15260] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1338), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15269] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1340), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15278] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1342), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(681), 1,
      sym__rest_text,
  [15300] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1346), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15309] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1348), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15318] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1164), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15327] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1350), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [15336] = 3,
    ACTIONS(1352), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1354), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15347] = 3,
    ACTIONS(1356), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1358), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15358] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1273), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(666), 1,
      sym__rest_text,
  [15380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(580), 1,
      sym__rest_text,
  [15393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(665), 1,
      sym__rest_text,
  [15406] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1360), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [15415] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1362), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [15424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(684), 1,
      sym__rest_text,
  [15437] = 3,
    ACTIONS(1364), 1,
      anon_sym_COLON,
    ACTIONS(1366), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15448] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1208), 2,
      anon_sym_RBRACE,
      sym__newline,
  [15457] = 3,
    ACTIONS(1368), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1370), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15468] = 3,
    ACTIONS(1372), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1374), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(651), 1,
      sym__rest_text,
  [15492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(650), 1,
      sym__rest_text,
  [15505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(695), 1,
      sym__rest_text,
  [15518] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1376), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1378), 1,
      aux_sym__rest_text_token1,
    STATE(150), 1,
      sym__rest_text,
  [15540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1378), 1,
      aux_sym__rest_text_token1,
    STATE(149), 1,
      sym__rest_text,
  [15553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1378), 1,
      aux_sym__rest_text_token1,
    STATE(148), 1,
      sym__rest_text,
  [15566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1378), 1,
      aux_sym__rest_text_token1,
    STATE(147), 1,
      sym__rest_text,
  [15579] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1380), 2,
      anon_sym_RBRACE,
      sym__newline,
  [15588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(627), 1,
      sym__rest_text,
  [15601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(636), 1,
      sym__rest_text,
  [15614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(820), 1,
      aux_sym_class_label_token1,
    STATE(238), 1,
      sym_state_description,
  [15627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(635), 1,
      sym__rest_text,
  [15640] = 3,
    ACTIONS(1382), 1,
      anon_sym_COLON,
    ACTIONS(1384), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(613), 1,
      sym__rest_text,
  [15664] = 3,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    STATE(250), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(612), 1,
      sym__rest_text,
  [15688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(611), 1,
      sym__rest_text,
  [15701] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1226), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15710] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1386), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15719] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1183), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15728] = 3,
    ACTIONS(1388), 1,
      anon_sym_COLON,
    ACTIONS(1390), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(591), 1,
      sym__rest_text,
  [15752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(590), 1,
      sym__rest_text,
  [15765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(589), 1,
      sym__rest_text,
  [15778] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1392), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15787] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1394), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15796] = 3,
    ACTIONS(1396), 1,
      anon_sym_COLON,
    ACTIONS(1398), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15807] = 3,
    ACTIONS(1400), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1402), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15818] = 3,
    ACTIONS(1404), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1406), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15829] = 3,
    ACTIONS(1408), 1,
      anon_sym_COLON,
    ACTIONS(1410), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(567), 1,
      sym__rest_text,
  [15853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(566), 1,
      sym__rest_text,
  [15866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(565), 1,
      sym__rest_text,
  [15879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1412), 1,
      aux_sym__rest_text_token1,
    STATE(79), 1,
      sym__rest_text,
  [15892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1412), 1,
      aux_sym__rest_text_token1,
    STATE(106), 1,
      sym__rest_text,
  [15905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1412), 1,
      aux_sym__rest_text_token1,
    STATE(105), 1,
      sym__rest_text,
  [15918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1412), 1,
      aux_sym__rest_text_token1,
    STATE(104), 1,
      sym__rest_text,
  [15931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1414), 1,
      aux_sym__rest_text_token1,
    STATE(196), 1,
      sym__rest_text,
  [15944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(577), 1,
      sym__rest_text,
  [15957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(632), 1,
      sym__rest_text,
  [15970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(648), 1,
      sym__rest_text,
  [15983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(579), 1,
      sym__rest_text,
  [15996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(581), 1,
      sym__rest_text,
  [16009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(649), 1,
      sym__rest_text,
  [16022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(660), 1,
      sym__rest_text,
  [16035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(662), 1,
      sym__rest_text,
  [16048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(582), 1,
      sym__rest_text,
  [16061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(588), 1,
      sym__rest_text,
  [16074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(562), 1,
      sym__rest_text,
  [16087] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1416), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(596), 1,
      sym__rest_text,
  [16109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1414), 1,
      aux_sym__rest_text_token1,
    STATE(195), 1,
      sym__rest_text,
  [16122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1414), 1,
      aux_sym__rest_text_token1,
    STATE(194), 1,
      sym__rest_text,
  [16135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1414), 1,
      aux_sym__rest_text_token1,
    STATE(142), 1,
      sym__rest_text,
  [16148] = 3,
    ACTIONS(1418), 1,
      anon_sym_COLON,
    ACTIONS(1420), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16159] = 3,
    ACTIONS(1422), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1424), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16170] = 3,
    ACTIONS(1426), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1428), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(602), 1,
      sym__rest_text,
  [16194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(603), 1,
      sym__rest_text,
  [16207] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1430), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(604), 1,
      sym__rest_text,
  [16229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1432), 1,
      aux_sym__rest_text_token1,
    STATE(136), 1,
      sym__rest_text,
  [16242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1432), 1,
      aux_sym__rest_text_token1,
    STATE(140), 1,
      sym__rest_text,
  [16255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1432), 1,
      aux_sym__rest_text_token1,
    STATE(139), 1,
      sym__rest_text,
  [16268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1432), 1,
      aux_sym__rest_text_token1,
    STATE(138), 1,
      sym__rest_text,
  [16281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(614), 1,
      sym__rest_text,
  [16294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(619), 1,
      sym__rest_text,
  [16307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(820), 1,
      aux_sym_class_label_token1,
    STATE(223), 1,
      sym_state_description,
  [16320] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1434), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [16329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(620), 1,
      sym__rest_text,
  [16342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(626), 1,
      sym__rest_text,
  [16355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(231), 1,
      sym_gantt_meta_format,
  [16368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(232), 1,
      sym_gantt_meta_format,
  [16381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(233), 1,
      sym_gantt_meta_format,
  [16394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(234), 1,
      sym_gantt_meta_format,
  [16407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(235), 1,
      sym_gantt_meta_format,
  [16420] = 3,
    ACTIONS(1438), 1,
      anon_sym_COLON,
    ACTIONS(1440), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(236), 1,
      sym_gantt_meta_format,
  [16444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(240), 1,
      sym_gantt_meta_format,
  [16457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(694), 1,
      sym__rest_text,
  [16470] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1442), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(643), 1,
      sym__rest_text,
  [16492] = 3,
    ACTIONS(1444), 1,
      anon_sym_COLON,
    ACTIONS(1446), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(645), 1,
      sym__rest_text,
  [16516] = 3,
    ACTIONS(1448), 1,
      anon_sym_COLON,
    ACTIONS(1450), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(647), 1,
      sym__rest_text,
  [16540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(652), 1,
      sym__rest_text,
  [16553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(242), 1,
      sym_gantt_meta_format,
  [16566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(214), 1,
      sym_gantt_meta_format,
  [16579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(659), 1,
      sym__rest_text,
  [16592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(664), 1,
      sym__rest_text,
  [16605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(667), 1,
      sym__rest_text,
  [16618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1344), 1,
      aux_sym__rest_text_token1,
    STATE(677), 1,
      sym__rest_text,
  [16631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1452), 1,
      sym__actor_word,
  [16641] = 2,
    ACTIONS(1454), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16649] = 2,
    ACTIONS(1456), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16657] = 2,
    ACTIONS(1458), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16665] = 2,
    ACTIONS(1460), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16673] = 2,
    ACTIONS(1462), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16681] = 2,
    ACTIONS(1464), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16689] = 2,
    ACTIONS(1466), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16697] = 2,
    ACTIONS(1468), 1,
      sym_arg_directive,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [16705] = 2,
    ACTIONS(1470), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16713] = 2,
    ACTIONS(1472), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1474), 1,
      sym_gantt_task_data,
  [16731] = 2,
    ACTIONS(1476), 1,
      aux_sym_class_generics_token1,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [16739] = 2,
    ACTIONS(1478), 1,
      sym_type_directive,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [16747] = 2,
    ACTIONS(1480), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16755] = 2,
    ACTIONS(1482), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16763] = 2,
    ACTIONS(1484), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16771] = 2,
    ACTIONS(1486), 1,
      sym_type_directive,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [16779] = 2,
    ACTIONS(1488), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16787] = 2,
    ACTIONS(1490), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16795] = 2,
    ACTIONS(1492), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16803] = 2,
    ACTIONS(1494), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16811] = 2,
    ACTIONS(1496), 1,
      sym_arg_directive,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [16819] = 2,
    ACTIONS(1498), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16827] = 2,
    ACTIONS(1500), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16835] = 2,
    ACTIONS(1502), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16843] = 2,
    ACTIONS(1504), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16851] = 2,
    ACTIONS(1506), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16859] = 2,
    ACTIONS(1508), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16867] = 2,
    ACTIONS(1510), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16875] = 2,
    ACTIONS(1512), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16883] = 2,
    ACTIONS(1514), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16891] = 2,
    ACTIONS(1516), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16899] = 2,
    ACTIONS(1518), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16907] = 2,
    ACTIONS(1520), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16915] = 2,
    ACTIONS(1522), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16923] = 2,
    ACTIONS(1524), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16931] = 2,
    ACTIONS(1526), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16939] = 2,
    ACTIONS(1528), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16947] = 2,
    ACTIONS(1530), 1,
      sym_type_directive,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [16955] = 2,
    ACTIONS(1438), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16963] = 2,
    ACTIONS(1532), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16971] = 2,
    ACTIONS(1534), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16979] = 2,
    ACTIONS(1536), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16987] = 2,
    ACTIONS(1538), 1,
      sym_arg_directive,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [16995] = 2,
    ACTIONS(1540), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17003] = 2,
    ACTIONS(1542), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17011] = 2,
    ACTIONS(1544), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17019] = 2,
    ACTIONS(1546), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17027] = 2,
    ACTIONS(1548), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17035] = 2,
    ACTIONS(1550), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17043] = 2,
    ACTIONS(1552), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17051] = 2,
    ACTIONS(1554), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17059] = 2,
    ACTIONS(1556), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17067] = 2,
    ACTIONS(1558), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17075] = 2,
    ACTIONS(1560), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17083] = 2,
    ACTIONS(1562), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17091] = 2,
    ACTIONS(1564), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17099] = 2,
    ACTIONS(1566), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17107] = 2,
    ACTIONS(1568), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17115] = 2,
    ACTIONS(1570), 1,
      sym_type_directive,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [17123] = 2,
    ACTIONS(1572), 1,
      sym_type_directive,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [17131] = 2,
    ACTIONS(1574), 1,
      sym_arg_directive,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [17139] = 2,
    ACTIONS(1576), 1,
      sym_type_directive,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [17147] = 2,
    ACTIONS(1578), 1,
      sym_arg_directive,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [17155] = 2,
    ACTIONS(1580), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17163] = 2,
    ACTIONS(1582), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17171] = 2,
    ACTIONS(1584), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17179] = 2,
    ACTIONS(1586), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17187] = 2,
    ACTIONS(1588), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17195] = 2,
    ACTIONS(1590), 1,
      sym_arg_directive,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [17203] = 2,
    ACTIONS(1592), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17211] = 2,
    ACTIONS(1594), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17219] = 2,
    ACTIONS(1596), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17227] = 2,
    ACTIONS(1598), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17235] = 2,
    ACTIONS(1600), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17243] = 2,
    ACTIONS(1602), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17251] = 2,
    ACTIONS(1408), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17259] = 2,
    ACTIONS(1604), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17267] = 2,
    ACTIONS(1606), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17275] = 2,
    ACTIONS(1608), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17283] = 2,
    ACTIONS(1610), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17291] = 2,
    ACTIONS(1612), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17299] = 2,
    ACTIONS(1614), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17307] = 2,
    ACTIONS(1616), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17315] = 2,
    ACTIONS(1618), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17323] = 2,
    ACTIONS(1620), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17331] = 2,
    ACTIONS(1622), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17339] = 2,
    ACTIONS(1624), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17347] = 2,
    ACTIONS(1626), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17355] = 2,
    ACTIONS(1628), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17363] = 2,
    ACTIONS(1630), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17371] = 2,
    ACTIONS(1388), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17379] = 2,
    ACTIONS(1632), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17387] = 2,
    ACTIONS(1634), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17395] = 2,
    ACTIONS(1636), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17403] = 2,
    ACTIONS(1638), 1,
      aux_sym_class_generics_token1,
    ACTIONS(59), 2,
      sym__whitespace,
      sym_comment,
  [17411] = 2,
    ACTIONS(1640), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17419] = 2,
    ACTIONS(1642), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17427] = 2,
    ACTIONS(1644), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17435] = 2,
    ACTIONS(1646), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17443] = 2,
    ACTIONS(1648), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17451] = 2,
    ACTIONS(1650), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17459] = 2,
    ACTIONS(1652), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17467] = 2,
    ACTIONS(1654), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17475] = 2,
    ACTIONS(1656), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17483] = 2,
    ACTIONS(1658), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17491] = 2,
    ACTIONS(1382), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17499] = 2,
    ACTIONS(1660), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17507] = 2,
    ACTIONS(1662), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17515] = 2,
    ACTIONS(1664), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17523] = 2,
    ACTIONS(1666), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17531] = 2,
    ACTIONS(760), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1668), 1,
      sym__actor_word,
  [17549] = 2,
    ACTIONS(1670), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17557] = 2,
    ACTIONS(1672), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17565] = 2,
    ACTIONS(1674), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17573] = 2,
    ACTIONS(1676), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17581] = 2,
    ACTIONS(1678), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17589] = 2,
    ACTIONS(1680), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17597] = 2,
    ACTIONS(1682), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17605] = 2,
    ACTIONS(1684), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17613] = 2,
    ACTIONS(1686), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17621] = 2,
    ACTIONS(1688), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17629] = 2,
    ACTIONS(1690), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17637] = 2,
    ACTIONS(1692), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17645] = 2,
    ACTIONS(1694), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17653] = 2,
    ACTIONS(1696), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17661] = 2,
    ACTIONS(1698), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17669] = 2,
    ACTIONS(1700), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1702), 1,
      sym__actor_word,
  [17687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1704), 1,
      sym__actor_word,
  [17697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(1706), 1,
      sym__actor_word,
  [17707] = 2,
    ACTIONS(1708), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17715] = 2,
    ACTIONS(1710), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17723] = 2,
    ACTIONS(1712), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17731] = 2,
    ACTIONS(1714), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17739] = 2,
    ACTIONS(1716), 1,
      anon_sym_COLON,
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
  [SMALL_STATE(15)] = 1337,
  [SMALL_STATE(16)] = 1436,
  [SMALL_STATE(17)] = 1533,
  [SMALL_STATE(18)] = 1630,
  [SMALL_STATE(19)] = 1727,
  [SMALL_STATE(20)] = 1826,
  [SMALL_STATE(21)] = 1925,
  [SMALL_STATE(22)] = 2024,
  [SMALL_STATE(23)] = 2123,
  [SMALL_STATE(24)] = 2222,
  [SMALL_STATE(25)] = 2321,
  [SMALL_STATE(26)] = 2420,
  [SMALL_STATE(27)] = 2519,
  [SMALL_STATE(28)] = 2618,
  [SMALL_STATE(29)] = 2717,
  [SMALL_STATE(30)] = 2816,
  [SMALL_STATE(31)] = 2915,
  [SMALL_STATE(32)] = 3014,
  [SMALL_STATE(33)] = 3113,
  [SMALL_STATE(34)] = 3212,
  [SMALL_STATE(35)] = 3311,
  [SMALL_STATE(36)] = 3408,
  [SMALL_STATE(37)] = 3507,
  [SMALL_STATE(38)] = 3606,
  [SMALL_STATE(39)] = 3705,
  [SMALL_STATE(40)] = 3804,
  [SMALL_STATE(41)] = 3903,
  [SMALL_STATE(42)] = 4002,
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
  [SMALL_STATE(55)] = 5225,
  [SMALL_STATE(56)] = 5290,
  [SMALL_STATE(57)] = 5355,
  [SMALL_STATE(58)] = 5420,
  [SMALL_STATE(59)] = 5485,
  [SMALL_STATE(60)] = 5548,
  [SMALL_STATE(61)] = 5611,
  [SMALL_STATE(62)] = 5674,
  [SMALL_STATE(63)] = 5737,
  [SMALL_STATE(64)] = 5800,
  [SMALL_STATE(65)] = 5859,
  [SMALL_STATE(66)] = 5918,
  [SMALL_STATE(67)] = 5977,
  [SMALL_STATE(68)] = 6036,
  [SMALL_STATE(69)] = 6095,
  [SMALL_STATE(70)] = 6154,
  [SMALL_STATE(71)] = 6213,
  [SMALL_STATE(72)] = 6272,
  [SMALL_STATE(73)] = 6331,
  [SMALL_STATE(74)] = 6390,
  [SMALL_STATE(75)] = 6446,
  [SMALL_STATE(76)] = 6502,
  [SMALL_STATE(77)] = 6558,
  [SMALL_STATE(78)] = 6614,
  [SMALL_STATE(79)] = 6670,
  [SMALL_STATE(80)] = 6702,
  [SMALL_STATE(81)] = 6734,
  [SMALL_STATE(82)] = 6766,
  [SMALL_STATE(83)] = 6798,
  [SMALL_STATE(84)] = 6830,
  [SMALL_STATE(85)] = 6862,
  [SMALL_STATE(86)] = 6894,
  [SMALL_STATE(87)] = 6926,
  [SMALL_STATE(88)] = 6958,
  [SMALL_STATE(89)] = 6990,
  [SMALL_STATE(90)] = 7022,
  [SMALL_STATE(91)] = 7054,
  [SMALL_STATE(92)] = 7086,
  [SMALL_STATE(93)] = 7118,
  [SMALL_STATE(94)] = 7150,
  [SMALL_STATE(95)] = 7182,
  [SMALL_STATE(96)] = 7214,
  [SMALL_STATE(97)] = 7246,
  [SMALL_STATE(98)] = 7278,
  [SMALL_STATE(99)] = 7310,
  [SMALL_STATE(100)] = 7342,
  [SMALL_STATE(101)] = 7374,
  [SMALL_STATE(102)] = 7406,
  [SMALL_STATE(103)] = 7438,
  [SMALL_STATE(104)] = 7470,
  [SMALL_STATE(105)] = 7502,
  [SMALL_STATE(106)] = 7534,
  [SMALL_STATE(107)] = 7566,
  [SMALL_STATE(108)] = 7598,
  [SMALL_STATE(109)] = 7630,
  [SMALL_STATE(110)] = 7662,
  [SMALL_STATE(111)] = 7694,
  [SMALL_STATE(112)] = 7726,
  [SMALL_STATE(113)] = 7758,
  [SMALL_STATE(114)] = 7790,
  [SMALL_STATE(115)] = 7822,
  [SMALL_STATE(116)] = 7854,
  [SMALL_STATE(117)] = 7886,
  [SMALL_STATE(118)] = 7918,
  [SMALL_STATE(119)] = 7950,
  [SMALL_STATE(120)] = 7982,
  [SMALL_STATE(121)] = 8014,
  [SMALL_STATE(122)] = 8046,
  [SMALL_STATE(123)] = 8078,
  [SMALL_STATE(124)] = 8110,
  [SMALL_STATE(125)] = 8142,
  [SMALL_STATE(126)] = 8174,
  [SMALL_STATE(127)] = 8206,
  [SMALL_STATE(128)] = 8238,
  [SMALL_STATE(129)] = 8270,
  [SMALL_STATE(130)] = 8302,
  [SMALL_STATE(131)] = 8334,
  [SMALL_STATE(132)] = 8366,
  [SMALL_STATE(133)] = 8398,
  [SMALL_STATE(134)] = 8430,
  [SMALL_STATE(135)] = 8462,
  [SMALL_STATE(136)] = 8494,
  [SMALL_STATE(137)] = 8526,
  [SMALL_STATE(138)] = 8558,
  [SMALL_STATE(139)] = 8590,
  [SMALL_STATE(140)] = 8622,
  [SMALL_STATE(141)] = 8654,
  [SMALL_STATE(142)] = 8685,
  [SMALL_STATE(143)] = 8716,
  [SMALL_STATE(144)] = 8747,
  [SMALL_STATE(145)] = 8778,
  [SMALL_STATE(146)] = 8809,
  [SMALL_STATE(147)] = 8840,
  [SMALL_STATE(148)] = 8871,
  [SMALL_STATE(149)] = 8902,
  [SMALL_STATE(150)] = 8933,
  [SMALL_STATE(151)] = 8964,
  [SMALL_STATE(152)] = 8995,
  [SMALL_STATE(153)] = 9026,
  [SMALL_STATE(154)] = 9057,
  [SMALL_STATE(155)] = 9088,
  [SMALL_STATE(156)] = 9119,
  [SMALL_STATE(157)] = 9150,
  [SMALL_STATE(158)] = 9181,
  [SMALL_STATE(159)] = 9212,
  [SMALL_STATE(160)] = 9243,
  [SMALL_STATE(161)] = 9274,
  [SMALL_STATE(162)] = 9305,
  [SMALL_STATE(163)] = 9336,
  [SMALL_STATE(164)] = 9367,
  [SMALL_STATE(165)] = 9398,
  [SMALL_STATE(166)] = 9429,
  [SMALL_STATE(167)] = 9460,
  [SMALL_STATE(168)] = 9491,
  [SMALL_STATE(169)] = 9522,
  [SMALL_STATE(170)] = 9553,
  [SMALL_STATE(171)] = 9584,
  [SMALL_STATE(172)] = 9615,
  [SMALL_STATE(173)] = 9646,
  [SMALL_STATE(174)] = 9677,
  [SMALL_STATE(175)] = 9708,
  [SMALL_STATE(176)] = 9739,
  [SMALL_STATE(177)] = 9770,
  [SMALL_STATE(178)] = 9801,
  [SMALL_STATE(179)] = 9832,
  [SMALL_STATE(180)] = 9863,
  [SMALL_STATE(181)] = 9894,
  [SMALL_STATE(182)] = 9925,
  [SMALL_STATE(183)] = 9956,
  [SMALL_STATE(184)] = 9987,
  [SMALL_STATE(185)] = 10018,
  [SMALL_STATE(186)] = 10049,
  [SMALL_STATE(187)] = 10080,
  [SMALL_STATE(188)] = 10111,
  [SMALL_STATE(189)] = 10142,
  [SMALL_STATE(190)] = 10173,
  [SMALL_STATE(191)] = 10204,
  [SMALL_STATE(192)] = 10235,
  [SMALL_STATE(193)] = 10266,
  [SMALL_STATE(194)] = 10297,
  [SMALL_STATE(195)] = 10328,
  [SMALL_STATE(196)] = 10359,
  [SMALL_STATE(197)] = 10390,
  [SMALL_STATE(198)] = 10421,
  [SMALL_STATE(199)] = 10452,
  [SMALL_STATE(200)] = 10483,
  [SMALL_STATE(201)] = 10514,
  [SMALL_STATE(202)] = 10545,
  [SMALL_STATE(203)] = 10595,
  [SMALL_STATE(204)] = 10626,
  [SMALL_STATE(205)] = 10650,
  [SMALL_STATE(206)] = 10680,
  [SMALL_STATE(207)] = 10724,
  [SMALL_STATE(208)] = 10747,
  [SMALL_STATE(209)] = 10774,
  [SMALL_STATE(210)] = 10799,
  [SMALL_STATE(211)] = 10828,
  [SMALL_STATE(212)] = 10850,
  [SMALL_STATE(213)] = 10872,
  [SMALL_STATE(214)] = 10894,
  [SMALL_STATE(215)] = 10916,
  [SMALL_STATE(216)] = 10938,
  [SMALL_STATE(217)] = 10960,
  [SMALL_STATE(218)] = 10982,
  [SMALL_STATE(219)] = 11004,
  [SMALL_STATE(220)] = 11026,
  [SMALL_STATE(221)] = 11048,
  [SMALL_STATE(222)] = 11074,
  [SMALL_STATE(223)] = 11096,
  [SMALL_STATE(224)] = 11118,
  [SMALL_STATE(225)] = 11140,
  [SMALL_STATE(226)] = 11176,
  [SMALL_STATE(227)] = 11214,
  [SMALL_STATE(228)] = 11236,
  [SMALL_STATE(229)] = 11274,
  [SMALL_STATE(230)] = 11302,
  [SMALL_STATE(231)] = 11324,
  [SMALL_STATE(232)] = 11346,
  [SMALL_STATE(233)] = 11368,
  [SMALL_STATE(234)] = 11390,
  [SMALL_STATE(235)] = 11412,
  [SMALL_STATE(236)] = 11434,
  [SMALL_STATE(237)] = 11456,
  [SMALL_STATE(238)] = 11494,
  [SMALL_STATE(239)] = 11516,
  [SMALL_STATE(240)] = 11552,
  [SMALL_STATE(241)] = 11574,
  [SMALL_STATE(242)] = 11596,
  [SMALL_STATE(243)] = 11618,
  [SMALL_STATE(244)] = 11640,
  [SMALL_STATE(245)] = 11662,
  [SMALL_STATE(246)] = 11684,
  [SMALL_STATE(247)] = 11706,
  [SMALL_STATE(248)] = 11728,
  [SMALL_STATE(249)] = 11750,
  [SMALL_STATE(250)] = 11772,
  [SMALL_STATE(251)] = 11794,
  [SMALL_STATE(252)] = 11816,
  [SMALL_STATE(253)] = 11838,
  [SMALL_STATE(254)] = 11860,
  [SMALL_STATE(255)] = 11892,
  [SMALL_STATE(256)] = 11920,
  [SMALL_STATE(257)] = 11942,
  [SMALL_STATE(258)] = 11968,
  [SMALL_STATE(259)] = 12005,
  [SMALL_STATE(260)] = 12040,
  [SMALL_STATE(261)] = 12077,
  [SMALL_STATE(262)] = 12114,
  [SMALL_STATE(263)] = 12135,
  [SMALL_STATE(264)] = 12156,
  [SMALL_STATE(265)] = 12191,
  [SMALL_STATE(266)] = 12228,
  [SMALL_STATE(267)] = 12263,
  [SMALL_STATE(268)] = 12300,
  [SMALL_STATE(269)] = 12337,
  [SMALL_STATE(270)] = 12374,
  [SMALL_STATE(271)] = 12411,
  [SMALL_STATE(272)] = 12432,
  [SMALL_STATE(273)] = 12451,
  [SMALL_STATE(274)] = 12485,
  [SMALL_STATE(275)] = 12519,
  [SMALL_STATE(276)] = 12553,
  [SMALL_STATE(277)] = 12578,
  [SMALL_STATE(278)] = 12603,
  [SMALL_STATE(279)] = 12628,
  [SMALL_STATE(280)] = 12653,
  [SMALL_STATE(281)] = 12686,
  [SMALL_STATE(282)] = 12711,
  [SMALL_STATE(283)] = 12735,
  [SMALL_STATE(284)] = 12759,
  [SMALL_STATE(285)] = 12779,
  [SMALL_STATE(286)] = 12803,
  [SMALL_STATE(287)] = 12827,
  [SMALL_STATE(288)] = 12845,
  [SMALL_STATE(289)] = 12863,
  [SMALL_STATE(290)] = 12887,
  [SMALL_STATE(291)] = 12917,
  [SMALL_STATE(292)] = 12934,
  [SMALL_STATE(293)] = 12951,
  [SMALL_STATE(294)] = 12977,
  [SMALL_STATE(295)] = 13003,
  [SMALL_STATE(296)] = 13019,
  [SMALL_STATE(297)] = 13035,
  [SMALL_STATE(298)] = 13061,
  [SMALL_STATE(299)] = 13087,
  [SMALL_STATE(300)] = 13108,
  [SMALL_STATE(301)] = 13129,
  [SMALL_STATE(302)] = 13152,
  [SMALL_STATE(303)] = 13169,
  [SMALL_STATE(304)] = 13190,
  [SMALL_STATE(305)] = 13213,
  [SMALL_STATE(306)] = 13234,
  [SMALL_STATE(307)] = 13249,
  [SMALL_STATE(308)] = 13264,
  [SMALL_STATE(309)] = 13276,
  [SMALL_STATE(310)] = 13296,
  [SMALL_STATE(311)] = 13314,
  [SMALL_STATE(312)] = 13334,
  [SMALL_STATE(313)] = 13352,
  [SMALL_STATE(314)] = 13370,
  [SMALL_STATE(315)] = 13388,
  [SMALL_STATE(316)] = 13408,
  [SMALL_STATE(317)] = 13420,
  [SMALL_STATE(318)] = 13432,
  [SMALL_STATE(319)] = 13444,
  [SMALL_STATE(320)] = 13456,
  [SMALL_STATE(321)] = 13468,
  [SMALL_STATE(322)] = 13488,
  [SMALL_STATE(323)] = 13499,
  [SMALL_STATE(324)] = 13516,
  [SMALL_STATE(325)] = 13533,
  [SMALL_STATE(326)] = 13550,
  [SMALL_STATE(327)] = 13563,
  [SMALL_STATE(328)] = 13578,
  [SMALL_STATE(329)] = 13589,
  [SMALL_STATE(330)] = 13602,
  [SMALL_STATE(331)] = 13619,
  [SMALL_STATE(332)] = 13632,
  [SMALL_STATE(333)] = 13649,
  [SMALL_STATE(334)] = 13662,
  [SMALL_STATE(335)] = 13679,
  [SMALL_STATE(336)] = 13696,
  [SMALL_STATE(337)] = 13710,
  [SMALL_STATE(338)] = 13724,
  [SMALL_STATE(339)] = 13738,
  [SMALL_STATE(340)] = 13752,
  [SMALL_STATE(341)] = 13766,
  [SMALL_STATE(342)] = 13780,
  [SMALL_STATE(343)] = 13796,
  [SMALL_STATE(344)] = 13812,
  [SMALL_STATE(345)] = 13824,
  [SMALL_STATE(346)] = 13840,
  [SMALL_STATE(347)] = 13854,
  [SMALL_STATE(348)] = 13868,
  [SMALL_STATE(349)] = 13884,
  [SMALL_STATE(350)] = 13898,
  [SMALL_STATE(351)] = 13914,
  [SMALL_STATE(352)] = 13930,
  [SMALL_STATE(353)] = 13946,
  [SMALL_STATE(354)] = 13962,
  [SMALL_STATE(355)] = 13978,
  [SMALL_STATE(356)] = 13994,
  [SMALL_STATE(357)] = 14008,
  [SMALL_STATE(358)] = 14024,
  [SMALL_STATE(359)] = 14040,
  [SMALL_STATE(360)] = 14052,
  [SMALL_STATE(361)] = 14068,
  [SMALL_STATE(362)] = 14082,
  [SMALL_STATE(363)] = 14098,
  [SMALL_STATE(364)] = 14112,
  [SMALL_STATE(365)] = 14128,
  [SMALL_STATE(366)] = 14144,
  [SMALL_STATE(367)] = 14158,
  [SMALL_STATE(368)] = 14174,
  [SMALL_STATE(369)] = 14190,
  [SMALL_STATE(370)] = 14206,
  [SMALL_STATE(371)] = 14218,
  [SMALL_STATE(372)] = 14228,
  [SMALL_STATE(373)] = 14238,
  [SMALL_STATE(374)] = 14248,
  [SMALL_STATE(375)] = 14258,
  [SMALL_STATE(376)] = 14268,
  [SMALL_STATE(377)] = 14278,
  [SMALL_STATE(378)] = 14288,
  [SMALL_STATE(379)] = 14298,
  [SMALL_STATE(380)] = 14312,
  [SMALL_STATE(381)] = 14326,
  [SMALL_STATE(382)] = 14342,
  [SMALL_STATE(383)] = 14358,
  [SMALL_STATE(384)] = 14374,
  [SMALL_STATE(385)] = 14390,
  [SMALL_STATE(386)] = 14406,
  [SMALL_STATE(387)] = 14420,
  [SMALL_STATE(388)] = 14436,
  [SMALL_STATE(389)] = 14452,
  [SMALL_STATE(390)] = 14468,
  [SMALL_STATE(391)] = 14484,
  [SMALL_STATE(392)] = 14500,
  [SMALL_STATE(393)] = 14516,
  [SMALL_STATE(394)] = 14532,
  [SMALL_STATE(395)] = 14548,
  [SMALL_STATE(396)] = 14564,
  [SMALL_STATE(397)] = 14580,
  [SMALL_STATE(398)] = 14592,
  [SMALL_STATE(399)] = 14606,
  [SMALL_STATE(400)] = 14622,
  [SMALL_STATE(401)] = 14636,
  [SMALL_STATE(402)] = 14650,
  [SMALL_STATE(403)] = 14666,
  [SMALL_STATE(404)] = 14682,
  [SMALL_STATE(405)] = 14692,
  [SMALL_STATE(406)] = 14708,
  [SMALL_STATE(407)] = 14722,
  [SMALL_STATE(408)] = 14736,
  [SMALL_STATE(409)] = 14752,
  [SMALL_STATE(410)] = 14768,
  [SMALL_STATE(411)] = 14784,
  [SMALL_STATE(412)] = 14800,
  [SMALL_STATE(413)] = 14814,
  [SMALL_STATE(414)] = 14830,
  [SMALL_STATE(415)] = 14842,
  [SMALL_STATE(416)] = 14858,
  [SMALL_STATE(417)] = 14874,
  [SMALL_STATE(418)] = 14888,
  [SMALL_STATE(419)] = 14902,
  [SMALL_STATE(420)] = 14914,
  [SMALL_STATE(421)] = 14928,
  [SMALL_STATE(422)] = 14940,
  [SMALL_STATE(423)] = 14954,
  [SMALL_STATE(424)] = 14968,
  [SMALL_STATE(425)] = 14982,
  [SMALL_STATE(426)] = 14992,
  [SMALL_STATE(427)] = 15002,
  [SMALL_STATE(428)] = 15016,
  [SMALL_STATE(429)] = 15032,
  [SMALL_STATE(430)] = 15046,
  [SMALL_STATE(431)] = 15060,
  [SMALL_STATE(432)] = 15074,
  [SMALL_STATE(433)] = 15088,
  [SMALL_STATE(434)] = 15102,
  [SMALL_STATE(435)] = 15116,
  [SMALL_STATE(436)] = 15128,
  [SMALL_STATE(437)] = 15138,
  [SMALL_STATE(438)] = 15152,
  [SMALL_STATE(439)] = 15166,
  [SMALL_STATE(440)] = 15180,
  [SMALL_STATE(441)] = 15196,
  [SMALL_STATE(442)] = 15210,
  [SMALL_STATE(443)] = 15224,
  [SMALL_STATE(444)] = 15240,
  [SMALL_STATE(445)] = 15249,
  [SMALL_STATE(446)] = 15260,
  [SMALL_STATE(447)] = 15269,
  [SMALL_STATE(448)] = 15278,
  [SMALL_STATE(449)] = 15287,
  [SMALL_STATE(450)] = 15300,
  [SMALL_STATE(451)] = 15309,
  [SMALL_STATE(452)] = 15318,
  [SMALL_STATE(453)] = 15327,
  [SMALL_STATE(454)] = 15336,
  [SMALL_STATE(455)] = 15347,
  [SMALL_STATE(456)] = 15358,
  [SMALL_STATE(457)] = 15367,
  [SMALL_STATE(458)] = 15380,
  [SMALL_STATE(459)] = 15393,
  [SMALL_STATE(460)] = 15406,
  [SMALL_STATE(461)] = 15415,
  [SMALL_STATE(462)] = 15424,
  [SMALL_STATE(463)] = 15437,
  [SMALL_STATE(464)] = 15448,
  [SMALL_STATE(465)] = 15457,
  [SMALL_STATE(466)] = 15468,
  [SMALL_STATE(467)] = 15479,
  [SMALL_STATE(468)] = 15492,
  [SMALL_STATE(469)] = 15505,
  [SMALL_STATE(470)] = 15518,
  [SMALL_STATE(471)] = 15527,
  [SMALL_STATE(472)] = 15540,
  [SMALL_STATE(473)] = 15553,
  [SMALL_STATE(474)] = 15566,
  [SMALL_STATE(475)] = 15579,
  [SMALL_STATE(476)] = 15588,
  [SMALL_STATE(477)] = 15601,
  [SMALL_STATE(478)] = 15614,
  [SMALL_STATE(479)] = 15627,
  [SMALL_STATE(480)] = 15640,
  [SMALL_STATE(481)] = 15651,
  [SMALL_STATE(482)] = 15664,
  [SMALL_STATE(483)] = 15675,
  [SMALL_STATE(484)] = 15688,
  [SMALL_STATE(485)] = 15701,
  [SMALL_STATE(486)] = 15710,
  [SMALL_STATE(487)] = 15719,
  [SMALL_STATE(488)] = 15728,
  [SMALL_STATE(489)] = 15739,
  [SMALL_STATE(490)] = 15752,
  [SMALL_STATE(491)] = 15765,
  [SMALL_STATE(492)] = 15778,
  [SMALL_STATE(493)] = 15787,
  [SMALL_STATE(494)] = 15796,
  [SMALL_STATE(495)] = 15807,
  [SMALL_STATE(496)] = 15818,
  [SMALL_STATE(497)] = 15829,
  [SMALL_STATE(498)] = 15840,
  [SMALL_STATE(499)] = 15853,
  [SMALL_STATE(500)] = 15866,
  [SMALL_STATE(501)] = 15879,
  [SMALL_STATE(502)] = 15892,
  [SMALL_STATE(503)] = 15905,
  [SMALL_STATE(504)] = 15918,
  [SMALL_STATE(505)] = 15931,
  [SMALL_STATE(506)] = 15944,
  [SMALL_STATE(507)] = 15957,
  [SMALL_STATE(508)] = 15970,
  [SMALL_STATE(509)] = 15983,
  [SMALL_STATE(510)] = 15996,
  [SMALL_STATE(511)] = 16009,
  [SMALL_STATE(512)] = 16022,
  [SMALL_STATE(513)] = 16035,
  [SMALL_STATE(514)] = 16048,
  [SMALL_STATE(515)] = 16061,
  [SMALL_STATE(516)] = 16074,
  [SMALL_STATE(517)] = 16087,
  [SMALL_STATE(518)] = 16096,
  [SMALL_STATE(519)] = 16109,
  [SMALL_STATE(520)] = 16122,
  [SMALL_STATE(521)] = 16135,
  [SMALL_STATE(522)] = 16148,
  [SMALL_STATE(523)] = 16159,
  [SMALL_STATE(524)] = 16170,
  [SMALL_STATE(525)] = 16181,
  [SMALL_STATE(526)] = 16194,
  [SMALL_STATE(527)] = 16207,
  [SMALL_STATE(528)] = 16216,
  [SMALL_STATE(529)] = 16229,
  [SMALL_STATE(530)] = 16242,
  [SMALL_STATE(531)] = 16255,
  [SMALL_STATE(532)] = 16268,
  [SMALL_STATE(533)] = 16281,
  [SMALL_STATE(534)] = 16294,
  [SMALL_STATE(535)] = 16307,
  [SMALL_STATE(536)] = 16320,
  [SMALL_STATE(537)] = 16329,
  [SMALL_STATE(538)] = 16342,
  [SMALL_STATE(539)] = 16355,
  [SMALL_STATE(540)] = 16368,
  [SMALL_STATE(541)] = 16381,
  [SMALL_STATE(542)] = 16394,
  [SMALL_STATE(543)] = 16407,
  [SMALL_STATE(544)] = 16420,
  [SMALL_STATE(545)] = 16431,
  [SMALL_STATE(546)] = 16444,
  [SMALL_STATE(547)] = 16457,
  [SMALL_STATE(548)] = 16470,
  [SMALL_STATE(549)] = 16479,
  [SMALL_STATE(550)] = 16492,
  [SMALL_STATE(551)] = 16503,
  [SMALL_STATE(552)] = 16516,
  [SMALL_STATE(553)] = 16527,
  [SMALL_STATE(554)] = 16540,
  [SMALL_STATE(555)] = 16553,
  [SMALL_STATE(556)] = 16566,
  [SMALL_STATE(557)] = 16579,
  [SMALL_STATE(558)] = 16592,
  [SMALL_STATE(559)] = 16605,
  [SMALL_STATE(560)] = 16618,
  [SMALL_STATE(561)] = 16631,
  [SMALL_STATE(562)] = 16641,
  [SMALL_STATE(563)] = 16649,
  [SMALL_STATE(564)] = 16657,
  [SMALL_STATE(565)] = 16665,
  [SMALL_STATE(566)] = 16673,
  [SMALL_STATE(567)] = 16681,
  [SMALL_STATE(568)] = 16689,
  [SMALL_STATE(569)] = 16697,
  [SMALL_STATE(570)] = 16705,
  [SMALL_STATE(571)] = 16713,
  [SMALL_STATE(572)] = 16721,
  [SMALL_STATE(573)] = 16731,
  [SMALL_STATE(574)] = 16739,
  [SMALL_STATE(575)] = 16747,
  [SMALL_STATE(576)] = 16755,
  [SMALL_STATE(577)] = 16763,
  [SMALL_STATE(578)] = 16771,
  [SMALL_STATE(579)] = 16779,
  [SMALL_STATE(580)] = 16787,
  [SMALL_STATE(581)] = 16795,
  [SMALL_STATE(582)] = 16803,
  [SMALL_STATE(583)] = 16811,
  [SMALL_STATE(584)] = 16819,
  [SMALL_STATE(585)] = 16827,
  [SMALL_STATE(586)] = 16835,
  [SMALL_STATE(587)] = 16843,
  [SMALL_STATE(588)] = 16851,
  [SMALL_STATE(589)] = 16859,
  [SMALL_STATE(590)] = 16867,
  [SMALL_STATE(591)] = 16875,
  [SMALL_STATE(592)] = 16883,
  [SMALL_STATE(593)] = 16891,
  [SMALL_STATE(594)] = 16899,
  [SMALL_STATE(595)] = 16907,
  [SMALL_STATE(596)] = 16915,
  [SMALL_STATE(597)] = 16923,
  [SMALL_STATE(598)] = 16931,
  [SMALL_STATE(599)] = 16939,
  [SMALL_STATE(600)] = 16947,
  [SMALL_STATE(601)] = 16955,
  [SMALL_STATE(602)] = 16963,
  [SMALL_STATE(603)] = 16971,
  [SMALL_STATE(604)] = 16979,
  [SMALL_STATE(605)] = 16987,
  [SMALL_STATE(606)] = 16995,
  [SMALL_STATE(607)] = 17003,
  [SMALL_STATE(608)] = 17011,
  [SMALL_STATE(609)] = 17019,
  [SMALL_STATE(610)] = 17027,
  [SMALL_STATE(611)] = 17035,
  [SMALL_STATE(612)] = 17043,
  [SMALL_STATE(613)] = 17051,
  [SMALL_STATE(614)] = 17059,
  [SMALL_STATE(615)] = 17067,
  [SMALL_STATE(616)] = 17075,
  [SMALL_STATE(617)] = 17083,
  [SMALL_STATE(618)] = 17091,
  [SMALL_STATE(619)] = 17099,
  [SMALL_STATE(620)] = 17107,
  [SMALL_STATE(621)] = 17115,
  [SMALL_STATE(622)] = 17123,
  [SMALL_STATE(623)] = 17131,
  [SMALL_STATE(624)] = 17139,
  [SMALL_STATE(625)] = 17147,
  [SMALL_STATE(626)] = 17155,
  [SMALL_STATE(627)] = 17163,
  [SMALL_STATE(628)] = 17171,
  [SMALL_STATE(629)] = 17179,
  [SMALL_STATE(630)] = 17187,
  [SMALL_STATE(631)] = 17195,
  [SMALL_STATE(632)] = 17203,
  [SMALL_STATE(633)] = 17211,
  [SMALL_STATE(634)] = 17219,
  [SMALL_STATE(635)] = 17227,
  [SMALL_STATE(636)] = 17235,
  [SMALL_STATE(637)] = 17243,
  [SMALL_STATE(638)] = 17251,
  [SMALL_STATE(639)] = 17259,
  [SMALL_STATE(640)] = 17267,
  [SMALL_STATE(641)] = 17275,
  [SMALL_STATE(642)] = 17283,
  [SMALL_STATE(643)] = 17291,
  [SMALL_STATE(644)] = 17299,
  [SMALL_STATE(645)] = 17307,
  [SMALL_STATE(646)] = 17315,
  [SMALL_STATE(647)] = 17323,
  [SMALL_STATE(648)] = 17331,
  [SMALL_STATE(649)] = 17339,
  [SMALL_STATE(650)] = 17347,
  [SMALL_STATE(651)] = 17355,
  [SMALL_STATE(652)] = 17363,
  [SMALL_STATE(653)] = 17371,
  [SMALL_STATE(654)] = 17379,
  [SMALL_STATE(655)] = 17387,
  [SMALL_STATE(656)] = 17395,
  [SMALL_STATE(657)] = 17403,
  [SMALL_STATE(658)] = 17411,
  [SMALL_STATE(659)] = 17419,
  [SMALL_STATE(660)] = 17427,
  [SMALL_STATE(661)] = 17435,
  [SMALL_STATE(662)] = 17443,
  [SMALL_STATE(663)] = 17451,
  [SMALL_STATE(664)] = 17459,
  [SMALL_STATE(665)] = 17467,
  [SMALL_STATE(666)] = 17475,
  [SMALL_STATE(667)] = 17483,
  [SMALL_STATE(668)] = 17491,
  [SMALL_STATE(669)] = 17499,
  [SMALL_STATE(670)] = 17507,
  [SMALL_STATE(671)] = 17515,
  [SMALL_STATE(672)] = 17523,
  [SMALL_STATE(673)] = 17531,
  [SMALL_STATE(674)] = 17539,
  [SMALL_STATE(675)] = 17549,
  [SMALL_STATE(676)] = 17557,
  [SMALL_STATE(677)] = 17565,
  [SMALL_STATE(678)] = 17573,
  [SMALL_STATE(679)] = 17581,
  [SMALL_STATE(680)] = 17589,
  [SMALL_STATE(681)] = 17597,
  [SMALL_STATE(682)] = 17605,
  [SMALL_STATE(683)] = 17613,
  [SMALL_STATE(684)] = 17621,
  [SMALL_STATE(685)] = 17629,
  [SMALL_STATE(686)] = 17637,
  [SMALL_STATE(687)] = 17645,
  [SMALL_STATE(688)] = 17653,
  [SMALL_STATE(689)] = 17661,
  [SMALL_STATE(690)] = 17669,
  [SMALL_STATE(691)] = 17677,
  [SMALL_STATE(692)] = 17687,
  [SMALL_STATE(693)] = 17697,
  [SMALL_STATE(694)] = 17707,
  [SMALL_STATE(695)] = 17715,
  [SMALL_STATE(696)] = 17723,
  [SMALL_STATE(697)] = 17731,
  [SMALL_STATE(698)] = 17739,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, .production_id = 23),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(624),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(392),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(391),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(82),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(390),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(389),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(305),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(367),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(365),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(364),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(362),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(661),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(484),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__subdocument, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(483),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(481),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(459),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(457),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(101),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(229),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(622),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(396),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(395),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(120),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(394),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(393),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(299),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(382),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(381),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(369),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(368),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(646),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(491),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(490),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(489),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(468),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(467),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(80),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, .production_id = 23),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(574),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(408),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(409),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(143),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(410),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(411),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(303),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(413),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(415),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(416),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(428),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(618),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(513),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(512),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(511),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(508),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(507),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(17),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(229),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(600),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(405),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(403),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(161),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(402),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(399),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(300),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(388),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(387),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(385),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(384),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(592),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(500),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(499),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(498),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(479),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(477),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(199),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 4),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(578),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(539),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(540),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(541),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(542),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(543),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(545),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(546),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(555),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(556),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(55),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(401),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(310),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(312),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(74),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(241),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(243),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(244),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(246),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(247),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(207),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(207),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(249),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 6),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__subdocument, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__subdocument, 1),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 15),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 15),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 15),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 15),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 15),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 15),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 15),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 15),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 14),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 14),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 13),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 13),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 12),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 12),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 11),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 11),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 11),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 11),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_text, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_text, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_meta_format, 1),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_meta_format, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actor, 1),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_actor, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 6),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_tb, 1),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_tb, 1),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_bt, 1),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_bt, 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_rl, 1),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_rl, 1),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_task, 3),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_task, 3),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_lr, 1),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_lr, 1),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, .production_id = 22),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, .production_id = 22),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actor_repeat1, 2),
  [996] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2), SHIFT_REPEAT(255),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(621),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(276),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 18),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2),
  [1091] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2), SHIFT_REPEAT(284),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 20),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 19),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2), SHIFT_REPEAT(325),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2),
  [1195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2), SHIFT_REPEAT(338),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, .production_id = 16),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2),
  [1210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2), SHIFT_REPEAT(273),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2), SHIFT_REPEAT(361),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2), SHIFT_REPEAT(76),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 27),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 20),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 26),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 19),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 25),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 18),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 24),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2),
  [1255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2), SHIFT_REPEAT(49),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2),
  [1260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2), SHIFT_REPEAT(48),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_task_text, 1),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2),
  [1275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2), SHIFT_REPEAT(259),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 21),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_open_arrow, 1),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_open_arrow, 1),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_type, 1),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_type, 1),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, .production_id = 17),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, .production_id = 16),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, .production_id = 16),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, .production_id = 16),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement, 1),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6),
  [1378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, .production_id = 17),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, .production_id = 16),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1),
  [1432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_minus_sign, 1),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1520] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_plus_sign, 1),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1),
  [1704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1),
  [1706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement, 1),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
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
