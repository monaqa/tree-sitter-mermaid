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
#define STATE_COUNT 716
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 213
#define ALIAS_COUNT 21
#define TOKEN_COUNT 106
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
  aux_sym_diagram_pie_token1 = 56,
  sym__whitespace = 57,
  sym__newline = 58,
  sym_comment = 59,
  sym_type_directive = 60,
  sym_arg_directive = 61,
  aux_sym_direction_tb_token1 = 62,
  aux_sym_direction_bt_token1 = 63,
  aux_sym_direction_rl_token1 = 64,
  aux_sym_direction_lr_token1 = 65,
  aux_sym__rest_text_token1 = 66,
  sym__actor_word = 67,
  sym_solid_arrow = 68,
  sym_dotted_arrow = 69,
  sym_solid_open_arrow = 70,
  anon_sym_DASH_DASH_GT = 71,
  sym_solid_cross = 72,
  sym_dotted_cross = 73,
  sym_solid_point = 74,
  sym_dotted_point = 75,
  aux_sym_note_placement_left_token1 = 76,
  aux_sym_note_placement_right_token1 = 77,
  sym__class_name = 78,
  sym__alpha_num_token = 79,
  sym__bquote_string = 80,
  sym__dquote_string = 81,
  sym_class_reltype_aggregation = 82,
  anon_sym_LT_PIPE = 83,
  anon_sym_PIPE_GT = 84,
  anon_sym_LT = 85,
  anon_sym_GT = 86,
  anon_sym_DASH_DASH = 87,
  sym_class_linetype_dotted = 88,
  aux_sym_class_label_token1 = 89,
  anon_sym_LBRACK_STAR_RBRACK = 90,
  aux_sym_state_name_token1 = 91,
  aux_sym_state_hide_empty_description_token1 = 92,
  sym_state_id = 93,
  aux_sym_state_annotation_fork_token1 = 94,
  aux_sym_state_annotation_fork_token2 = 95,
  aux_sym_state_annotation_join_token1 = 96,
  aux_sym_state_annotation_join_token2 = 97,
  aux_sym_state_annotation_choice_token1 = 98,
  aux_sym_state_annotation_choice_token2 = 99,
  aux_sym_gantt_task_text_token1 = 100,
  sym_gantt_task_data = 101,
  aux_sym_pie_showdata_token1 = 102,
  sym_pie_title = 103,
  sym_pie_label = 104,
  sym_pie_value = 105,
  sym_source_file = 106,
  sym_directive = 107,
  sym__direction = 108,
  sym_diagram_sequence = 109,
  sym__sequence_stmt = 110,
  sym_sequence_stmt_participant = 111,
  sym_sequence_stmt_actor = 112,
  sym_actor = 113,
  sym_sequence_stmt_signal = 114,
  sym_signal_type = 115,
  sym_sequence_stmt_autonumber = 116,
  sym_sequence_stmt_activate = 117,
  sym_sequence_stmt_deactivate = 118,
  sym_sequence_stmt_note = 119,
  sym_sequence_stmt_links = 120,
  sym_sequence_stmt_link = 121,
  sym_sequence_stmt_properties = 122,
  sym_sequence_stmt_details = 123,
  sym_note_placement = 124,
  sym_sequence_stmt_title = 125,
  sym_sequence_stmt_loop = 126,
  sym_sequence_stmt_rect = 127,
  sym_sequence_stmt_opt = 128,
  aux_sym__subdocument = 129,
  sym_sequence_stmt_alt = 130,
  sym_sequence_stmt_par = 131,
  sym_diagram_class = 132,
  sym__class_stmt = 133,
  sym_class_stmt_relation = 134,
  sym_class_name = 135,
  sym_class_name_body = 136,
  sym_class_generics = 137,
  sym_class_relation = 138,
  sym__class_reltype = 139,
  sym__class_linetype = 140,
  sym_class_stmt_class = 141,
  sym_class_method_line = 142,
  sym_class_annotation_line = 143,
  sym_class_stmt_method = 144,
  sym_class_stmt_annotation = 145,
  sym_diagram_state = 146,
  sym__state_stmt = 147,
  sym_state_stmt_simple = 148,
  sym_state_stmt_arrow = 149,
  sym_state_stmt_composite = 150,
  sym_state_composite_body = 151,
  sym_state_stmt_annotation = 152,
  sym_state_alias = 153,
  sym_state_stmt_hide_empty_description = 154,
  sym__state_annotation = 155,
  sym_state_note = 156,
  sym_diagram_gantt = 157,
  sym__gantt_stmt = 158,
  sym_gantt_stmt_dateformat = 159,
  sym_gantt_stmt_inclusiveenddates = 160,
  sym_gantt_stmt_topaxis = 161,
  sym_gantt_stmt_axisformat = 162,
  sym_gantt_stmt_includes = 163,
  sym_gantt_stmt_excludes = 164,
  sym_gantt_stmt_todaymarker = 165,
  sym_gantt_stmt_title = 166,
  sym_gantt_stmt_section = 167,
  sym_gantt_stmt_task = 168,
  sym_diagram_pie = 169,
  sym__pie_stmt = 170,
  sym_pie_stmt_title = 171,
  sym_pie_stmt_element = 172,
  sym_direction_tb = 173,
  sym_direction_bt = 174,
  sym_direction_rl = 175,
  sym_direction_lr = 176,
  sym__rest_text = 177,
  sym_dotted_open_arrow = 178,
  sym_signal_plus_sign = 179,
  sym_signal_minus_sign = 180,
  sym_note_placement_left = 181,
  sym_note_placement_right = 182,
  sym_class_reltype_extension = 183,
  sym_class_reltype_composition = 184,
  sym_class_reltype_dependency = 185,
  sym_class_linetype_solid = 186,
  sym_class_label = 187,
  sym_state_name = 188,
  sym_state_arrow = 189,
  sym_state_description = 190,
  sym_state_hide_empty_description = 191,
  sym_state_division = 192,
  sym_state_annotation_fork = 193,
  sym_state_annotation_join = 194,
  sym_state_annotation_choice = 195,
  sym_gantt_meta_format = 196,
  sym_gantt_task_text = 197,
  sym_pie_showdata = 198,
  aux_sym_diagram_sequence_repeat1 = 199,
  aux_sym_diagram_sequence_repeat2 = 200,
  aux_sym_actor_repeat1 = 201,
  aux_sym_sequence_stmt_alt_repeat1 = 202,
  aux_sym_sequence_stmt_par_repeat1 = 203,
  aux_sym_diagram_class_repeat1 = 204,
  aux_sym_class_name_body_repeat1 = 205,
  aux_sym_class_stmt_class_repeat1 = 206,
  aux_sym_class_method_line_repeat1 = 207,
  aux_sym_diagram_state_repeat1 = 208,
  aux_sym_state_composite_body_repeat1 = 209,
  aux_sym_diagram_gantt_repeat1 = 210,
  aux_sym_diagram_pie_repeat1 = 211,
  aux_sym_gantt_task_text_repeat1 = 212,
  alias_sym_alias = 213,
  alias_sym_annotation = 214,
  alias_sym_class_classifier_abstract = 215,
  alias_sym_class_style_name = 216,
  alias_sym_class_visibility_internal = 217,
  alias_sym_class_visibility_private = 218,
  alias_sym_class_visibility_public = 219,
  alias_sym_gantt_axis_format = 220,
  alias_sym_gantt_end_dates = 221,
  alias_sym_gantt_excludes = 222,
  alias_sym_gantt_includes = 223,
  alias_sym_gantt_section = 224,
  alias_sym_gantt_title = 225,
  alias_sym_gantt_today_marker = 226,
  alias_sym_gantt_top_axis = 227,
  alias_sym_note_content = 228,
  alias_sym_sequence_stmt_alt_branch = 229,
  alias_sym_sequence_stmt_loop_inner = 230,
  alias_sym_sequence_stmt_opt_inner = 231,
  alias_sym_sequence_stmt_rect_inner = 232,
  alias_sym_title = 233,
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
  [aux_sym_diagram_pie_token1] = "pie",
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
  [aux_sym_pie_showdata_token1] = "showdata",
  [sym_pie_title] = "pie_title",
  [sym_pie_label] = "pie_label",
  [sym_pie_value] = "pie_value",
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
  [sym_diagram_pie] = "diagram_pie",
  [sym__pie_stmt] = "_pie_stmt",
  [sym_pie_stmt_title] = "pie_stmt_title",
  [sym_pie_stmt_element] = "pie_stmt_element",
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
  [sym_pie_showdata] = "pie_showdata",
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
  [aux_sym_diagram_pie_repeat1] = "diagram_pie_repeat1",
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
  [aux_sym_diagram_pie_token1] = aux_sym_diagram_pie_token1,
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
  [aux_sym_pie_showdata_token1] = aux_sym_pie_showdata_token1,
  [sym_pie_title] = sym_pie_title,
  [sym_pie_label] = sym_pie_label,
  [sym_pie_value] = sym_pie_value,
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
  [sym_diagram_pie] = sym_diagram_pie,
  [sym__pie_stmt] = sym__pie_stmt,
  [sym_pie_stmt_title] = sym_pie_stmt_title,
  [sym_pie_stmt_element] = sym_pie_stmt_element,
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
  [sym_pie_showdata] = sym_pie_showdata,
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
  [aux_sym_diagram_pie_repeat1] = aux_sym_diagram_pie_repeat1,
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
  [aux_sym_diagram_pie_token1] = {
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
  [aux_sym_pie_showdata_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_pie_title] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_label] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_value] = {
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
    .supertype = true,
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
    .supertype = true,
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
  [sym_diagram_pie] = {
    .visible = true,
    .named = true,
  },
  [sym__pie_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_pie_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_stmt_element] = {
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
  [sym_pie_showdata] = {
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
  [aux_sym_diagram_pie_repeat1] = {
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
  [5] = 2,
  [6] = 3,
  [7] = 3,
  [8] = 2,
  [9] = 3,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 21,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 21,
  [27] = 19,
  [28] = 23,
  [29] = 17,
  [30] = 30,
  [31] = 10,
  [32] = 14,
  [33] = 33,
  [34] = 34,
  [35] = 17,
  [36] = 23,
  [37] = 18,
  [38] = 38,
  [39] = 21,
  [40] = 19,
  [41] = 18,
  [42] = 18,
  [43] = 21,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 44,
  [48] = 46,
  [49] = 46,
  [50] = 44,
  [51] = 46,
  [52] = 52,
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
  [83] = 81,
  [84] = 84,
  [85] = 82,
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
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 102,
  [108] = 101,
  [109] = 97,
  [110] = 96,
  [111] = 90,
  [112] = 87,
  [113] = 80,
  [114] = 79,
  [115] = 88,
  [116] = 92,
  [117] = 93,
  [118] = 118,
  [119] = 106,
  [120] = 120,
  [121] = 104,
  [122] = 105,
  [123] = 118,
  [124] = 103,
  [125] = 100,
  [126] = 126,
  [127] = 99,
  [128] = 128,
  [129] = 98,
  [130] = 120,
  [131] = 126,
  [132] = 84,
  [133] = 128,
  [134] = 134,
  [135] = 86,
  [136] = 91,
  [137] = 94,
  [138] = 95,
  [139] = 134,
  [140] = 89,
  [141] = 106,
  [142] = 101,
  [143] = 118,
  [144] = 104,
  [145] = 82,
  [146] = 126,
  [147] = 128,
  [148] = 134,
  [149] = 86,
  [150] = 91,
  [151] = 84,
  [152] = 126,
  [153] = 120,
  [154] = 118,
  [155] = 104,
  [156] = 81,
  [157] = 93,
  [158] = 92,
  [159] = 88,
  [160] = 79,
  [161] = 94,
  [162] = 80,
  [163] = 95,
  [164] = 87,
  [165] = 98,
  [166] = 81,
  [167] = 99,
  [168] = 134,
  [169] = 90,
  [170] = 96,
  [171] = 97,
  [172] = 87,
  [173] = 89,
  [174] = 80,
  [175] = 102,
  [176] = 128,
  [177] = 106,
  [178] = 105,
  [179] = 103,
  [180] = 100,
  [181] = 100,
  [182] = 103,
  [183] = 105,
  [184] = 82,
  [185] = 102,
  [186] = 99,
  [187] = 98,
  [188] = 101,
  [189] = 97,
  [190] = 95,
  [191] = 94,
  [192] = 91,
  [193] = 84,
  [194] = 90,
  [195] = 86,
  [196] = 96,
  [197] = 120,
  [198] = 93,
  [199] = 92,
  [200] = 88,
  [201] = 79,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
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
  [220] = 81,
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
  [232] = 207,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 82,
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
  [253] = 253,
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
  [264] = 82,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 207,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 81,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 285,
  [292] = 285,
  [293] = 285,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 303,
  [305] = 303,
  [306] = 303,
  [307] = 214,
  [308] = 246,
  [309] = 309,
  [310] = 246,
  [311] = 311,
  [312] = 309,
  [313] = 209,
  [314] = 314,
  [315] = 309,
  [316] = 316,
  [317] = 309,
  [318] = 214,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 242,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 324,
  [330] = 215,
  [331] = 331,
  [332] = 206,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 263,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 208,
  [345] = 345,
  [346] = 346,
  [347] = 266,
  [348] = 252,
  [349] = 251,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 354,
  [362] = 355,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 359,
  [368] = 360,
  [369] = 354,
  [370] = 355,
  [371] = 371,
  [372] = 359,
  [373] = 360,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 374,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 386,
  [398] = 398,
  [399] = 388,
  [400] = 400,
  [401] = 389,
  [402] = 389,
  [403] = 403,
  [404] = 404,
  [405] = 374,
  [406] = 386,
  [407] = 407,
  [408] = 408,
  [409] = 388,
  [410] = 389,
  [411] = 388,
  [412] = 412,
  [413] = 413,
  [414] = 386,
  [415] = 415,
  [416] = 371,
  [417] = 364,
  [418] = 356,
  [419] = 353,
  [420] = 354,
  [421] = 374,
  [422] = 371,
  [423] = 364,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 356,
  [428] = 428,
  [429] = 353,
  [430] = 430,
  [431] = 431,
  [432] = 371,
  [433] = 364,
  [434] = 434,
  [435] = 356,
  [436] = 436,
  [437] = 353,
  [438] = 355,
  [439] = 403,
  [440] = 404,
  [441] = 441,
  [442] = 442,
  [443] = 403,
  [444] = 404,
  [445] = 360,
  [446] = 359,
  [447] = 442,
  [448] = 403,
  [449] = 404,
  [450] = 442,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 431,
  [455] = 442,
  [456] = 376,
  [457] = 457,
  [458] = 458,
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
  [480] = 461,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 459,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 481,
  [495] = 495,
  [496] = 484,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 481,
  [501] = 484,
  [502] = 502,
  [503] = 503,
  [504] = 468,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 502,
  [511] = 461,
  [512] = 482,
  [513] = 483,
  [514] = 503,
  [515] = 468,
  [516] = 502,
  [517] = 505,
  [518] = 488,
  [519] = 489,
  [520] = 459,
  [521] = 491,
  [522] = 522,
  [523] = 523,
  [524] = 502,
  [525] = 525,
  [526] = 503,
  [527] = 468,
  [528] = 488,
  [529] = 505,
  [530] = 530,
  [531] = 483,
  [532] = 482,
  [533] = 533,
  [534] = 489,
  [535] = 535,
  [536] = 509,
  [537] = 523,
  [538] = 538,
  [539] = 461,
  [540] = 482,
  [541] = 483,
  [542] = 542,
  [543] = 543,
  [544] = 491,
  [545] = 545,
  [546] = 488,
  [547] = 489,
  [548] = 459,
  [549] = 491,
  [550] = 525,
  [551] = 506,
  [552] = 495,
  [553] = 538,
  [554] = 542,
  [555] = 509,
  [556] = 523,
  [557] = 538,
  [558] = 481,
  [559] = 484,
  [560] = 503,
  [561] = 542,
  [562] = 525,
  [563] = 506,
  [564] = 495,
  [565] = 565,
  [566] = 509,
  [567] = 461,
  [568] = 523,
  [569] = 461,
  [570] = 538,
  [571] = 542,
  [572] = 505,
  [573] = 525,
  [574] = 506,
  [575] = 495,
  [576] = 493,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 587,
  [591] = 591,
  [592] = 588,
  [593] = 593,
  [594] = 593,
  [595] = 588,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 578,
  [601] = 579,
  [602] = 580,
  [603] = 581,
  [604] = 582,
  [605] = 605,
  [606] = 583,
  [607] = 584,
  [608] = 585,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 577,
  [615] = 615,
  [616] = 616,
  [617] = 588,
  [618] = 612,
  [619] = 599,
  [620] = 620,
  [621] = 621,
  [622] = 578,
  [623] = 579,
  [624] = 580,
  [625] = 581,
  [626] = 582,
  [627] = 627,
  [628] = 583,
  [629] = 584,
  [630] = 585,
  [631] = 631,
  [632] = 578,
  [633] = 615,
  [634] = 593,
  [635] = 635,
  [636] = 636,
  [637] = 597,
  [638] = 605,
  [639] = 588,
  [640] = 578,
  [641] = 588,
  [642] = 578,
  [643] = 643,
  [644] = 609,
  [645] = 645,
  [646] = 577,
  [647] = 611,
  [648] = 636,
  [649] = 635,
  [650] = 612,
  [651] = 599,
  [652] = 652,
  [653] = 653,
  [654] = 492,
  [655] = 655,
  [656] = 591,
  [657] = 620,
  [658] = 658,
  [659] = 609,
  [660] = 593,
  [661] = 661,
  [662] = 655,
  [663] = 611,
  [664] = 615,
  [665] = 593,
  [666] = 635,
  [667] = 652,
  [668] = 653,
  [669] = 636,
  [670] = 655,
  [671] = 591,
  [672] = 620,
  [673] = 658,
  [674] = 597,
  [675] = 605,
  [676] = 676,
  [677] = 605,
  [678] = 611,
  [679] = 609,
  [680] = 577,
  [681] = 643,
  [682] = 652,
  [683] = 653,
  [684] = 497,
  [685] = 655,
  [686] = 591,
  [687] = 620,
  [688] = 658,
  [689] = 579,
  [690] = 580,
  [691] = 581,
  [692] = 582,
  [693] = 597,
  [694] = 658,
  [695] = 612,
  [696] = 599,
  [697] = 645,
  [698] = 84,
  [699] = 583,
  [700] = 615,
  [701] = 593,
  [702] = 702,
  [703] = 635,
  [704] = 636,
  [705] = 584,
  [706] = 585,
  [707] = 652,
  [708] = 653,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(201);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(251);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '>') ADVANCE(563);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(557);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '~') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(406);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(403);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(494);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(463);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(398);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '%') ADVANCE(306);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(332);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(308);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '%') ADVANCE(306);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(332);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(308);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '%') ADVANCE(306);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(332);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(308);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '%') ADVANCE(307);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '%') ADVANCE(307);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '%') ADVANCE(307);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(251);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '~') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '%') ADVANCE(576);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead == '[') ADVANCE(577);
      if (lookahead == '}') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(593);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(594);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(744);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(744);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(555);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '<') ADVANCE(561);
      if (lookahead == '>') ADVANCE(562);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(557);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '~') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 20:
      if (lookahead == '%') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == '%') ADVANCE(207);
      END_STATE();
    case 22:
      if (lookahead == '%') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == '%') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(301);
      END_STATE();
    case 24:
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(240);
      END_STATE();
    case 25:
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(289);
      END_STATE();
    case 26:
      if (lookahead == '%') ADVANCE(650);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(651);
      END_STATE();
    case 27:
      if (lookahead == '%') ADVANCE(732);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(733);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(662);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(389);
      if (lookahead == '>') ADVANCE(385);
      if (lookahead == 'x') ADVANCE(387);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(388);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '>') ADVANCE(383);
      if (lookahead == 'x') ADVANCE(386);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '[') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(564);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(566);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(568);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(232);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(258);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(242);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '<') ADVANCE(254);
      END_STATE();
    case 44:
      if (lookahead == '<') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(255);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(559);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(384);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(652);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(654);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(656);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(117);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(122);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(124);
      END_STATE();
    case 57:
      if (lookahead == '[') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(621);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(653);
      END_STATE();
    case 60:
      if (lookahead == ']') ADVANCE(655);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(657);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == '`') ADVANCE(554);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(734);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(294);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(170);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(141);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(142);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(148);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(149);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(143);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 103:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(390);
      END_STATE();
    case 104:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(391);
      END_STATE();
    case 105:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 106:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 107:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 108:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 109:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(161);
      END_STATE();
    case 110:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(176);
      END_STATE();
    case 112:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 125:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(62);
      END_STATE();
    case 126:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 127:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 128:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 129:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 130:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 131:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 132:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 133:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(257);
      END_STATE();
    case 134:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      END_STATE();
    case 136:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(647);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 141:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 142:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 143:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 144:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 145:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 146:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 147:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 148:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 149:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 150:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 151:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 152:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 153:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(177);
      END_STATE();
    case 154:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 155:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 156:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 157:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 158:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 162:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      END_STATE();
    case 163:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 164:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 165:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 166:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 167:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 168:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 169:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 170:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 171:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 172:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 174:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 175:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 176:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 177:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 178:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 179:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 180:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 181:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 182:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 183:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      END_STATE();
    case 185:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(293);
      if (lookahead == '%') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 186:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(17);
      END_STATE();
    case 187:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(65);
      END_STATE();
    case 188:
      if (eof) ADVANCE(201);
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '%') ADVANCE(306);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(326);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(332);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(308);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 189:
      if (eof) ADVANCE(201);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '<') ADVANCE(561);
      if (lookahead == '>') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(556);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '~') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(68);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 190:
      if (eof) ADVANCE(201);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead == '~') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 191:
      if (eof) ADVANCE(201);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '"') ADVANCE(737);
      if (lookahead == '%') ADVANCE(738);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 192:
      if (eof) ADVANCE(201);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(68);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(180);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 193:
      if (eof) ADVANCE(201);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(251);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(553);
      END_STATE();
    case 194:
      if (eof) ADVANCE(201);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '%') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(725);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(663);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(679);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 195:
      if (eof) ADVANCE(201);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '%') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 196:
      if (eof) ADVANCE(201);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(634);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(635);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(639);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 197:
      if (eof) ADVANCE(201);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '~') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(634);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(635);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(639);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 198:
      if (eof) ADVANCE(201);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(634);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(635);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(639);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 199:
      if (eof) ADVANCE(201);
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == '~') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 200:
      if (eof) ADVANCE(201);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '`') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_RBRACE_PERCENT_PERCENT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_diagram_sequence_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_actor_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_autonumber_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_activate_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_deactivate_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_links_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_link_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_properties_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_details_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_title_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token2);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_rect_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_opt_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token2);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(464);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token2);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_diagram_class_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_diagram_class_token2);
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(553);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(565);
      if (lookahead == '>') ADVANCE(383);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      if (lookahead == '-') ADVANCE(179);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_diagram_state_token2);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_state_stmt_simple_token1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_diagram_gantt_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_dateformat_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_inclusiveenddates_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_topaxis_token1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_axisformat_token1);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_includes_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_excludes_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_todaymarker_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_section_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_diagram_pie_token1);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(289);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(733);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(301);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(293);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(289);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(282);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(293);
      if (lookahead == '%') ADVANCE(290);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_direction_tb_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_direction_bt_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_direction_rl_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_direction_lr_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '{') ADVANCE(380);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(11);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '{') ADVANCE(203);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(11);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(11);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '%') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '%') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(370);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(370);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_solid_arrow);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_dotted_arrow);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_solid_open_arrow);
      if (lookahead == '>') ADVANCE(381);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(382);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_solid_cross);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_dotted_cross);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_solid_point);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_dotted_point);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_note_placement_left_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_note_placement_right_token1);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'a') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'l') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(505);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(437);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(530);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(523);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(428);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(532);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(533);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(399);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(447);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(496);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(487);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(529);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(522);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(429);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__bquote_string);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__dquote_string);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(254);
      if (lookahead == '|') ADVANCE(558);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '|') ADVANCE(558);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(255);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == ')') ADVANCE(389);
      if (lookahead == '>') ADVANCE(384);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(384);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_class_linetype_dotted);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '{') ADVANCE(620);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(570);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '%') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '*') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '-') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ']') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(611);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(620);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_state_hide_empty_description_token1);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(649);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '{') ADVANCE(11);
      if (lookahead != 0) ADVANCE(649);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '%') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(651);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(651);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token1);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token2);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token2);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token1);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token2);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '{') ADVANCE(729);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(660);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(660);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(664);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(683);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(729);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '{') ADVANCE(733);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(731);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(731);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '%') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(733);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(733);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_pie_showdata_token1);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(736);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(11);
      if (lookahead != 0) ADVANCE(736);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '"') ADVANCE(743);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(16);
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '%') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_pie_label);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_pie_value);
      if (lookahead == '.') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_pie_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 189},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 188},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 188},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 188},
  [34] = {.lex_state = 188},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 188},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 188},
  [45] = {.lex_state = 188},
  [46] = {.lex_state = 188},
  [47] = {.lex_state = 188},
  [48] = {.lex_state = 188},
  [49] = {.lex_state = 188},
  [50] = {.lex_state = 188},
  [51] = {.lex_state = 188},
  [52] = {.lex_state = 188},
  [53] = {.lex_state = 188},
  [54] = {.lex_state = 194},
  [55] = {.lex_state = 194},
  [56] = {.lex_state = 196},
  [57] = {.lex_state = 194},
  [58] = {.lex_state = 194},
  [59] = {.lex_state = 194},
  [60] = {.lex_state = 196},
  [61] = {.lex_state = 196},
  [62] = {.lex_state = 196},
  [63] = {.lex_state = 196},
  [64] = {.lex_state = 196},
  [65] = {.lex_state = 196},
  [66] = {.lex_state = 196},
  [67] = {.lex_state = 196},
  [68] = {.lex_state = 196},
  [69] = {.lex_state = 196},
  [70] = {.lex_state = 196},
  [71] = {.lex_state = 196},
  [72] = {.lex_state = 196},
  [73] = {.lex_state = 196},
  [74] = {.lex_state = 196},
  [75] = {.lex_state = 196},
  [76] = {.lex_state = 196},
  [77] = {.lex_state = 196},
  [78] = {.lex_state = 196},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 188},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 188},
  [144] = {.lex_state = 188},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 188},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 188},
  [150] = {.lex_state = 188},
  [151] = {.lex_state = 188},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 188},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 188},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 188},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 188},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 188},
  [168] = {.lex_state = 188},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 188},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 188},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 188},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 188},
  [182] = {.lex_state = 188},
  [183] = {.lex_state = 188},
  [184] = {.lex_state = 188},
  [185] = {.lex_state = 188},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 188},
  [189] = {.lex_state = 188},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 188},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 188},
  [197] = {.lex_state = 188},
  [198] = {.lex_state = 188},
  [199] = {.lex_state = 188},
  [200] = {.lex_state = 188},
  [201] = {.lex_state = 188},
  [202] = {.lex_state = 189},
  [203] = {.lex_state = 197},
  [204] = {.lex_state = 197},
  [205] = {.lex_state = 189},
  [206] = {.lex_state = 198},
  [207] = {.lex_state = 198},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 189},
  [210] = {.lex_state = 196},
  [211] = {.lex_state = 196},
  [212] = {.lex_state = 196},
  [213] = {.lex_state = 18},
  [214] = {.lex_state = 18},
  [215] = {.lex_state = 189},
  [216] = {.lex_state = 200},
  [217] = {.lex_state = 196},
  [218] = {.lex_state = 196},
  [219] = {.lex_state = 196},
  [220] = {.lex_state = 194},
  [221] = {.lex_state = 196},
  [222] = {.lex_state = 194},
  [223] = {.lex_state = 197},
  [224] = {.lex_state = 194},
  [225] = {.lex_state = 196},
  [226] = {.lex_state = 196},
  [227] = {.lex_state = 196},
  [228] = {.lex_state = 196},
  [229] = {.lex_state = 194},
  [230] = {.lex_state = 196},
  [231] = {.lex_state = 194},
  [232] = {.lex_state = 196},
  [233] = {.lex_state = 194},
  [234] = {.lex_state = 200},
  [235] = {.lex_state = 194},
  [236] = {.lex_state = 196},
  [237] = {.lex_state = 196},
  [238] = {.lex_state = 196},
  [239] = {.lex_state = 194},
  [240] = {.lex_state = 196},
  [241] = {.lex_state = 196},
  [242] = {.lex_state = 189},
  [243] = {.lex_state = 18},
  [244] = {.lex_state = 196},
  [245] = {.lex_state = 196},
  [246] = {.lex_state = 18},
  [247] = {.lex_state = 196},
  [248] = {.lex_state = 196},
  [249] = {.lex_state = 200},
  [250] = {.lex_state = 196},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 194},
  [254] = {.lex_state = 194},
  [255] = {.lex_state = 194},
  [256] = {.lex_state = 194},
  [257] = {.lex_state = 194},
  [258] = {.lex_state = 194},
  [259] = {.lex_state = 196},
  [260] = {.lex_state = 7},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 200},
  [263] = {.lex_state = 189},
  [264] = {.lex_state = 192},
  [265] = {.lex_state = 7},
  [266] = {.lex_state = 189},
  [267] = {.lex_state = 192},
  [268] = {.lex_state = 196},
  [269] = {.lex_state = 192},
  [270] = {.lex_state = 7},
  [271] = {.lex_state = 7},
  [272] = {.lex_state = 7},
  [273] = {.lex_state = 7},
  [274] = {.lex_state = 192},
  [275] = {.lex_state = 192},
  [276] = {.lex_state = 200},
  [277] = {.lex_state = 200},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 7},
  [280] = {.lex_state = 7},
  [281] = {.lex_state = 189},
  [282] = {.lex_state = 7},
  [283] = {.lex_state = 189},
  [284] = {.lex_state = 192},
  [285] = {.lex_state = 200},
  [286] = {.lex_state = 192},
  [287] = {.lex_state = 192},
  [288] = {.lex_state = 192},
  [289] = {.lex_state = 192},
  [290] = {.lex_state = 192},
  [291] = {.lex_state = 200},
  [292] = {.lex_state = 200},
  [293] = {.lex_state = 200},
  [294] = {.lex_state = 193},
  [295] = {.lex_state = 18},
  [296] = {.lex_state = 193},
  [297] = {.lex_state = 7},
  [298] = {.lex_state = 193},
  [299] = {.lex_state = 193},
  [300] = {.lex_state = 193},
  [301] = {.lex_state = 193},
  [302] = {.lex_state = 18},
  [303] = {.lex_state = 6},
  [304] = {.lex_state = 6},
  [305] = {.lex_state = 6},
  [306] = {.lex_state = 6},
  [307] = {.lex_state = 190},
  [308] = {.lex_state = 190},
  [309] = {.lex_state = 192},
  [310] = {.lex_state = 199},
  [311] = {.lex_state = 190},
  [312] = {.lex_state = 192},
  [313] = {.lex_state = 197},
  [314] = {.lex_state = 190},
  [315] = {.lex_state = 192},
  [316] = {.lex_state = 191},
  [317] = {.lex_state = 192},
  [318] = {.lex_state = 199},
  [319] = {.lex_state = 190},
  [320] = {.lex_state = 190},
  [321] = {.lex_state = 192},
  [322] = {.lex_state = 197},
  [323] = {.lex_state = 192},
  [324] = {.lex_state = 189},
  [325] = {.lex_state = 192},
  [326] = {.lex_state = 190},
  [327] = {.lex_state = 190},
  [328] = {.lex_state = 192},
  [329] = {.lex_state = 189},
  [330] = {.lex_state = 197},
  [331] = {.lex_state = 19},
  [332] = {.lex_state = 198},
  [333] = {.lex_state = 190},
  [334] = {.lex_state = 190},
  [335] = {.lex_state = 190},
  [336] = {.lex_state = 190},
  [337] = {.lex_state = 197},
  [338] = {.lex_state = 193},
  [339] = {.lex_state = 193},
  [340] = {.lex_state = 193},
  [341] = {.lex_state = 193},
  [342] = {.lex_state = 195},
  [343] = {.lex_state = 195},
  [344] = {.lex_state = 195},
  [345] = {.lex_state = 189},
  [346] = {.lex_state = 197},
  [347] = {.lex_state = 197},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 5},
  [350] = {.lex_state = 195},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 4},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 4},
  [356] = {.lex_state = 4},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 4},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 4},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 4},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 4},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 4},
  [370] = {.lex_state = 4},
  [371] = {.lex_state = 4},
  [372] = {.lex_state = 4},
  [373] = {.lex_state = 4},
  [374] = {.lex_state = 4},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 19},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 4},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 4},
  [389] = {.lex_state = 4},
  [390] = {.lex_state = 189},
  [391] = {.lex_state = 189},
  [392] = {.lex_state = 4},
  [393] = {.lex_state = 190},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 4},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 4},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 4},
  [402] = {.lex_state = 4},
  [403] = {.lex_state = 189},
  [404] = {.lex_state = 189},
  [405] = {.lex_state = 4},
  [406] = {.lex_state = 4},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 4},
  [410] = {.lex_state = 4},
  [411] = {.lex_state = 4},
  [412] = {.lex_state = 190},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 4},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 4},
  [417] = {.lex_state = 4},
  [418] = {.lex_state = 4},
  [419] = {.lex_state = 4},
  [420] = {.lex_state = 4},
  [421] = {.lex_state = 4},
  [422] = {.lex_state = 4},
  [423] = {.lex_state = 4},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 30},
  [427] = {.lex_state = 4},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 4},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 19},
  [432] = {.lex_state = 4},
  [433] = {.lex_state = 4},
  [434] = {.lex_state = 190},
  [435] = {.lex_state = 4},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 4},
  [438] = {.lex_state = 4},
  [439] = {.lex_state = 189},
  [440] = {.lex_state = 189},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 190},
  [443] = {.lex_state = 189},
  [444] = {.lex_state = 189},
  [445] = {.lex_state = 4},
  [446] = {.lex_state = 4},
  [447] = {.lex_state = 190},
  [448] = {.lex_state = 189},
  [449] = {.lex_state = 189},
  [450] = {.lex_state = 190},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 6},
  [453] = {.lex_state = 30},
  [454] = {.lex_state = 19},
  [455] = {.lex_state = 190},
  [456] = {.lex_state = 19},
  [457] = {.lex_state = 6},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 23},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 189},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 23},
  [464] = {.lex_state = 23},
  [465] = {.lex_state = 23},
  [466] = {.lex_state = 23},
  [467] = {.lex_state = 23},
  [468] = {.lex_state = 23},
  [469] = {.lex_state = 23},
  [470] = {.lex_state = 23},
  [471] = {.lex_state = 23},
  [472] = {.lex_state = 19},
  [473] = {.lex_state = 195},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 189},
  [481] = {.lex_state = 23},
  [482] = {.lex_state = 189},
  [483] = {.lex_state = 189},
  [484] = {.lex_state = 23},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 23},
  [489] = {.lex_state = 23},
  [490] = {.lex_state = 23},
  [491] = {.lex_state = 23},
  [492] = {.lex_state = 19},
  [493] = {.lex_state = 19},
  [494] = {.lex_state = 23},
  [495] = {.lex_state = 23},
  [496] = {.lex_state = 23},
  [497] = {.lex_state = 19},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 23},
  [501] = {.lex_state = 23},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 23},
  [504] = {.lex_state = 23},
  [505] = {.lex_state = 23},
  [506] = {.lex_state = 23},
  [507] = {.lex_state = 23},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 23},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 189},
  [512] = {.lex_state = 189},
  [513] = {.lex_state = 189},
  [514] = {.lex_state = 23},
  [515] = {.lex_state = 23},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 23},
  [518] = {.lex_state = 23},
  [519] = {.lex_state = 23},
  [520] = {.lex_state = 23},
  [521] = {.lex_state = 23},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 23},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 23},
  [526] = {.lex_state = 23},
  [527] = {.lex_state = 23},
  [528] = {.lex_state = 23},
  [529] = {.lex_state = 23},
  [530] = {.lex_state = 195},
  [531] = {.lex_state = 189},
  [532] = {.lex_state = 189},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 23},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 23},
  [537] = {.lex_state = 23},
  [538] = {.lex_state = 23},
  [539] = {.lex_state = 189},
  [540] = {.lex_state = 189},
  [541] = {.lex_state = 189},
  [542] = {.lex_state = 23},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 23},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 23},
  [547] = {.lex_state = 23},
  [548] = {.lex_state = 23},
  [549] = {.lex_state = 23},
  [550] = {.lex_state = 23},
  [551] = {.lex_state = 23},
  [552] = {.lex_state = 23},
  [553] = {.lex_state = 23},
  [554] = {.lex_state = 23},
  [555] = {.lex_state = 23},
  [556] = {.lex_state = 23},
  [557] = {.lex_state = 23},
  [558] = {.lex_state = 23},
  [559] = {.lex_state = 23},
  [560] = {.lex_state = 23},
  [561] = {.lex_state = 23},
  [562] = {.lex_state = 23},
  [563] = {.lex_state = 23},
  [564] = {.lex_state = 23},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 23},
  [567] = {.lex_state = 189},
  [568] = {.lex_state = 23},
  [569] = {.lex_state = 189},
  [570] = {.lex_state = 23},
  [571] = {.lex_state = 23},
  [572] = {.lex_state = 23},
  [573] = {.lex_state = 23},
  [574] = {.lex_state = 23},
  [575] = {.lex_state = 23},
  [576] = {.lex_state = 4},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 185},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 29},
  [587] = {.lex_state = 24},
  [588] = {.lex_state = 25},
  [589] = {.lex_state = 196},
  [590] = {.lex_state = 24},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 25},
  [593] = {.lex_state = 189},
  [594] = {.lex_state = 189},
  [595] = {.lex_state = 25},
  [596] = {.lex_state = 26},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 27},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 185},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 4},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 4},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 25},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 193},
  [622] = {.lex_state = 185},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 185},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 189},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 25},
  [640] = {.lex_state = 185},
  [641] = {.lex_state = 25},
  [642] = {.lex_state = 185},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 4},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 189},
  [661] = {.lex_state = 193},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 189},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 196},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 4},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 189},
  [702] = {.lex_state = 26},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 193},
  [710] = {.lex_state = 189},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
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
    [aux_sym_diagram_pie_token1] = ACTIONS(1),
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
    [aux_sym_pie_showdata_token1] = ACTIONS(1),
    [sym_pie_label] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(713),
    [sym_directive] = STATE(281),
    [sym_diagram_sequence] = STATE(712),
    [sym_diagram_class] = STATE(712),
    [sym_diagram_state] = STATE(712),
    [sym_diagram_gantt] = STATE(712),
    [sym_diagram_pie] = STATE(712),
    [aux_sym_diagram_sequence_repeat1] = STATE(281),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(5),
    [aux_sym_diagram_sequence_token1] = ACTIONS(7),
    [aux_sym_diagram_class_token1] = ACTIONS(9),
    [aux_sym_diagram_class_token2] = ACTIONS(11),
    [aux_sym_diagram_state_token1] = ACTIONS(13),
    [aux_sym_diagram_state_token2] = ACTIONS(15),
    [aux_sym_diagram_gantt_token1] = ACTIONS(17),
    [aux_sym_diagram_pie_token1] = ACTIONS(19),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(10), 1,
      aux_sym__subdocument,
    STATE(140), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(291), 1,
      sym_actor,
    STATE(404), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(128), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(67), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(105), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(89), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(285), 1,
      sym_actor,
    STATE(403), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(133), 18,
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
    ACTIONS(23), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(10), 1,
      aux_sym__subdocument,
    STATE(140), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(291), 1,
      sym_actor,
    STATE(440), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(128), 18,
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
    ACTIONS(23), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(10), 1,
      aux_sym__subdocument,
    STATE(140), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(291), 1,
      sym_actor,
    STATE(449), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(128), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(67), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(105), 1,
      sym__newline,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(89), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(285), 1,
      sym_actor,
    STATE(448), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(133), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(67), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(105), 1,
      sym__newline,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(89), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(285), 1,
      sym_actor,
    STATE(439), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(133), 18,
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
    ACTIONS(23), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(10), 1,
      aux_sym__subdocument,
    STATE(140), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(291), 1,
      sym_actor,
    STATE(444), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(128), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(67), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(105), 1,
      sym__newline,
    ACTIONS(117), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(89), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(285), 1,
      sym_actor,
    STATE(443), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(133), 18,
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
    ACTIONS(61), 1,
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
    STATE(10), 1,
      aux_sym__subdocument,
    STATE(140), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(291), 1,
      sym_actor,
    ACTIONS(158), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(128), 18,
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
    ACTIONS(61), 1,
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
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(89), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(285), 1,
      sym_actor,
    ACTIONS(158), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(133), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(67), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(105), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__subdocument,
    STATE(89), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(285), 1,
      sym_actor,
    ACTIONS(232), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(133), 18,
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
    ACTIONS(23), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(10), 1,
      aux_sym__subdocument,
    STATE(140), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(291), 1,
      sym_actor,
    ACTIONS(234), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(128), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    STATE(40), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [1339] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(27), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [1438] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(19), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [1537] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(21), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [1636] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [1735] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [1834] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(39), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [1933] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [2032] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [2131] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [2230] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(328), 1,
      sym__newline,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(292), 1,
      sym_actor,
    STATE(30), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(176), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [2426] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [2525] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(334), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [2624] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(336), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [2723] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(338), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [2822] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(294), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 1,
      sym__newline,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(292), 1,
      sym_actor,
    STATE(34), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(176), 18,
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
  [2919] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(158), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(175), 1,
      sym__actor_word,
    ACTIONS(344), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(347), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(350), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(353), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(356), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(359), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(362), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(365), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(368), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(371), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(374), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(377), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(380), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(383), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(386), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(389), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(392), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(395), 1,
      sym__newline,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [3018] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(398), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [3117] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(294), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 1,
      sym__newline,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(292), 1,
      sym_actor,
    STATE(38), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(176), 18,
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
  [3214] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(404), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(407), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(410), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(413), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(416), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(419), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(422), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(425), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(428), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(431), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(434), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(437), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(440), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(443), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(446), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(449), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(452), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(455), 1,
      sym__newline,
    ACTIONS(458), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(292), 1,
      sym_actor,
    STATE(34), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(176), 18,
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
  [3311] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(461), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(26), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [3410] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(463), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(37), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [3509] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(465), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
  [3608] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(294), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(342), 1,
      sym__newline,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(292), 1,
      sym_actor,
    STATE(34), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(176), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(469), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(471), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(473), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
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
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(477), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__subdocument,
    STATE(173), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(293), 1,
      sym_actor,
    STATE(147), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(67), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(105), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym__subdocument,
    STATE(89), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(285), 1,
      sym_actor,
    STATE(133), 18,
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
    ACTIONS(23), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(13), 1,
      aux_sym__subdocument,
    STATE(140), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(291), 1,
      sym_actor,
    STATE(128), 18,
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
    ACTIONS(23), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(4), 1,
      aux_sym__subdocument,
    STATE(140), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(291), 1,
      sym_actor,
    STATE(128), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(67), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(105), 1,
      sym__newline,
    STATE(9), 1,
      aux_sym__subdocument,
    STATE(89), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(285), 1,
      sym_actor,
    STATE(133), 18,
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
    ACTIONS(23), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(2), 1,
      aux_sym__subdocument,
    STATE(140), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(291), 1,
      sym_actor,
    STATE(128), 18,
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
    ACTIONS(23), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(8), 1,
      aux_sym__subdocument,
    STATE(140), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(291), 1,
      sym_actor,
    STATE(128), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(67), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(105), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym__subdocument,
    STATE(89), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(285), 1,
      sym_actor,
    STATE(133), 18,
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
    ACTIONS(23), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(25), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(5), 1,
      aux_sym__subdocument,
    STATE(140), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(291), 1,
      sym_actor,
    STATE(128), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(67), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(105), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__subdocument,
    STATE(89), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(285), 1,
      sym_actor,
    STATE(133), 18,
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
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(67), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(105), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym__subdocument,
    STATE(89), 1,
      sym__sequence_stmt,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(285), 1,
      sym_actor,
    STATE(133), 18,
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
  [5160] = 18,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(483), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(485), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(487), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(489), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(491), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(493), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(495), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(497), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(499), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(501), 1,
      sym__newline,
    ACTIONS(503), 1,
      aux_sym_gantt_task_text_token1,
    STATE(453), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(711), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(57), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(222), 11,
      sym_directive,
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
  [5227] = 18,
    ACTIONS(481), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(483), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(485), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(487), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(489), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(491), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(493), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(495), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(497), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(499), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(501), 1,
      sym__newline,
    ACTIONS(503), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    STATE(453), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(711), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(57), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(222), 11,
      sym_directive,
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
  [5294] = 17,
    ACTIONS(507), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(513), 1,
      sym__newline,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(527), 1,
      aux_sym_state_name_token1,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(206), 1,
      sym_state_name,
    STATE(225), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(61), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(227), 12,
      sym__direction,
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
  [5359] = 18,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(536), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(539), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(542), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(545), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(548), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(551), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(554), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(557), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(560), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(563), 1,
      sym__newline,
    ACTIONS(566), 1,
      aux_sym_gantt_task_text_token1,
    STATE(453), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(711), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(57), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(222), 11,
      sym_directive,
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
  [5426] = 18,
    ACTIONS(481), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(483), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(485), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(487), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(489), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(491), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(493), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(495), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(497), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(499), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(503), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    ACTIONS(569), 1,
      sym__newline,
    STATE(453), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(711), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(54), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(222), 11,
      sym_directive,
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
  [5493] = 18,
    ACTIONS(481), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(483), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(485), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(487), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(489), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(491), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(493), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(495), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(497), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(499), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(503), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(573), 1,
      sym__newline,
    STATE(453), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(711), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(55), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(222), 11,
      sym_directive,
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
  [5560] = 17,
    ACTIONS(507), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(527), 1,
      aux_sym_state_name_token1,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    ACTIONS(577), 1,
      sym__newline,
    STATE(206), 1,
      sym_state_name,
    STATE(225), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(62), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(227), 12,
      sym__direction,
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
  [5625] = 17,
    ACTIONS(507), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(527), 1,
      aux_sym_state_name_token1,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    ACTIONS(577), 1,
      sym__newline,
    STATE(206), 1,
      sym_state_name,
    STATE(225), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(63), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(227), 12,
      sym__direction,
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
  [5690] = 17,
    ACTIONS(507), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(527), 1,
      aux_sym_state_name_token1,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    ACTIONS(581), 1,
      sym__newline,
    STATE(206), 1,
      sym_state_name,
    STATE(225), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(63), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(227), 12,
      sym__direction,
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
  [5755] = 17,
    ACTIONS(583), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
    ACTIONS(588), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(591), 1,
      sym__newline,
    ACTIONS(594), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(597), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(600), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(603), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(606), 1,
      anon_sym_DASH_DASH,
    ACTIONS(609), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(612), 1,
      aux_sym_state_name_token1,
    ACTIONS(615), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(206), 1,
      sym_state_name,
    STATE(225), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(63), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(227), 12,
      sym__direction,
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
  [5820] = 16,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(620), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(622), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(624), 1,
      aux_sym_state_name_token1,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(332), 1,
      sym_state_name,
    STATE(565), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [5881] = 16,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(620), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(622), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(624), 1,
      aux_sym_state_name_token1,
    ACTIONS(626), 1,
      sym__newline,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(332), 1,
      sym_state_name,
    STATE(451), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [5942] = 16,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(620), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(622), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(624), 1,
      aux_sym_state_name_token1,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(332), 1,
      sym_state_name,
    STATE(565), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6003] = 16,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(620), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(622), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(624), 1,
      aux_sym_state_name_token1,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(332), 1,
      sym_state_name,
    STATE(565), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6064] = 16,
    ACTIONS(507), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(527), 1,
      aux_sym_state_name_token1,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(632), 1,
      sym__newline,
    STATE(56), 1,
      sym__state_stmt,
    STATE(206), 1,
      sym_state_name,
    STATE(225), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6125] = 16,
    ACTIONS(507), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(527), 1,
      aux_sym_state_name_token1,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_state_name,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(268), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6186] = 16,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(620), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(622), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(624), 1,
      aux_sym_state_name_token1,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(332), 1,
      sym_state_name,
    STATE(565), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6247] = 16,
    ACTIONS(507), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(527), 1,
      aux_sym_state_name_token1,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_state_name,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(268), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6308] = 16,
    ACTIONS(507), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(527), 1,
      aux_sym_state_name_token1,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_state_name,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(268), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6369] = 16,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(620), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(622), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(624), 1,
      aux_sym_state_name_token1,
    ACTIONS(638), 1,
      sym__newline,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(332), 1,
      sym_state_name,
    STATE(441), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6430] = 15,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(620), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(622), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(624), 1,
      aux_sym_state_name_token1,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(332), 1,
      sym_state_name,
    STATE(451), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6488] = 15,
    ACTIONS(507), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(527), 1,
      aux_sym_state_name_token1,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(206), 1,
      sym_state_name,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(268), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6546] = 15,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(620), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(622), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(624), 1,
      aux_sym_state_name_token1,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(332), 1,
      sym_state_name,
    STATE(424), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6604] = 15,
    ACTIONS(507), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(527), 1,
      aux_sym_state_name_token1,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(60), 1,
      sym__state_stmt,
    STATE(206), 1,
      sym_state_name,
    STATE(225), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6662] = 15,
    ACTIONS(511), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(515), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(517), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(519), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(521), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(523), 1,
      anon_sym_DASH_DASH,
    ACTIONS(529), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(620), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(622), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(624), 1,
      aux_sym_state_name_token1,
    STATE(225), 1,
      sym_state_hide_empty_description,
    STATE(332), 1,
      sym_state_name,
    STATE(565), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(227), 12,
      sym__direction,
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
  [6720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [6752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [6784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [6816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [6848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [6880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [6912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [6944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [6976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [7008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [7040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [7072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [7104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [7136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(684), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(686), 17,
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
  [7168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(688), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(690), 17,
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
  [7200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(692), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(694), 17,
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
  [7232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(696), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(698), 17,
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
  [7264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(700), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(702), 17,
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
  [7296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(704), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(706), 17,
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
  [7328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(708), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(710), 17,
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
  [7360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(712), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(714), 17,
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
  [7392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(716), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(718), 17,
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
  [7424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(720), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(722), 17,
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
  [7456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(724), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(726), 17,
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
  [7488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(730), 17,
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
  [7520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(732), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(734), 17,
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
  [7552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(736), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(738), 17,
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
  [7584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(740), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(742), 17,
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
  [7616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(724), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(726), 17,
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
  [7648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(720), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(722), 17,
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
  [7680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(704), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(706), 17,
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
  [7712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(700), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(702), 17,
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
  [7744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [7776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [7808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [7840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [7872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [7904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(684), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(686), 17,
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
  [7936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(688), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(690), 17,
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
  [7968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(744), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(746), 17,
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
  [8000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(740), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(742), 17,
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
  [8032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(748), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(750), 17,
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
  [8064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(732), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(734), 17,
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
  [8096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(736), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(738), 17,
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
  [8128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(744), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(746), 17,
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
  [8160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(730), 17,
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
  [8192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(716), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(718), 17,
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
  [8224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(752), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(754), 17,
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
  [8256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(712), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(714), 17,
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
  [8288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(756), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(758), 17,
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
  [8320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(708), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(710), 17,
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
  [8352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(748), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(750), 17,
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
  [8384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(752), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(754), 17,
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
  [8416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [8448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(756), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(758), 17,
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
  [8480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(760), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(762), 17,
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
  [8512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [8544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [8576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(692), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(694), 17,
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
  [8608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(696), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(698), 17,
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
  [8640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(760), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(762), 17,
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
  [8672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [8704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(740), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(742), 16,
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
  [8735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(720), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(722), 16,
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
  [8766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(744), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(746), 16,
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
  [8797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(732), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(734), 16,
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
  [8828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [8859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(752), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(754), 16,
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
  [8890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(756), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(758), 16,
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
  [8921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(760), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(762), 16,
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
  [8952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [8983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [9014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [9045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(752), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(754), 16,
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
  [9076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(748), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(750), 16,
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
  [9107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(744), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(746), 16,
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
  [9138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(732), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(734), 16,
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
  [9169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [9200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(688), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(690), 16,
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
  [9231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(684), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(686), 16,
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
  [9262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [9293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [9324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(692), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(694), 16,
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
  [9355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [9386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(696), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(698), 16,
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
  [9417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [9448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(708), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(710), 16,
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
  [9479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [9510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(712), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(714), 16,
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
  [9541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(760), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(762), 16,
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
  [9572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [9603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(700), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(702), 16,
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
  [9634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(704), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(706), 16,
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
  [9665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [9696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [9727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [9758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(724), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(726), 16,
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
  [9789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(756), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(758), 16,
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
  [9820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(740), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(742), 16,
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
  [9851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(736), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(738), 16,
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
  [9882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(730), 16,
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
  [9913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(716), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(718), 16,
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
  [9944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(716), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(718), 16,
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
  [9975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(730), 16,
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
  [10006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(736), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(738), 16,
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
  [10037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [10068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(724), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(726), 16,
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
  [10099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(712), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(714), 16,
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
  [10130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(708), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(710), 16,
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
  [10161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(720), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(722), 16,
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
  [10192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(704), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(706), 16,
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
  [10223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(696), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(698), 16,
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
  [10254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(692), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(694), 16,
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
  [10285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [10316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [10347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [10378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [10409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(700), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(702), 16,
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
  [10440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(748), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(750), 16,
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
  [10471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(688), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(690), 16,
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
  [10502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(684), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(686), 16,
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
  [10533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [10564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
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
  [10595] = 15,
    ACTIONS(764), 1,
      anon_sym_COLON,
    ACTIONS(766), 1,
      anon_sym_STAR,
    ACTIONS(768), 1,
      sym__dquote_string,
    ACTIONS(770), 1,
      sym_class_reltype_aggregation,
    ACTIONS(774), 1,
      anon_sym_LT,
    ACTIONS(776), 1,
      anon_sym_GT,
    ACTIONS(778), 1,
      anon_sym_DASH_DASH,
    ACTIONS(780), 1,
      sym_class_linetype_dotted,
    STATE(213), 1,
      sym__class_linetype,
    STATE(302), 1,
      sym_class_linetype_solid,
    STATE(311), 1,
      sym_class_relation,
    STATE(345), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(772), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(336), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10645] = 6,
    ACTIONS(784), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      aux_sym_state_name_token1,
    STATE(212), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(782), 12,
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
  [10676] = 3,
    ACTIONS(792), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(790), 14,
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
  [10700] = 13,
    ACTIONS(766), 1,
      anon_sym_STAR,
    ACTIONS(770), 1,
      sym_class_reltype_aggregation,
    ACTIONS(774), 1,
      anon_sym_LT,
    ACTIONS(776), 1,
      anon_sym_GT,
    ACTIONS(778), 1,
      anon_sym_DASH_DASH,
    ACTIONS(780), 1,
      sym_class_linetype_dotted,
    STATE(213), 1,
      sym__class_linetype,
    STATE(302), 1,
      sym_class_linetype_solid,
    STATE(314), 1,
      sym_class_relation,
    STATE(345), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(772), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(336), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10744] = 6,
    ACTIONS(794), 1,
      anon_sym_COLON,
    ACTIONS(798), 1,
      anon_sym_DASH_DASH_GT,
    STATE(376), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(800), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(796), 10,
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
  [10774] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(804), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(802), 12,
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
  [10797] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(810), 1,
      aux_sym_class_label_token1,
    STATE(221), 1,
      sym_state_description,
    ACTIONS(808), 4,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
    ACTIONS(806), 8,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      aux_sym_state_hide_empty_description_token1,
  [10826] = 5,
    ACTIONS(814), 1,
      anon_sym_TILDE,
    ACTIONS(816), 1,
      anon_sym_LT,
    STATE(266), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(812), 11,
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
  [10853] = 4,
    ACTIONS(820), 1,
      anon_sym_COLON,
    ACTIONS(822), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(818), 12,
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
  [10878] = 3,
    ACTIONS(826), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(824), 12,
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
  [10900] = 3,
    ACTIONS(830), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(828), 12,
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
  [10922] = 10,
    ACTIONS(766), 1,
      anon_sym_STAR,
    ACTIONS(774), 1,
      anon_sym_LT,
    ACTIONS(776), 1,
      anon_sym_GT,
    ACTIONS(832), 1,
      sym__class_name,
    ACTIONS(836), 1,
      sym_class_reltype_aggregation,
    STATE(412), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(772), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(834), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(336), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10958] = 5,
    ACTIONS(840), 1,
      sym__class_name,
    ACTIONS(842), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(844), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(838), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [10984] = 3,
    ACTIONS(844), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(838), 12,
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
  [11006] = 11,
    ACTIONS(846), 1,
      ts_builtin_sym_end,
    ACTIONS(848), 1,
      anon_sym_class,
    ACTIONS(850), 1,
      anon_sym_LT_LT,
    ACTIONS(852), 1,
      sym__class_name,
    ACTIONS(854), 1,
      sym__bquote_string,
    STATE(202), 1,
      sym_class_name,
    STATE(209), 1,
      sym_class_name_body,
    STATE(455), 1,
      aux_sym_class_name_body_repeat1,
    STATE(545), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(475), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11044] = 3,
    ACTIONS(858), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(856), 12,
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
  [11066] = 3,
    ACTIONS(862), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(860), 12,
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
  [11088] = 3,
    ACTIONS(866), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(864), 12,
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
  [11110] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(648), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(650), 11,
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
  [11132] = 3,
    ACTIONS(870), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(868), 12,
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
  [11154] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(874), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(872), 11,
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
  [11176] = 8,
    ACTIONS(784), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(876), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(878), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(880), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(241), 4,
      sym__state_annotation,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [11208] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(884), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(882), 11,
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
  [11230] = 3,
    ACTIONS(888), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(886), 12,
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
  [11252] = 3,
    ACTIONS(892), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(890), 12,
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
  [11274] = 3,
    ACTIONS(896), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(894), 12,
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
  [11296] = 3,
    ACTIONS(900), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(898), 12,
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
  [11318] = 3,
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
  [11340] = 3,
    ACTIONS(908), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(906), 12,
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
  [11362] = 3,
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
  [11384] = 3,
    ACTIONS(804), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(802), 12,
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
  [11406] = 3,
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
  [11428] = 11,
    ACTIONS(848), 1,
      anon_sym_class,
    ACTIONS(850), 1,
      anon_sym_LT_LT,
    ACTIONS(852), 1,
      sym__class_name,
    ACTIONS(854), 1,
      sym__bquote_string,
    ACTIONS(918), 1,
      ts_builtin_sym_end,
    STATE(202), 1,
      sym_class_name,
    STATE(209), 1,
      sym_class_name_body,
    STATE(455), 1,
      aux_sym_class_name_body_repeat1,
    STATE(545), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(475), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11466] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(922), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(920), 11,
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
  [11488] = 3,
    ACTIONS(926), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(924), 12,
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
  [11510] = 3,
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
  [11532] = 3,
    ACTIONS(934), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(932), 12,
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
  [11554] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(652), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(654), 11,
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
  [11576] = 3,
    ACTIONS(938), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(936), 12,
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
  [11598] = 3,
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
  [11620] = 3,
    ACTIONS(946), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(944), 12,
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
  [11642] = 10,
    ACTIONS(766), 1,
      anon_sym_STAR,
    ACTIONS(774), 1,
      anon_sym_LT,
    ACTIONS(776), 1,
      anon_sym_GT,
    ACTIONS(836), 1,
      sym_class_reltype_aggregation,
    ACTIONS(948), 1,
      sym__class_name,
    STATE(393), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(772), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(950), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(336), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11678] = 3,
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
  [11700] = 3,
    ACTIONS(958), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(956), 12,
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
  [11722] = 5,
    ACTIONS(840), 1,
      sym__class_name,
    ACTIONS(842), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(946), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(944), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [11748] = 3,
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
  [11770] = 3,
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
  [11792] = 11,
    ACTIONS(848), 1,
      anon_sym_class,
    ACTIONS(850), 1,
      anon_sym_LT_LT,
    ACTIONS(852), 1,
      sym__class_name,
    ACTIONS(854), 1,
      sym__bquote_string,
    ACTIONS(968), 1,
      ts_builtin_sym_end,
    STATE(202), 1,
      sym_class_name,
    STATE(209), 1,
      sym_class_name_body,
    STATE(455), 1,
      aux_sym_class_name_body_repeat1,
    STATE(545), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(475), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11830] = 3,
    ACTIONS(972), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(970), 12,
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
  [11852] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(976), 1,
      sym__actor_word,
    STATE(252), 1,
      aux_sym_actor_repeat1,
    ACTIONS(978), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(974), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [11880] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(982), 1,
      sym__actor_word,
    STATE(252), 1,
      aux_sym_actor_repeat1,
    ACTIONS(985), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(980), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [11908] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(989), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(987), 11,
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
  [11930] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(993), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(991), 11,
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
  [11952] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(997), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(995), 11,
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
  [11974] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1001), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(999), 11,
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
  [11996] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1005), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1003), 11,
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
  [12018] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1009), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1007), 11,
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
  [12040] = 3,
    ACTIONS(1013), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1011), 12,
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
  [12062] = 11,
    ACTIONS(1015), 1,
      anon_sym_TILDE,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
    ACTIONS(1019), 1,
      anon_sym_PLUS,
    ACTIONS(1021), 1,
      anon_sym_DASH,
    ACTIONS(1023), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LT_LT,
    ACTIONS(1029), 1,
      sym__alpha_num_token,
    STATE(300), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(479), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12099] = 11,
    ACTIONS(1015), 1,
      anon_sym_TILDE,
    ACTIONS(1019), 1,
      anon_sym_PLUS,
    ACTIONS(1021), 1,
      anon_sym_DASH,
    ACTIONS(1023), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LT_LT,
    ACTIONS(1029), 1,
      sym__alpha_num_token,
    ACTIONS(1031), 1,
      sym__newline,
    STATE(300), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(357), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12136] = 10,
    ACTIONS(848), 1,
      anon_sym_class,
    ACTIONS(850), 1,
      anon_sym_LT_LT,
    ACTIONS(852), 1,
      sym__class_name,
    ACTIONS(854), 1,
      sym__bquote_string,
    STATE(202), 1,
      sym_class_name,
    STATE(209), 1,
      sym_class_name_body,
    STATE(455), 1,
      aux_sym_class_name_body_repeat1,
    STATE(458), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(475), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12171] = 3,
    ACTIONS(1035), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1033), 11,
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
  [12192] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(652), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(654), 10,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      sym__newline,
      sym_pie_label,
  [12213] = 11,
    ACTIONS(1015), 1,
      anon_sym_TILDE,
    ACTIONS(1019), 1,
      anon_sym_PLUS,
    ACTIONS(1021), 1,
      anon_sym_DASH,
    ACTIONS(1023), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LT_LT,
    ACTIONS(1029), 1,
      sym__alpha_num_token,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(479), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12250] = 3,
    ACTIONS(1041), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1039), 11,
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
  [12271] = 10,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1043), 1,
      ts_builtin_sym_end,
    ACTIONS(1045), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1047), 1,
      sym__newline,
    ACTIONS(1049), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1051), 1,
      sym_pie_label,
    STATE(286), 1,
      sym_pie_showdata,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(284), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(325), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [12306] = 3,
    ACTIONS(1053), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(586), 11,
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
  [12327] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(802), 12,
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
  [12346] = 11,
    ACTIONS(1015), 1,
      anon_sym_TILDE,
    ACTIONS(1019), 1,
      anon_sym_PLUS,
    ACTIONS(1021), 1,
      anon_sym_DASH,
    ACTIONS(1023), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LT_LT,
    ACTIONS(1029), 1,
      sym__alpha_num_token,
    ACTIONS(1055), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(479), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12383] = 11,
    ACTIONS(1015), 1,
      anon_sym_TILDE,
    ACTIONS(1019), 1,
      anon_sym_PLUS,
    ACTIONS(1021), 1,
      anon_sym_DASH,
    ACTIONS(1023), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LT_LT,
    ACTIONS(1029), 1,
      sym__alpha_num_token,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(479), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12420] = 11,
    ACTIONS(1015), 1,
      anon_sym_TILDE,
    ACTIONS(1019), 1,
      anon_sym_PLUS,
    ACTIONS(1021), 1,
      anon_sym_DASH,
    ACTIONS(1023), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LT_LT,
    ACTIONS(1029), 1,
      sym__alpha_num_token,
    ACTIONS(1059), 1,
      sym__newline,
    STATE(300), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(398), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12457] = 11,
    ACTIONS(1015), 1,
      anon_sym_TILDE,
    ACTIONS(1019), 1,
      anon_sym_PLUS,
    ACTIONS(1021), 1,
      anon_sym_DASH,
    ACTIONS(1023), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LT_LT,
    ACTIONS(1029), 1,
      sym__alpha_num_token,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(479), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12494] = 10,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1045), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1049), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1051), 1,
      sym_pie_label,
    ACTIONS(1063), 1,
      ts_builtin_sym_end,
    ACTIONS(1065), 1,
      sym__newline,
    STATE(287), 1,
      sym_pie_showdata,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(290), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(325), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [12529] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(648), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(650), 10,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      sym__newline,
      sym_pie_label,
  [12550] = 10,
    ACTIONS(848), 1,
      anon_sym_class,
    ACTIONS(850), 1,
      anon_sym_LT_LT,
    ACTIONS(852), 1,
      sym__class_name,
    ACTIONS(854), 1,
      sym__bquote_string,
    STATE(202), 1,
      sym_class_name,
    STATE(209), 1,
      sym_class_name_body,
    STATE(455), 1,
      aux_sym_class_name_body_repeat1,
    STATE(545), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(475), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12585] = 10,
    ACTIONS(848), 1,
      anon_sym_class,
    ACTIONS(850), 1,
      anon_sym_LT_LT,
    ACTIONS(852), 1,
      sym__class_name,
    ACTIONS(854), 1,
      sym__bquote_string,
    STATE(202), 1,
      sym_class_name,
    STATE(209), 1,
      sym_class_name_body,
    STATE(425), 1,
      sym__class_stmt,
    STATE(455), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(475), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12620] = 11,
    ACTIONS(1015), 1,
      anon_sym_TILDE,
    ACTIONS(1019), 1,
      anon_sym_PLUS,
    ACTIONS(1021), 1,
      anon_sym_DASH,
    ACTIONS(1023), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LT_LT,
    ACTIONS(1029), 1,
      sym__alpha_num_token,
    ACTIONS(1067), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(479), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12657] = 10,
    ACTIONS(1015), 1,
      anon_sym_TILDE,
    ACTIONS(1019), 1,
      anon_sym_PLUS,
    ACTIONS(1021), 1,
      anon_sym_DASH,
    ACTIONS(1023), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LT_LT,
    ACTIONS(1029), 1,
      sym__alpha_num_token,
    STATE(300), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(387), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12691] = 10,
    ACTIONS(1015), 1,
      anon_sym_TILDE,
    ACTIONS(1019), 1,
      anon_sym_PLUS,
    ACTIONS(1021), 1,
      anon_sym_DASH,
    ACTIONS(1023), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LT_LT,
    ACTIONS(1029), 1,
      sym__alpha_num_token,
    STATE(300), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(479), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12725] = 11,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1069), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(1071), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(1073), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(1075), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(1077), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(1079), 1,
      aux_sym_diagram_gantt_token1,
    ACTIONS(1081), 1,
      aux_sym_diagram_pie_token1,
    ACTIONS(1083), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(283), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
  [12761] = 10,
    ACTIONS(1015), 1,
      anon_sym_TILDE,
    ACTIONS(1019), 1,
      anon_sym_PLUS,
    ACTIONS(1021), 1,
      anon_sym_DASH,
    ACTIONS(1023), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LT_LT,
    ACTIONS(1029), 1,
      sym__alpha_num_token,
    STATE(300), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(363), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12795] = 6,
    ACTIONS(1085), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1092), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1090), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(283), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
    ACTIONS(1088), 5,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
  [12821] = 8,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1045), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1051), 1,
      sym_pie_label,
    ACTIONS(1095), 1,
      ts_builtin_sym_end,
    ACTIONS(1097), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(288), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(325), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [12850] = 6,
    ACTIONS(1101), 1,
      sym_solid_open_arrow,
    ACTIONS(1103), 1,
      anon_sym_DASH_DASH_GT,
    STATE(304), 1,
      sym_signal_type,
    STATE(452), 1,
      sym_dotted_open_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [12875] = 8,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1045), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1051), 1,
      sym_pie_label,
    ACTIONS(1095), 1,
      ts_builtin_sym_end,
    ACTIONS(1105), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(289), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(325), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [12904] = 8,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1043), 1,
      ts_builtin_sym_end,
    ACTIONS(1045), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1047), 1,
      sym__newline,
    ACTIONS(1051), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(284), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(325), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [12933] = 8,
    ACTIONS(1107), 1,
      ts_builtin_sym_end,
    ACTIONS(1109), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1112), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1115), 1,
      sym__newline,
    ACTIONS(1118), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(288), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(325), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [12962] = 8,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1045), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1051), 1,
      sym_pie_label,
    ACTIONS(1097), 1,
      sym__newline,
    ACTIONS(1121), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(288), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(325), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [12991] = 8,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1043), 1,
      ts_builtin_sym_end,
    ACTIONS(1045), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1051), 1,
      sym_pie_label,
    ACTIONS(1097), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(288), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(325), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13020] = 6,
    ACTIONS(1101), 1,
      sym_solid_open_arrow,
    ACTIONS(1103), 1,
      anon_sym_DASH_DASH_GT,
    STATE(306), 1,
      sym_signal_type,
    STATE(452), 1,
      sym_dotted_open_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [13045] = 6,
    ACTIONS(1101), 1,
      sym_solid_open_arrow,
    ACTIONS(1103), 1,
      anon_sym_DASH_DASH_GT,
    STATE(305), 1,
      sym_signal_type,
    STATE(452), 1,
      sym_dotted_open_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [13070] = 6,
    ACTIONS(1101), 1,
      sym_solid_open_arrow,
    ACTIONS(1103), 1,
      anon_sym_DASH_DASH_GT,
    STATE(303), 1,
      sym_signal_type,
    STATE(452), 1,
      sym_dotted_open_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [13095] = 6,
    ACTIONS(1127), 1,
      anon_sym_STAR,
    ACTIONS(1129), 1,
      anon_sym_DOLLAR,
    STATE(301), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1123), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
    ACTIONS(1125), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [13119] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1133), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1131), 6,
      anon_sym_STAR,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
  [13137] = 6,
    ACTIONS(1137), 1,
      anon_sym_STAR,
    ACTIONS(1139), 1,
      anon_sym_DOLLAR,
    STATE(301), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1125), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1135), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13161] = 9,
    ACTIONS(1015), 1,
      anon_sym_TILDE,
    ACTIONS(1019), 1,
      anon_sym_PLUS,
    ACTIONS(1021), 1,
      anon_sym_DASH,
    ACTIONS(1023), 1,
      anon_sym_POUND,
    ACTIONS(1029), 1,
      sym__alpha_num_token,
    STATE(300), 1,
      aux_sym_class_method_line_repeat1,
    STATE(543), 1,
      sym_class_method_line,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13191] = 6,
    ACTIONS(1143), 1,
      anon_sym_STAR,
    ACTIONS(1145), 1,
      anon_sym_DOLLAR,
    STATE(301), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1125), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1141), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13215] = 6,
    ACTIONS(1149), 1,
      anon_sym_STAR,
    ACTIONS(1151), 1,
      anon_sym_DOLLAR,
    STATE(301), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1125), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1147), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13239] = 6,
    ACTIONS(1155), 1,
      anon_sym_STAR,
    ACTIONS(1157), 1,
      anon_sym_DOLLAR,
    STATE(301), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1125), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1153), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [13263] = 4,
    STATE(301), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1161), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1159), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      sym__newline,
  [13283] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1166), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1164), 6,
      anon_sym_STAR,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_GT,
  [13301] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(1168), 1,
      anon_sym_PLUS,
    ACTIONS(1170), 1,
      anon_sym_DASH,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(656), 1,
      sym_actor,
    STATE(370), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [13327] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(1168), 1,
      anon_sym_PLUS,
    ACTIONS(1170), 1,
      anon_sym_DASH,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(686), 1,
      sym_actor,
    STATE(355), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [13353] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(1168), 1,
      anon_sym_PLUS,
    ACTIONS(1170), 1,
      anon_sym_DASH,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(591), 1,
      sym_actor,
    STATE(438), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [13379] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    ACTIONS(1168), 1,
      anon_sym_PLUS,
    ACTIONS(1170), 1,
      anon_sym_DASH,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(671), 1,
      sym_actor,
    STATE(362), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [13405] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(842), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(838), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13421] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(842), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(944), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13437] = 6,
    ACTIONS(1172), 1,
      aux_sym_sequence_stmt_note_token2,
    ACTIONS(1174), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1176), 1,
      aux_sym_note_placement_right_token1,
    STATE(372), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(684), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [13458] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(842), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(944), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [13473] = 7,
    ACTIONS(854), 1,
      sym__bquote_string,
    ACTIONS(1178), 1,
      sym__class_name,
    ACTIONS(1180), 1,
      sym__dquote_string,
    STATE(209), 1,
      sym_class_name_body,
    STATE(413), 1,
      sym_class_name,
    STATE(447), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13496] = 6,
    ACTIONS(1174), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1176), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1182), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(359), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(684), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [13517] = 4,
    ACTIONS(1184), 1,
      anon_sym_TILDE,
    STATE(347), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(812), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13534] = 7,
    ACTIONS(854), 1,
      sym__bquote_string,
    ACTIONS(1178), 1,
      sym__class_name,
    ACTIONS(1186), 1,
      sym__dquote_string,
    STATE(209), 1,
      sym_class_name_body,
    STATE(394), 1,
      sym_class_name,
    STATE(447), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13557] = 6,
    ACTIONS(1174), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1176), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1188), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(367), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(684), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [13578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1194), 1,
      sym_pie_title,
    ACTIONS(1192), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      sym_pie_label,
    ACTIONS(1190), 3,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
  [13597] = 6,
    ACTIONS(1174), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1176), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1196), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(446), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(684), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [13618] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(842), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(838), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [13633] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1198), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [13645] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1200), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [13657] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1202), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      sym_pie_label,
  [13669] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(944), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13681] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1204), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      sym_pie_label,
  [13693] = 5,
    ACTIONS(1206), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1208), 1,
      aux_sym_note_placement_right_token1,
    STATE(431), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(497), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [13711] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1210), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      sym_pie_label,
  [13723] = 6,
    ACTIONS(1212), 1,
      sym__class_name,
    ACTIONS(1214), 1,
      sym__bquote_string,
    STATE(313), 1,
      sym_class_name_body,
    STATE(346), 1,
      sym_class_name,
    STATE(450), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13743] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1216), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [13755] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1218), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      sym_pie_label,
  [13767] = 5,
    ACTIONS(1206), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1208), 1,
      aux_sym_note_placement_right_token1,
    STATE(454), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(497), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [13785] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(838), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13797] = 5,
    ACTIONS(1220), 1,
      sym__dquote_string,
    STATE(203), 1,
      sym_state_alias,
    STATE(223), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [13815] = 5,
    ACTIONS(794), 1,
      anon_sym_COLON,
    ACTIONS(798), 1,
      anon_sym_DASH_DASH_GT,
    STATE(456), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(796), 2,
      ts_builtin_sym_end,
      sym__newline,
  [13833] = 6,
    ACTIONS(854), 1,
      sym__bquote_string,
    ACTIONS(1212), 1,
      sym__class_name,
    STATE(209), 1,
      sym_class_name_body,
    STATE(442), 1,
      aux_sym_class_name_body_repeat1,
    STATE(522), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13853] = 6,
    ACTIONS(854), 1,
      sym__bquote_string,
    ACTIONS(1178), 1,
      sym__class_name,
    STATE(209), 1,
      sym_class_name_body,
    STATE(394), 1,
      sym_class_name,
    STATE(447), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13873] = 6,
    ACTIONS(854), 1,
      sym__bquote_string,
    ACTIONS(1178), 1,
      sym__class_name,
    STATE(209), 1,
      sym_class_name_body,
    STATE(375), 1,
      sym_class_name,
    STATE(447), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [13893] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1222), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [13905] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1033), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [13916] = 3,
    STATE(296), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1224), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [13929] = 3,
    STATE(299), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1226), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [13942] = 3,
    STATE(298), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1228), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [13955] = 3,
    STATE(294), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1230), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [13968] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1234), 1,
      aux_sym_class_label_token1,
    STATE(460), 1,
      sym_class_label,
    ACTIONS(1232), 2,
      ts_builtin_sym_end,
      sym__newline,
  [13985] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1234), 1,
      aux_sym_class_label_token1,
    STATE(462), 1,
      sym_class_label,
    ACTIONS(1236), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14002] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(810), 1,
      aux_sym_class_label_token1,
    STATE(221), 1,
      sym_state_description,
    ACTIONS(806), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14019] = 5,
    ACTIONS(778), 1,
      anon_sym_DASH_DASH,
    ACTIONS(780), 1,
      sym_class_linetype_dotted,
    STATE(243), 1,
      sym__class_linetype,
    STATE(302), 1,
      sym_class_linetype_solid,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14036] = 4,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1242), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1238), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14051] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1039), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [14062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1244), 1,
      sym__actor_word,
    STATE(348), 1,
      aux_sym_actor_repeat1,
    ACTIONS(980), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [14079] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1247), 1,
      sym__actor_word,
    STATE(348), 1,
      aux_sym_actor_repeat1,
    ACTIONS(974), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [14096] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1234), 1,
      aux_sym_class_label_token1,
    STATE(498), 1,
      sym_class_label,
    ACTIONS(1249), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14113] = 4,
    ACTIONS(1055), 1,
      anon_sym_RBRACE,
    ACTIONS(1251), 1,
      sym__newline,
    STATE(365), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14127] = 4,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    ACTIONS(1253), 1,
      sym__newline,
    STATE(428), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1255), 1,
      sym__actor_word,
    STATE(349), 1,
      aux_sym_actor_repeat1,
    STATE(532), 1,
      sym_actor,
  [14157] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(688), 1,
      sym_actor,
  [14173] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(687), 1,
      sym_actor,
  [14189] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1255), 1,
      sym__actor_word,
    STATE(349), 1,
      aux_sym_actor_repeat1,
    STATE(531), 1,
      sym_actor,
  [14205] = 4,
    ACTIONS(1257), 1,
      anon_sym_RBRACE,
    ACTIONS(1259), 1,
      sym__newline,
    STATE(366), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14219] = 4,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    ACTIONS(1261), 1,
      sym__newline,
    STATE(365), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(685), 1,
      sym_actor,
  [14249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(502), 1,
      sym_actor,
  [14265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(673), 1,
      sym_actor,
  [14281] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(672), 1,
      sym_actor,
  [14297] = 4,
    ACTIONS(1067), 1,
      anon_sym_RBRACE,
    ACTIONS(1263), 1,
      sym__newline,
    STATE(351), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14311] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(648), 1,
      sym_actor,
  [14327] = 4,
    ACTIONS(1265), 1,
      anon_sym_RBRACE,
    ACTIONS(1267), 1,
      sym__newline,
    STATE(365), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14341] = 4,
    ACTIONS(1067), 1,
      anon_sym_RBRACE,
    ACTIONS(1263), 1,
      sym__newline,
    STATE(365), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14355] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(670), 1,
      sym_actor,
  [14371] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(510), 1,
      sym_actor,
  [14387] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(658), 1,
      sym_actor,
  [14403] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(657), 1,
      sym_actor,
  [14419] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(649), 1,
      sym_actor,
  [14435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(655), 1,
      sym_actor,
  [14451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(524), 1,
      sym_actor,
  [14467] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(626), 1,
      sym_actor,
  [14483] = 3,
    ACTIONS(1270), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1232), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14495] = 3,
    STATE(210), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1272), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [14507] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1274), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14517] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1276), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14527] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1278), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14537] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1280), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14547] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1282), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14557] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1284), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14567] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1286), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14577] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1288), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14587] = 4,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
    ACTIONS(1290), 1,
      sym__newline,
    STATE(365), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14601] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(625), 1,
      sym_actor,
  [14617] = 4,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
    ACTIONS(1290), 1,
      sym__newline,
    STATE(358), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14631] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(624), 1,
      sym_actor,
  [14647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(623), 1,
      sym_actor,
  [14663] = 4,
    ACTIONS(1292), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1294), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(390), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14677] = 4,
    ACTIONS(1297), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1299), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(391), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14691] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(604), 1,
      sym_actor,
  [14707] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1302), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [14717] = 3,
    ACTIONS(1304), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1249), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14729] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1135), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14739] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1306), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(603), 1,
      sym_actor,
  [14765] = 4,
    ACTIONS(1308), 1,
      anon_sym_RBRACE,
    ACTIONS(1310), 1,
      sym__newline,
    STATE(385), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(602), 1,
      sym_actor,
  [14795] = 3,
    ACTIONS(1314), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1312), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14807] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(601), 1,
      sym_actor,
  [14823] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(689), 1,
      sym_actor,
  [14839] = 4,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1316), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(390), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14853] = 4,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1318), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(391), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14867] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(582), 1,
      sym_actor,
  [14883] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(581), 1,
      sym_actor,
  [14899] = 4,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(1320), 1,
      sym__newline,
    STATE(428), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14913] = 4,
    ACTIONS(918), 1,
      ts_builtin_sym_end,
    ACTIONS(1322), 1,
      sym__newline,
    STATE(415), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(580), 1,
      sym_actor,
  [14943] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(579), 1,
      sym_actor,
  [14959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(690), 1,
      sym_actor,
  [14975] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(950), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [14985] = 3,
    ACTIONS(1326), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1324), 2,
      ts_builtin_sym_end,
      sym__newline,
  [14997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(691), 1,
      sym_actor,
  [15013] = 4,
    ACTIONS(1328), 1,
      ts_builtin_sym_end,
    ACTIONS(1330), 1,
      sym__newline,
    STATE(415), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(635), 1,
      sym_actor,
  [15043] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(636), 1,
      sym_actor,
  [15059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1255), 1,
      sym__actor_word,
    STATE(349), 1,
      aux_sym_actor_repeat1,
    STATE(541), 1,
      sym_actor,
  [15075] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1255), 1,
      sym__actor_word,
    STATE(349), 1,
      aux_sym_actor_repeat1,
    STATE(540), 1,
      sym_actor,
  [15091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(694), 1,
      sym_actor,
  [15107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(692), 1,
      sym_actor,
  [15123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(666), 1,
      sym_actor,
  [15139] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(669), 1,
      sym_actor,
  [15155] = 4,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    ACTIONS(1333), 1,
      sym__newline,
    STATE(407), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15169] = 4,
    ACTIONS(968), 1,
      ts_builtin_sym_end,
    ACTIONS(1335), 1,
      sym__newline,
    STATE(408), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15183] = 4,
    ACTIONS(1337), 1,
      anon_sym_COLON,
    ACTIONS(1339), 1,
      aux_sym_gantt_task_text_token1,
    STATE(426), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1255), 1,
      sym__actor_word,
    STATE(349), 1,
      aux_sym_actor_repeat1,
    STATE(513), 1,
      sym_actor,
  [15213] = 4,
    ACTIONS(1342), 1,
      ts_builtin_sym_end,
    ACTIONS(1344), 1,
      sym__newline,
    STATE(428), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15227] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1255), 1,
      sym__actor_word,
    STATE(349), 1,
      aux_sym_actor_repeat1,
    STATE(512), 1,
      sym_actor,
  [15243] = 4,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    ACTIONS(1333), 1,
      sym__newline,
    STATE(428), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15257] = 3,
    STATE(697), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [15269] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(703), 1,
      sym_actor,
  [15285] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(704), 1,
      sym_actor,
  [15301] = 4,
    ACTIONS(1347), 1,
      sym__class_name,
    ACTIONS(1350), 1,
      sym__bquote_string,
    STATE(434), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1255), 1,
      sym__actor_word,
    STATE(349), 1,
      aux_sym_actor_repeat1,
    STATE(483), 1,
      sym_actor,
  [15331] = 4,
    ACTIONS(968), 1,
      ts_builtin_sym_end,
    ACTIONS(1335), 1,
      sym__newline,
    STATE(415), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15345] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1255), 1,
      sym__actor_word,
    STATE(349), 1,
      aux_sym_actor_repeat1,
    STATE(482), 1,
      sym_actor,
  [15361] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(620), 1,
      sym_actor,
  [15377] = 4,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1352), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(390), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15391] = 4,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1354), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(391), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15405] = 4,
    ACTIONS(1356), 1,
      ts_builtin_sym_end,
    ACTIONS(1358), 1,
      sym__newline,
    STATE(352), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15419] = 4,
    ACTIONS(1360), 1,
      sym__class_name,
    ACTIONS(1362), 1,
      sym__bquote_string,
    STATE(434), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15433] = 4,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1364), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(390), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15447] = 4,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1366), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(391), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(516), 1,
      sym_actor,
  [15477] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__actor_word,
    STATE(251), 1,
      aux_sym_actor_repeat1,
    STATE(662), 1,
      sym_actor,
  [15493] = 4,
    ACTIONS(1362), 1,
      sym__bquote_string,
    ACTIONS(1368), 1,
      sym__class_name,
    STATE(434), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15507] = 4,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1370), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(390), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15521] = 4,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1372), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(391), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15535] = 4,
    ACTIONS(1360), 1,
      sym__class_name,
    ACTIONS(1374), 1,
      sym__bquote_string,
    STATE(434), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15549] = 4,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    ACTIONS(1253), 1,
      sym__newline,
    STATE(430), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1378), 1,
      sym__actor_word,
    ACTIONS(1376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [15577] = 4,
    ACTIONS(1380), 1,
      anon_sym_COLON,
    ACTIONS(1382), 1,
      aux_sym_gantt_task_text_token1,
    STATE(426), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15591] = 3,
    STATE(645), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [15603] = 4,
    ACTIONS(1362), 1,
      sym__bquote_string,
    ACTIONS(1384), 1,
      sym__class_name,
    STATE(434), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15617] = 3,
    STATE(210), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [15629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1388), 1,
      sym__actor_word,
    ACTIONS(1386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [15643] = 4,
    ACTIONS(1390), 1,
      ts_builtin_sym_end,
    ACTIONS(1392), 1,
      sym__newline,
    STATE(436), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1394), 1,
      aux_sym__rest_text_token1,
    STATE(200), 1,
      sym__rest_text,
  [15670] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1236), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15679] = 3,
    ACTIONS(1396), 1,
      anon_sym_COLON,
    ACTIONS(1398), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15690] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1400), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1402), 1,
      aux_sym__rest_text_token1,
    STATE(231), 1,
      sym_gantt_meta_format,
  [15712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1402), 1,
      aux_sym__rest_text_token1,
    STATE(224), 1,
      sym_gantt_meta_format,
  [15725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1402), 1,
      aux_sym__rest_text_token1,
    STATE(258), 1,
      sym_gantt_meta_format,
  [15738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1402), 1,
      aux_sym__rest_text_token1,
    STATE(235), 1,
      sym_gantt_meta_format,
  [15751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1402), 1,
      aux_sym__rest_text_token1,
    STATE(229), 1,
      sym_gantt_meta_format,
  [15764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(705), 1,
      sym__rest_text,
  [15777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1402), 1,
      aux_sym__rest_text_token1,
    STATE(254), 1,
      sym_gantt_meta_format,
  [15790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1402), 1,
      aux_sym__rest_text_token1,
    STATE(255), 1,
      sym_gantt_meta_format,
  [15803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1402), 1,
      aux_sym__rest_text_token1,
    STATE(256), 1,
      sym_gantt_meta_format,
  [15816] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1406), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [15825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(810), 1,
      aux_sym_class_label_token1,
    STATE(259), 1,
      sym_state_description,
  [15838] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1408), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15847] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1410), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15856] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1412), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15865] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1414), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15874] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1416), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15883] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_RBRACE,
      sym__newline,
  [15892] = 3,
    ACTIONS(1418), 1,
      anon_sym_COLON,
    ACTIONS(1420), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(683), 1,
      sym__rest_text,
  [15916] = 3,
    ACTIONS(1422), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1424), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15927] = 3,
    ACTIONS(1426), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1428), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(682), 1,
      sym__rest_text,
  [15951] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1430), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15960] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1432), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15969] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1434), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(157), 1,
      sym__rest_text,
  [15991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(158), 1,
      sym__rest_text,
  [16004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(159), 1,
      sym__rest_text,
  [16017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1436), 1,
      aux_sym__rest_text_token1,
    STATE(160), 1,
      sym__rest_text,
  [16030] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1438), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [16039] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1440), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [16048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(668), 1,
      sym__rest_text,
  [16061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(615), 1,
      sym__rest_text,
  [16074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(667), 1,
      sym__rest_text,
  [16087] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1442), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [16096] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1232), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16105] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1444), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(653), 1,
      sym__rest_text,
  [16127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(652), 1,
      sym__rest_text,
  [16140] = 3,
    ACTIONS(1446), 1,
      anon_sym_COLON,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(630), 1,
      sym__rest_text,
  [16164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(629), 1,
      sym__rest_text,
  [16177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(628), 1,
      sym__rest_text,
  [16190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(599), 1,
      sym__rest_text,
  [16203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1402), 1,
      aux_sym__rest_text_token1,
    STATE(253), 1,
      sym_gantt_meta_format,
  [16216] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1450), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(693), 1,
      sym__rest_text,
  [16238] = 3,
    ACTIONS(1452), 1,
      anon_sym_COLON,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16249] = 3,
    ACTIONS(1456), 1,
      anon_sym_COLON,
    ACTIONS(1458), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16260] = 3,
    ACTIONS(1460), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1462), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16271] = 3,
    ACTIONS(1464), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1466), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(608), 1,
      sym__rest_text,
  [16295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(607), 1,
      sym__rest_text,
  [16308] = 3,
    ACTIONS(1468), 1,
      anon_sym_COLON,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(606), 1,
      sym__rest_text,
  [16332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1472), 1,
      aux_sym__rest_text_token1,
    STATE(93), 1,
      sym__rest_text,
  [16345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1472), 1,
      aux_sym__rest_text_token1,
    STATE(92), 1,
      sym__rest_text,
  [16358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1472), 1,
      aux_sym__rest_text_token1,
    STATE(88), 1,
      sym__rest_text,
  [16371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1472), 1,
      aux_sym__rest_text_token1,
    STATE(79), 1,
      sym__rest_text,
  [16384] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1474), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(675), 1,
      sym__rest_text,
  [16406] = 3,
    ACTIONS(1476), 1,
      anon_sym_COLON,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(612), 1,
      sym__rest_text,
  [16430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(585), 1,
      sym__rest_text,
  [16443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(584), 1,
      sym__rest_text,
  [16456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1394), 1,
      aux_sym__rest_text_token1,
    STATE(198), 1,
      sym__rest_text,
  [16469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(583), 1,
      sym__rest_text,
  [16482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(810), 1,
      aux_sym_class_label_token1,
    STATE(217), 1,
      sym_state_description,
  [16495] = 3,
    ACTIONS(1480), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1482), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16506] = 3,
    ACTIONS(1484), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1486), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16517] = 3,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    STATE(219), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1394), 1,
      aux_sym__rest_text_token1,
    STATE(199), 1,
      sym__rest_text,
  [16541] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1488), 2,
      anon_sym_RBRACE,
      sym__newline,
  [16550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(597), 1,
      sym__rest_text,
  [16563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(605), 1,
      sym__rest_text,
  [16576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(609), 1,
      sym__rest_text,
  [16589] = 3,
    ACTIONS(1490), 1,
      anon_sym_COLON,
    ACTIONS(1492), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16600] = 3,
    ACTIONS(1494), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1496), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16611] = 3,
    ACTIONS(1498), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1500), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(614), 1,
      sym__rest_text,
  [16635] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1502), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1394), 1,
      aux_sym__rest_text_token1,
    STATE(201), 1,
      sym__rest_text,
  [16657] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1328), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1504), 1,
      aux_sym__rest_text_token1,
    STATE(117), 1,
      sym__rest_text,
  [16679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1504), 1,
      aux_sym__rest_text_token1,
    STATE(116), 1,
      sym__rest_text,
  [16692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1504), 1,
      aux_sym__rest_text_token1,
    STATE(115), 1,
      sym__rest_text,
  [16705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1504), 1,
      aux_sym__rest_text_token1,
    STATE(114), 1,
      sym__rest_text,
  [16718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(618), 1,
      sym__rest_text,
  [16731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(619), 1,
      sym__rest_text,
  [16744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(633), 1,
      sym__rest_text,
  [16757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(659), 1,
      sym__rest_text,
  [16770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(646), 1,
      sym__rest_text,
  [16783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(637), 1,
      sym__rest_text,
  [16796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(638), 1,
      sym__rest_text,
  [16809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(644), 1,
      sym__rest_text,
  [16822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(708), 1,
      sym__rest_text,
  [16835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(707), 1,
      sym__rest_text,
  [16848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(706), 1,
      sym__rest_text,
  [16861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(577), 1,
      sym__rest_text,
  [16874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(650), 1,
      sym__rest_text,
  [16887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(651), 1,
      sym__rest_text,
  [16900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(664), 1,
      sym__rest_text,
  [16913] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1342), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(674), 1,
      sym__rest_text,
  [16935] = 3,
    ACTIONS(1506), 1,
      anon_sym_COLON,
    ACTIONS(1508), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(677), 1,
      sym__rest_text,
  [16959] = 3,
    ACTIONS(1510), 1,
      anon_sym_COLON,
    ACTIONS(1512), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(679), 1,
      sym__rest_text,
  [16983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(680), 1,
      sym__rest_text,
  [16996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(699), 1,
      sym__rest_text,
  [17009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(695), 1,
      sym__rest_text,
  [17022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(696), 1,
      sym__rest_text,
  [17035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1404), 1,
      aux_sym__rest_text_token1,
    STATE(700), 1,
      sym__rest_text,
  [17048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1514), 1,
      sym__actor_word,
  [17058] = 2,
    ACTIONS(1516), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17066] = 2,
    ACTIONS(1518), 1,
      sym_arg_directive,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17074] = 2,
    ACTIONS(1520), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17082] = 2,
    ACTIONS(1522), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17090] = 2,
    ACTIONS(1524), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17098] = 2,
    ACTIONS(1526), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17106] = 2,
    ACTIONS(1528), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17114] = 2,
    ACTIONS(1530), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17122] = 2,
    ACTIONS(1532), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1534), 1,
      sym_pie_value,
  [17140] = 2,
    ACTIONS(1536), 1,
      aux_sym_class_generics_token1,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17148] = 2,
    ACTIONS(1538), 1,
      sym_type_directive,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17156] = 2,
    ACTIONS(1540), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17164] = 2,
    ACTIONS(1542), 1,
      aux_sym_class_generics_token1,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17172] = 2,
    ACTIONS(1544), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17180] = 2,
    ACTIONS(1546), 1,
      sym_type_directive,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17188] = 2,
    ACTIONS(1548), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17196] = 2,
    ACTIONS(1550), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17204] = 2,
    ACTIONS(1552), 1,
      sym_type_directive,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17212] = 2,
    ACTIONS(1554), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17220] = 2,
    ACTIONS(1556), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1558), 1,
      sym_gantt_task_data,
  [17238] = 2,
    ACTIONS(1560), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17246] = 2,
    ACTIONS(1562), 1,
      sym_arg_directive,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17254] = 2,
    ACTIONS(1564), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17262] = 2,
    ACTIONS(1566), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17270] = 2,
    ACTIONS(1568), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17278] = 2,
    ACTIONS(1570), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17286] = 2,
    ACTIONS(1572), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17294] = 2,
    ACTIONS(1574), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17302] = 2,
    ACTIONS(1576), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17310] = 2,
    ACTIONS(1578), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17318] = 2,
    ACTIONS(1580), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1582), 1,
      sym__actor_word,
  [17336] = 2,
    ACTIONS(1584), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17344] = 2,
    ACTIONS(1586), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1588), 1,
      sym__actor_word,
  [17362] = 2,
    ACTIONS(1590), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17370] = 2,
    ACTIONS(1592), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17378] = 2,
    ACTIONS(1594), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17386] = 2,
    ACTIONS(1596), 1,
      sym_type_directive,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17394] = 2,
    ACTIONS(1598), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17402] = 2,
    ACTIONS(1600), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17410] = 2,
    ACTIONS(1602), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17418] = 2,
    ACTIONS(1604), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17426] = 2,
    ACTIONS(1606), 1,
      sym_arg_directive,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17434] = 2,
    ACTIONS(1608), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17442] = 2,
    ACTIONS(1610), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17450] = 2,
    ACTIONS(1612), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17458] = 2,
    ACTIONS(1614), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17466] = 2,
    ACTIONS(1616), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17474] = 2,
    ACTIONS(1618), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17482] = 2,
    ACTIONS(1620), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17490] = 2,
    ACTIONS(1622), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17498] = 2,
    ACTIONS(1624), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17506] = 2,
    ACTIONS(1626), 1,
      sym_arg_directive,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17514] = 2,
    ACTIONS(1628), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17522] = 2,
    ACTIONS(1630), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17530] = 2,
    ACTIONS(1632), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17538] = 2,
    ACTIONS(1634), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17546] = 2,
    ACTIONS(1636), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17554] = 2,
    ACTIONS(1638), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17562] = 2,
    ACTIONS(1640), 1,
      sym_type_directive,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17570] = 2,
    ACTIONS(1642), 1,
      sym_arg_directive,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17578] = 2,
    ACTIONS(1644), 1,
      sym_type_directive,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17586] = 2,
    ACTIONS(1646), 1,
      sym_arg_directive,
    ACTIONS(61), 2,
      sym__whitespace,
      sym_comment,
  [17594] = 2,
    ACTIONS(1648), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17602] = 2,
    ACTIONS(1650), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17610] = 2,
    ACTIONS(1652), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17618] = 2,
    ACTIONS(1654), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17626] = 2,
    ACTIONS(1656), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17634] = 2,
    ACTIONS(1658), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17642] = 2,
    ACTIONS(1660), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17650] = 2,
    ACTIONS(1662), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17658] = 2,
    ACTIONS(1664), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17666] = 2,
    ACTIONS(1666), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17674] = 2,
    ACTIONS(1668), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1670), 1,
      sym__actor_word,
  [17692] = 2,
    ACTIONS(1476), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17700] = 2,
    ACTIONS(1672), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17708] = 2,
    ACTIONS(1674), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17716] = 2,
    ACTIONS(1676), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17724] = 2,
    ACTIONS(1678), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17732] = 2,
    ACTIONS(1680), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17740] = 2,
    ACTIONS(1682), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17748] = 2,
    ACTIONS(1468), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17756] = 2,
    ACTIONS(1684), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17764] = 2,
    ACTIONS(1686), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17772] = 2,
    ACTIONS(1688), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17780] = 2,
    ACTIONS(1690), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17788] = 2,
    ACTIONS(1692), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17796] = 2,
    ACTIONS(1694), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17804] = 2,
    ACTIONS(1696), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17812] = 2,
    ACTIONS(1452), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17820] = 2,
    ACTIONS(1698), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17828] = 2,
    ACTIONS(1700), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17836] = 2,
    ACTIONS(1702), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17844] = 2,
    ACTIONS(1704), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17852] = 2,
    ACTIONS(1706), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17860] = 2,
    ACTIONS(1708), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17868] = 2,
    ACTIONS(1710), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17876] = 2,
    ACTIONS(1712), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17884] = 2,
    ACTIONS(1714), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17892] = 2,
    ACTIONS(1716), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17900] = 2,
    ACTIONS(1718), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17908] = 2,
    ACTIONS(1720), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17916] = 2,
    ACTIONS(1722), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__whitespace,
    ACTIONS(1724), 1,
      sym__actor_word,
  [17934] = 2,
    ACTIONS(1446), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17942] = 2,
    ACTIONS(1726), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17950] = 2,
    ACTIONS(1728), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17958] = 2,
    ACTIONS(1730), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17966] = 2,
    ACTIONS(1732), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17974] = 2,
    ACTIONS(1734), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17982] = 2,
    ACTIONS(1736), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17990] = 2,
    ACTIONS(1738), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17998] = 2,
    ACTIONS(1740), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18006] = 2,
    ACTIONS(1742), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18014] = 2,
    ACTIONS(1744), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18022] = 2,
    ACTIONS(1746), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18030] = 2,
    ACTIONS(1748), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18038] = 2,
    ACTIONS(658), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18046] = 2,
    ACTIONS(1750), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18054] = 2,
    ACTIONS(1752), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18062] = 2,
    ACTIONS(1754), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18070] = 2,
    ACTIONS(1756), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18078] = 2,
    ACTIONS(1758), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18086] = 2,
    ACTIONS(1760), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18094] = 2,
    ACTIONS(1762), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18102] = 2,
    ACTIONS(1764), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18110] = 2,
    ACTIONS(1766), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18118] = 2,
    ACTIONS(1768), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18126] = 2,
    ACTIONS(1770), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18134] = 2,
    ACTIONS(1772), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18142] = 2,
    ACTIONS(1774), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18150] = 2,
    ACTIONS(1776), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18158] = 2,
    ACTIONS(1778), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18166] = 2,
    ACTIONS(1780), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18174] = 2,
    ACTIONS(1782), 1,
      sym__newline,
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
  [SMALL_STATE(16)] = 1438,
  [SMALL_STATE(17)] = 1537,
  [SMALL_STATE(18)] = 1636,
  [SMALL_STATE(19)] = 1735,
  [SMALL_STATE(20)] = 1834,
  [SMALL_STATE(21)] = 1933,
  [SMALL_STATE(22)] = 2032,
  [SMALL_STATE(23)] = 2131,
  [SMALL_STATE(24)] = 2230,
  [SMALL_STATE(25)] = 2327,
  [SMALL_STATE(26)] = 2426,
  [SMALL_STATE(27)] = 2525,
  [SMALL_STATE(28)] = 2624,
  [SMALL_STATE(29)] = 2723,
  [SMALL_STATE(30)] = 2822,
  [SMALL_STATE(31)] = 2919,
  [SMALL_STATE(32)] = 3018,
  [SMALL_STATE(33)] = 3117,
  [SMALL_STATE(34)] = 3214,
  [SMALL_STATE(35)] = 3311,
  [SMALL_STATE(36)] = 3410,
  [SMALL_STATE(37)] = 3509,
  [SMALL_STATE(38)] = 3608,
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
  [SMALL_STATE(55)] = 5227,
  [SMALL_STATE(56)] = 5294,
  [SMALL_STATE(57)] = 5359,
  [SMALL_STATE(58)] = 5426,
  [SMALL_STATE(59)] = 5493,
  [SMALL_STATE(60)] = 5560,
  [SMALL_STATE(61)] = 5625,
  [SMALL_STATE(62)] = 5690,
  [SMALL_STATE(63)] = 5755,
  [SMALL_STATE(64)] = 5820,
  [SMALL_STATE(65)] = 5881,
  [SMALL_STATE(66)] = 5942,
  [SMALL_STATE(67)] = 6003,
  [SMALL_STATE(68)] = 6064,
  [SMALL_STATE(69)] = 6125,
  [SMALL_STATE(70)] = 6186,
  [SMALL_STATE(71)] = 6247,
  [SMALL_STATE(72)] = 6308,
  [SMALL_STATE(73)] = 6369,
  [SMALL_STATE(74)] = 6430,
  [SMALL_STATE(75)] = 6488,
  [SMALL_STATE(76)] = 6546,
  [SMALL_STATE(77)] = 6604,
  [SMALL_STATE(78)] = 6662,
  [SMALL_STATE(79)] = 6720,
  [SMALL_STATE(80)] = 6752,
  [SMALL_STATE(81)] = 6784,
  [SMALL_STATE(82)] = 6816,
  [SMALL_STATE(83)] = 6848,
  [SMALL_STATE(84)] = 6880,
  [SMALL_STATE(85)] = 6912,
  [SMALL_STATE(86)] = 6944,
  [SMALL_STATE(87)] = 6976,
  [SMALL_STATE(88)] = 7008,
  [SMALL_STATE(89)] = 7040,
  [SMALL_STATE(90)] = 7072,
  [SMALL_STATE(91)] = 7104,
  [SMALL_STATE(92)] = 7136,
  [SMALL_STATE(93)] = 7168,
  [SMALL_STATE(94)] = 7200,
  [SMALL_STATE(95)] = 7232,
  [SMALL_STATE(96)] = 7264,
  [SMALL_STATE(97)] = 7296,
  [SMALL_STATE(98)] = 7328,
  [SMALL_STATE(99)] = 7360,
  [SMALL_STATE(100)] = 7392,
  [SMALL_STATE(101)] = 7424,
  [SMALL_STATE(102)] = 7456,
  [SMALL_STATE(103)] = 7488,
  [SMALL_STATE(104)] = 7520,
  [SMALL_STATE(105)] = 7552,
  [SMALL_STATE(106)] = 7584,
  [SMALL_STATE(107)] = 7616,
  [SMALL_STATE(108)] = 7648,
  [SMALL_STATE(109)] = 7680,
  [SMALL_STATE(110)] = 7712,
  [SMALL_STATE(111)] = 7744,
  [SMALL_STATE(112)] = 7776,
  [SMALL_STATE(113)] = 7808,
  [SMALL_STATE(114)] = 7840,
  [SMALL_STATE(115)] = 7872,
  [SMALL_STATE(116)] = 7904,
  [SMALL_STATE(117)] = 7936,
  [SMALL_STATE(118)] = 7968,
  [SMALL_STATE(119)] = 8000,
  [SMALL_STATE(120)] = 8032,
  [SMALL_STATE(121)] = 8064,
  [SMALL_STATE(122)] = 8096,
  [SMALL_STATE(123)] = 8128,
  [SMALL_STATE(124)] = 8160,
  [SMALL_STATE(125)] = 8192,
  [SMALL_STATE(126)] = 8224,
  [SMALL_STATE(127)] = 8256,
  [SMALL_STATE(128)] = 8288,
  [SMALL_STATE(129)] = 8320,
  [SMALL_STATE(130)] = 8352,
  [SMALL_STATE(131)] = 8384,
  [SMALL_STATE(132)] = 8416,
  [SMALL_STATE(133)] = 8448,
  [SMALL_STATE(134)] = 8480,
  [SMALL_STATE(135)] = 8512,
  [SMALL_STATE(136)] = 8544,
  [SMALL_STATE(137)] = 8576,
  [SMALL_STATE(138)] = 8608,
  [SMALL_STATE(139)] = 8640,
  [SMALL_STATE(140)] = 8672,
  [SMALL_STATE(141)] = 8704,
  [SMALL_STATE(142)] = 8735,
  [SMALL_STATE(143)] = 8766,
  [SMALL_STATE(144)] = 8797,
  [SMALL_STATE(145)] = 8828,
  [SMALL_STATE(146)] = 8859,
  [SMALL_STATE(147)] = 8890,
  [SMALL_STATE(148)] = 8921,
  [SMALL_STATE(149)] = 8952,
  [SMALL_STATE(150)] = 8983,
  [SMALL_STATE(151)] = 9014,
  [SMALL_STATE(152)] = 9045,
  [SMALL_STATE(153)] = 9076,
  [SMALL_STATE(154)] = 9107,
  [SMALL_STATE(155)] = 9138,
  [SMALL_STATE(156)] = 9169,
  [SMALL_STATE(157)] = 9200,
  [SMALL_STATE(158)] = 9231,
  [SMALL_STATE(159)] = 9262,
  [SMALL_STATE(160)] = 9293,
  [SMALL_STATE(161)] = 9324,
  [SMALL_STATE(162)] = 9355,
  [SMALL_STATE(163)] = 9386,
  [SMALL_STATE(164)] = 9417,
  [SMALL_STATE(165)] = 9448,
  [SMALL_STATE(166)] = 9479,
  [SMALL_STATE(167)] = 9510,
  [SMALL_STATE(168)] = 9541,
  [SMALL_STATE(169)] = 9572,
  [SMALL_STATE(170)] = 9603,
  [SMALL_STATE(171)] = 9634,
  [SMALL_STATE(172)] = 9665,
  [SMALL_STATE(173)] = 9696,
  [SMALL_STATE(174)] = 9727,
  [SMALL_STATE(175)] = 9758,
  [SMALL_STATE(176)] = 9789,
  [SMALL_STATE(177)] = 9820,
  [SMALL_STATE(178)] = 9851,
  [SMALL_STATE(179)] = 9882,
  [SMALL_STATE(180)] = 9913,
  [SMALL_STATE(181)] = 9944,
  [SMALL_STATE(182)] = 9975,
  [SMALL_STATE(183)] = 10006,
  [SMALL_STATE(184)] = 10037,
  [SMALL_STATE(185)] = 10068,
  [SMALL_STATE(186)] = 10099,
  [SMALL_STATE(187)] = 10130,
  [SMALL_STATE(188)] = 10161,
  [SMALL_STATE(189)] = 10192,
  [SMALL_STATE(190)] = 10223,
  [SMALL_STATE(191)] = 10254,
  [SMALL_STATE(192)] = 10285,
  [SMALL_STATE(193)] = 10316,
  [SMALL_STATE(194)] = 10347,
  [SMALL_STATE(195)] = 10378,
  [SMALL_STATE(196)] = 10409,
  [SMALL_STATE(197)] = 10440,
  [SMALL_STATE(198)] = 10471,
  [SMALL_STATE(199)] = 10502,
  [SMALL_STATE(200)] = 10533,
  [SMALL_STATE(201)] = 10564,
  [SMALL_STATE(202)] = 10595,
  [SMALL_STATE(203)] = 10645,
  [SMALL_STATE(204)] = 10676,
  [SMALL_STATE(205)] = 10700,
  [SMALL_STATE(206)] = 10744,
  [SMALL_STATE(207)] = 10774,
  [SMALL_STATE(208)] = 10797,
  [SMALL_STATE(209)] = 10826,
  [SMALL_STATE(210)] = 10853,
  [SMALL_STATE(211)] = 10878,
  [SMALL_STATE(212)] = 10900,
  [SMALL_STATE(213)] = 10922,
  [SMALL_STATE(214)] = 10958,
  [SMALL_STATE(215)] = 10984,
  [SMALL_STATE(216)] = 11006,
  [SMALL_STATE(217)] = 11044,
  [SMALL_STATE(218)] = 11066,
  [SMALL_STATE(219)] = 11088,
  [SMALL_STATE(220)] = 11110,
  [SMALL_STATE(221)] = 11132,
  [SMALL_STATE(222)] = 11154,
  [SMALL_STATE(223)] = 11176,
  [SMALL_STATE(224)] = 11208,
  [SMALL_STATE(225)] = 11230,
  [SMALL_STATE(226)] = 11252,
  [SMALL_STATE(227)] = 11274,
  [SMALL_STATE(228)] = 11296,
  [SMALL_STATE(229)] = 11318,
  [SMALL_STATE(230)] = 11340,
  [SMALL_STATE(231)] = 11362,
  [SMALL_STATE(232)] = 11384,
  [SMALL_STATE(233)] = 11406,
  [SMALL_STATE(234)] = 11428,
  [SMALL_STATE(235)] = 11466,
  [SMALL_STATE(236)] = 11488,
  [SMALL_STATE(237)] = 11510,
  [SMALL_STATE(238)] = 11532,
  [SMALL_STATE(239)] = 11554,
  [SMALL_STATE(240)] = 11576,
  [SMALL_STATE(241)] = 11598,
  [SMALL_STATE(242)] = 11620,
  [SMALL_STATE(243)] = 11642,
  [SMALL_STATE(244)] = 11678,
  [SMALL_STATE(245)] = 11700,
  [SMALL_STATE(246)] = 11722,
  [SMALL_STATE(247)] = 11748,
  [SMALL_STATE(248)] = 11770,
  [SMALL_STATE(249)] = 11792,
  [SMALL_STATE(250)] = 11830,
  [SMALL_STATE(251)] = 11852,
  [SMALL_STATE(252)] = 11880,
  [SMALL_STATE(253)] = 11908,
  [SMALL_STATE(254)] = 11930,
  [SMALL_STATE(255)] = 11952,
  [SMALL_STATE(256)] = 11974,
  [SMALL_STATE(257)] = 11996,
  [SMALL_STATE(258)] = 12018,
  [SMALL_STATE(259)] = 12040,
  [SMALL_STATE(260)] = 12062,
  [SMALL_STATE(261)] = 12099,
  [SMALL_STATE(262)] = 12136,
  [SMALL_STATE(263)] = 12171,
  [SMALL_STATE(264)] = 12192,
  [SMALL_STATE(265)] = 12213,
  [SMALL_STATE(266)] = 12250,
  [SMALL_STATE(267)] = 12271,
  [SMALL_STATE(268)] = 12306,
  [SMALL_STATE(269)] = 12327,
  [SMALL_STATE(270)] = 12346,
  [SMALL_STATE(271)] = 12383,
  [SMALL_STATE(272)] = 12420,
  [SMALL_STATE(273)] = 12457,
  [SMALL_STATE(274)] = 12494,
  [SMALL_STATE(275)] = 12529,
  [SMALL_STATE(276)] = 12550,
  [SMALL_STATE(277)] = 12585,
  [SMALL_STATE(278)] = 12620,
  [SMALL_STATE(279)] = 12657,
  [SMALL_STATE(280)] = 12691,
  [SMALL_STATE(281)] = 12725,
  [SMALL_STATE(282)] = 12761,
  [SMALL_STATE(283)] = 12795,
  [SMALL_STATE(284)] = 12821,
  [SMALL_STATE(285)] = 12850,
  [SMALL_STATE(286)] = 12875,
  [SMALL_STATE(287)] = 12904,
  [SMALL_STATE(288)] = 12933,
  [SMALL_STATE(289)] = 12962,
  [SMALL_STATE(290)] = 12991,
  [SMALL_STATE(291)] = 13020,
  [SMALL_STATE(292)] = 13045,
  [SMALL_STATE(293)] = 13070,
  [SMALL_STATE(294)] = 13095,
  [SMALL_STATE(295)] = 13119,
  [SMALL_STATE(296)] = 13137,
  [SMALL_STATE(297)] = 13161,
  [SMALL_STATE(298)] = 13191,
  [SMALL_STATE(299)] = 13215,
  [SMALL_STATE(300)] = 13239,
  [SMALL_STATE(301)] = 13263,
  [SMALL_STATE(302)] = 13283,
  [SMALL_STATE(303)] = 13301,
  [SMALL_STATE(304)] = 13327,
  [SMALL_STATE(305)] = 13353,
  [SMALL_STATE(306)] = 13379,
  [SMALL_STATE(307)] = 13405,
  [SMALL_STATE(308)] = 13421,
  [SMALL_STATE(309)] = 13437,
  [SMALL_STATE(310)] = 13458,
  [SMALL_STATE(311)] = 13473,
  [SMALL_STATE(312)] = 13496,
  [SMALL_STATE(313)] = 13517,
  [SMALL_STATE(314)] = 13534,
  [SMALL_STATE(315)] = 13557,
  [SMALL_STATE(316)] = 13578,
  [SMALL_STATE(317)] = 13597,
  [SMALL_STATE(318)] = 13618,
  [SMALL_STATE(319)] = 13633,
  [SMALL_STATE(320)] = 13645,
  [SMALL_STATE(321)] = 13657,
  [SMALL_STATE(322)] = 13669,
  [SMALL_STATE(323)] = 13681,
  [SMALL_STATE(324)] = 13693,
  [SMALL_STATE(325)] = 13711,
  [SMALL_STATE(326)] = 13723,
  [SMALL_STATE(327)] = 13743,
  [SMALL_STATE(328)] = 13755,
  [SMALL_STATE(329)] = 13767,
  [SMALL_STATE(330)] = 13785,
  [SMALL_STATE(331)] = 13797,
  [SMALL_STATE(332)] = 13815,
  [SMALL_STATE(333)] = 13833,
  [SMALL_STATE(334)] = 13853,
  [SMALL_STATE(335)] = 13873,
  [SMALL_STATE(336)] = 13893,
  [SMALL_STATE(337)] = 13905,
  [SMALL_STATE(338)] = 13916,
  [SMALL_STATE(339)] = 13929,
  [SMALL_STATE(340)] = 13942,
  [SMALL_STATE(341)] = 13955,
  [SMALL_STATE(342)] = 13968,
  [SMALL_STATE(343)] = 13985,
  [SMALL_STATE(344)] = 14002,
  [SMALL_STATE(345)] = 14019,
  [SMALL_STATE(346)] = 14036,
  [SMALL_STATE(347)] = 14051,
  [SMALL_STATE(348)] = 14062,
  [SMALL_STATE(349)] = 14079,
  [SMALL_STATE(350)] = 14096,
  [SMALL_STATE(351)] = 14113,
  [SMALL_STATE(352)] = 14127,
  [SMALL_STATE(353)] = 14141,
  [SMALL_STATE(354)] = 14157,
  [SMALL_STATE(355)] = 14173,
  [SMALL_STATE(356)] = 14189,
  [SMALL_STATE(357)] = 14205,
  [SMALL_STATE(358)] = 14219,
  [SMALL_STATE(359)] = 14233,
  [SMALL_STATE(360)] = 14249,
  [SMALL_STATE(361)] = 14265,
  [SMALL_STATE(362)] = 14281,
  [SMALL_STATE(363)] = 14297,
  [SMALL_STATE(364)] = 14311,
  [SMALL_STATE(365)] = 14327,
  [SMALL_STATE(366)] = 14341,
  [SMALL_STATE(367)] = 14355,
  [SMALL_STATE(368)] = 14371,
  [SMALL_STATE(369)] = 14387,
  [SMALL_STATE(370)] = 14403,
  [SMALL_STATE(371)] = 14419,
  [SMALL_STATE(372)] = 14435,
  [SMALL_STATE(373)] = 14451,
  [SMALL_STATE(374)] = 14467,
  [SMALL_STATE(375)] = 14483,
  [SMALL_STATE(376)] = 14495,
  [SMALL_STATE(377)] = 14507,
  [SMALL_STATE(378)] = 14517,
  [SMALL_STATE(379)] = 14527,
  [SMALL_STATE(380)] = 14537,
  [SMALL_STATE(381)] = 14547,
  [SMALL_STATE(382)] = 14557,
  [SMALL_STATE(383)] = 14567,
  [SMALL_STATE(384)] = 14577,
  [SMALL_STATE(385)] = 14587,
  [SMALL_STATE(386)] = 14601,
  [SMALL_STATE(387)] = 14617,
  [SMALL_STATE(388)] = 14631,
  [SMALL_STATE(389)] = 14647,
  [SMALL_STATE(390)] = 14663,
  [SMALL_STATE(391)] = 14677,
  [SMALL_STATE(392)] = 14691,
  [SMALL_STATE(393)] = 14707,
  [SMALL_STATE(394)] = 14717,
  [SMALL_STATE(395)] = 14729,
  [SMALL_STATE(396)] = 14739,
  [SMALL_STATE(397)] = 14749,
  [SMALL_STATE(398)] = 14765,
  [SMALL_STATE(399)] = 14779,
  [SMALL_STATE(400)] = 14795,
  [SMALL_STATE(401)] = 14807,
  [SMALL_STATE(402)] = 14823,
  [SMALL_STATE(403)] = 14839,
  [SMALL_STATE(404)] = 14853,
  [SMALL_STATE(405)] = 14867,
  [SMALL_STATE(406)] = 14883,
  [SMALL_STATE(407)] = 14899,
  [SMALL_STATE(408)] = 14913,
  [SMALL_STATE(409)] = 14927,
  [SMALL_STATE(410)] = 14943,
  [SMALL_STATE(411)] = 14959,
  [SMALL_STATE(412)] = 14975,
  [SMALL_STATE(413)] = 14985,
  [SMALL_STATE(414)] = 14997,
  [SMALL_STATE(415)] = 15013,
  [SMALL_STATE(416)] = 15027,
  [SMALL_STATE(417)] = 15043,
  [SMALL_STATE(418)] = 15059,
  [SMALL_STATE(419)] = 15075,
  [SMALL_STATE(420)] = 15091,
  [SMALL_STATE(421)] = 15107,
  [SMALL_STATE(422)] = 15123,
  [SMALL_STATE(423)] = 15139,
  [SMALL_STATE(424)] = 15155,
  [SMALL_STATE(425)] = 15169,
  [SMALL_STATE(426)] = 15183,
  [SMALL_STATE(427)] = 15197,
  [SMALL_STATE(428)] = 15213,
  [SMALL_STATE(429)] = 15227,
  [SMALL_STATE(430)] = 15243,
  [SMALL_STATE(431)] = 15257,
  [SMALL_STATE(432)] = 15269,
  [SMALL_STATE(433)] = 15285,
  [SMALL_STATE(434)] = 15301,
  [SMALL_STATE(435)] = 15315,
  [SMALL_STATE(436)] = 15331,
  [SMALL_STATE(437)] = 15345,
  [SMALL_STATE(438)] = 15361,
  [SMALL_STATE(439)] = 15377,
  [SMALL_STATE(440)] = 15391,
  [SMALL_STATE(441)] = 15405,
  [SMALL_STATE(442)] = 15419,
  [SMALL_STATE(443)] = 15433,
  [SMALL_STATE(444)] = 15447,
  [SMALL_STATE(445)] = 15461,
  [SMALL_STATE(446)] = 15477,
  [SMALL_STATE(447)] = 15493,
  [SMALL_STATE(448)] = 15507,
  [SMALL_STATE(449)] = 15521,
  [SMALL_STATE(450)] = 15535,
  [SMALL_STATE(451)] = 15549,
  [SMALL_STATE(452)] = 15563,
  [SMALL_STATE(453)] = 15577,
  [SMALL_STATE(454)] = 15591,
  [SMALL_STATE(455)] = 15603,
  [SMALL_STATE(456)] = 15617,
  [SMALL_STATE(457)] = 15629,
  [SMALL_STATE(458)] = 15643,
  [SMALL_STATE(459)] = 15657,
  [SMALL_STATE(460)] = 15670,
  [SMALL_STATE(461)] = 15679,
  [SMALL_STATE(462)] = 15690,
  [SMALL_STATE(463)] = 15699,
  [SMALL_STATE(464)] = 15712,
  [SMALL_STATE(465)] = 15725,
  [SMALL_STATE(466)] = 15738,
  [SMALL_STATE(467)] = 15751,
  [SMALL_STATE(468)] = 15764,
  [SMALL_STATE(469)] = 15777,
  [SMALL_STATE(470)] = 15790,
  [SMALL_STATE(471)] = 15803,
  [SMALL_STATE(472)] = 15816,
  [SMALL_STATE(473)] = 15825,
  [SMALL_STATE(474)] = 15838,
  [SMALL_STATE(475)] = 15847,
  [SMALL_STATE(476)] = 15856,
  [SMALL_STATE(477)] = 15865,
  [SMALL_STATE(478)] = 15874,
  [SMALL_STATE(479)] = 15883,
  [SMALL_STATE(480)] = 15892,
  [SMALL_STATE(481)] = 15903,
  [SMALL_STATE(482)] = 15916,
  [SMALL_STATE(483)] = 15927,
  [SMALL_STATE(484)] = 15938,
  [SMALL_STATE(485)] = 15951,
  [SMALL_STATE(486)] = 15960,
  [SMALL_STATE(487)] = 15969,
  [SMALL_STATE(488)] = 15978,
  [SMALL_STATE(489)] = 15991,
  [SMALL_STATE(490)] = 16004,
  [SMALL_STATE(491)] = 16017,
  [SMALL_STATE(492)] = 16030,
  [SMALL_STATE(493)] = 16039,
  [SMALL_STATE(494)] = 16048,
  [SMALL_STATE(495)] = 16061,
  [SMALL_STATE(496)] = 16074,
  [SMALL_STATE(497)] = 16087,
  [SMALL_STATE(498)] = 16096,
  [SMALL_STATE(499)] = 16105,
  [SMALL_STATE(500)] = 16114,
  [SMALL_STATE(501)] = 16127,
  [SMALL_STATE(502)] = 16140,
  [SMALL_STATE(503)] = 16151,
  [SMALL_STATE(504)] = 16164,
  [SMALL_STATE(505)] = 16177,
  [SMALL_STATE(506)] = 16190,
  [SMALL_STATE(507)] = 16203,
  [SMALL_STATE(508)] = 16216,
  [SMALL_STATE(509)] = 16225,
  [SMALL_STATE(510)] = 16238,
  [SMALL_STATE(511)] = 16249,
  [SMALL_STATE(512)] = 16260,
  [SMALL_STATE(513)] = 16271,
  [SMALL_STATE(514)] = 16282,
  [SMALL_STATE(515)] = 16295,
  [SMALL_STATE(516)] = 16308,
  [SMALL_STATE(517)] = 16319,
  [SMALL_STATE(518)] = 16332,
  [SMALL_STATE(519)] = 16345,
  [SMALL_STATE(520)] = 16358,
  [SMALL_STATE(521)] = 16371,
  [SMALL_STATE(522)] = 16384,
  [SMALL_STATE(523)] = 16393,
  [SMALL_STATE(524)] = 16406,
  [SMALL_STATE(525)] = 16417,
  [SMALL_STATE(526)] = 16430,
  [SMALL_STATE(527)] = 16443,
  [SMALL_STATE(528)] = 16456,
  [SMALL_STATE(529)] = 16469,
  [SMALL_STATE(530)] = 16482,
  [SMALL_STATE(531)] = 16495,
  [SMALL_STATE(532)] = 16506,
  [SMALL_STATE(533)] = 16517,
  [SMALL_STATE(534)] = 16528,
  [SMALL_STATE(535)] = 16541,
  [SMALL_STATE(536)] = 16550,
  [SMALL_STATE(537)] = 16563,
  [SMALL_STATE(538)] = 16576,
  [SMALL_STATE(539)] = 16589,
  [SMALL_STATE(540)] = 16600,
  [SMALL_STATE(541)] = 16611,
  [SMALL_STATE(542)] = 16622,
  [SMALL_STATE(543)] = 16635,
  [SMALL_STATE(544)] = 16644,
  [SMALL_STATE(545)] = 16657,
  [SMALL_STATE(546)] = 16666,
  [SMALL_STATE(547)] = 16679,
  [SMALL_STATE(548)] = 16692,
  [SMALL_STATE(549)] = 16705,
  [SMALL_STATE(550)] = 16718,
  [SMALL_STATE(551)] = 16731,
  [SMALL_STATE(552)] = 16744,
  [SMALL_STATE(553)] = 16757,
  [SMALL_STATE(554)] = 16770,
  [SMALL_STATE(555)] = 16783,
  [SMALL_STATE(556)] = 16796,
  [SMALL_STATE(557)] = 16809,
  [SMALL_STATE(558)] = 16822,
  [SMALL_STATE(559)] = 16835,
  [SMALL_STATE(560)] = 16848,
  [SMALL_STATE(561)] = 16861,
  [SMALL_STATE(562)] = 16874,
  [SMALL_STATE(563)] = 16887,
  [SMALL_STATE(564)] = 16900,
  [SMALL_STATE(565)] = 16913,
  [SMALL_STATE(566)] = 16922,
  [SMALL_STATE(567)] = 16935,
  [SMALL_STATE(568)] = 16946,
  [SMALL_STATE(569)] = 16959,
  [SMALL_STATE(570)] = 16970,
  [SMALL_STATE(571)] = 16983,
  [SMALL_STATE(572)] = 16996,
  [SMALL_STATE(573)] = 17009,
  [SMALL_STATE(574)] = 17022,
  [SMALL_STATE(575)] = 17035,
  [SMALL_STATE(576)] = 17048,
  [SMALL_STATE(577)] = 17058,
  [SMALL_STATE(578)] = 17066,
  [SMALL_STATE(579)] = 17074,
  [SMALL_STATE(580)] = 17082,
  [SMALL_STATE(581)] = 17090,
  [SMALL_STATE(582)] = 17098,
  [SMALL_STATE(583)] = 17106,
  [SMALL_STATE(584)] = 17114,
  [SMALL_STATE(585)] = 17122,
  [SMALL_STATE(586)] = 17130,
  [SMALL_STATE(587)] = 17140,
  [SMALL_STATE(588)] = 17148,
  [SMALL_STATE(589)] = 17156,
  [SMALL_STATE(590)] = 17164,
  [SMALL_STATE(591)] = 17172,
  [SMALL_STATE(592)] = 17180,
  [SMALL_STATE(593)] = 17188,
  [SMALL_STATE(594)] = 17196,
  [SMALL_STATE(595)] = 17204,
  [SMALL_STATE(596)] = 17212,
  [SMALL_STATE(597)] = 17220,
  [SMALL_STATE(598)] = 17228,
  [SMALL_STATE(599)] = 17238,
  [SMALL_STATE(600)] = 17246,
  [SMALL_STATE(601)] = 17254,
  [SMALL_STATE(602)] = 17262,
  [SMALL_STATE(603)] = 17270,
  [SMALL_STATE(604)] = 17278,
  [SMALL_STATE(605)] = 17286,
  [SMALL_STATE(606)] = 17294,
  [SMALL_STATE(607)] = 17302,
  [SMALL_STATE(608)] = 17310,
  [SMALL_STATE(609)] = 17318,
  [SMALL_STATE(610)] = 17326,
  [SMALL_STATE(611)] = 17336,
  [SMALL_STATE(612)] = 17344,
  [SMALL_STATE(613)] = 17352,
  [SMALL_STATE(614)] = 17362,
  [SMALL_STATE(615)] = 17370,
  [SMALL_STATE(616)] = 17378,
  [SMALL_STATE(617)] = 17386,
  [SMALL_STATE(618)] = 17394,
  [SMALL_STATE(619)] = 17402,
  [SMALL_STATE(620)] = 17410,
  [SMALL_STATE(621)] = 17418,
  [SMALL_STATE(622)] = 17426,
  [SMALL_STATE(623)] = 17434,
  [SMALL_STATE(624)] = 17442,
  [SMALL_STATE(625)] = 17450,
  [SMALL_STATE(626)] = 17458,
  [SMALL_STATE(627)] = 17466,
  [SMALL_STATE(628)] = 17474,
  [SMALL_STATE(629)] = 17482,
  [SMALL_STATE(630)] = 17490,
  [SMALL_STATE(631)] = 17498,
  [SMALL_STATE(632)] = 17506,
  [SMALL_STATE(633)] = 17514,
  [SMALL_STATE(634)] = 17522,
  [SMALL_STATE(635)] = 17530,
  [SMALL_STATE(636)] = 17538,
  [SMALL_STATE(637)] = 17546,
  [SMALL_STATE(638)] = 17554,
  [SMALL_STATE(639)] = 17562,
  [SMALL_STATE(640)] = 17570,
  [SMALL_STATE(641)] = 17578,
  [SMALL_STATE(642)] = 17586,
  [SMALL_STATE(643)] = 17594,
  [SMALL_STATE(644)] = 17602,
  [SMALL_STATE(645)] = 17610,
  [SMALL_STATE(646)] = 17618,
  [SMALL_STATE(647)] = 17626,
  [SMALL_STATE(648)] = 17634,
  [SMALL_STATE(649)] = 17642,
  [SMALL_STATE(650)] = 17650,
  [SMALL_STATE(651)] = 17658,
  [SMALL_STATE(652)] = 17666,
  [SMALL_STATE(653)] = 17674,
  [SMALL_STATE(654)] = 17682,
  [SMALL_STATE(655)] = 17692,
  [SMALL_STATE(656)] = 17700,
  [SMALL_STATE(657)] = 17708,
  [SMALL_STATE(658)] = 17716,
  [SMALL_STATE(659)] = 17724,
  [SMALL_STATE(660)] = 17732,
  [SMALL_STATE(661)] = 17740,
  [SMALL_STATE(662)] = 17748,
  [SMALL_STATE(663)] = 17756,
  [SMALL_STATE(664)] = 17764,
  [SMALL_STATE(665)] = 17772,
  [SMALL_STATE(666)] = 17780,
  [SMALL_STATE(667)] = 17788,
  [SMALL_STATE(668)] = 17796,
  [SMALL_STATE(669)] = 17804,
  [SMALL_STATE(670)] = 17812,
  [SMALL_STATE(671)] = 17820,
  [SMALL_STATE(672)] = 17828,
  [SMALL_STATE(673)] = 17836,
  [SMALL_STATE(674)] = 17844,
  [SMALL_STATE(675)] = 17852,
  [SMALL_STATE(676)] = 17860,
  [SMALL_STATE(677)] = 17868,
  [SMALL_STATE(678)] = 17876,
  [SMALL_STATE(679)] = 17884,
  [SMALL_STATE(680)] = 17892,
  [SMALL_STATE(681)] = 17900,
  [SMALL_STATE(682)] = 17908,
  [SMALL_STATE(683)] = 17916,
  [SMALL_STATE(684)] = 17924,
  [SMALL_STATE(685)] = 17934,
  [SMALL_STATE(686)] = 17942,
  [SMALL_STATE(687)] = 17950,
  [SMALL_STATE(688)] = 17958,
  [SMALL_STATE(689)] = 17966,
  [SMALL_STATE(690)] = 17974,
  [SMALL_STATE(691)] = 17982,
  [SMALL_STATE(692)] = 17990,
  [SMALL_STATE(693)] = 17998,
  [SMALL_STATE(694)] = 18006,
  [SMALL_STATE(695)] = 18014,
  [SMALL_STATE(696)] = 18022,
  [SMALL_STATE(697)] = 18030,
  [SMALL_STATE(698)] = 18038,
  [SMALL_STATE(699)] = 18046,
  [SMALL_STATE(700)] = 18054,
  [SMALL_STATE(701)] = 18062,
  [SMALL_STATE(702)] = 18070,
  [SMALL_STATE(703)] = 18078,
  [SMALL_STATE(704)] = 18086,
  [SMALL_STATE(705)] = 18094,
  [SMALL_STATE(706)] = 18102,
  [SMALL_STATE(707)] = 18110,
  [SMALL_STATE(708)] = 18118,
  [SMALL_STATE(709)] = 18126,
  [SMALL_STATE(710)] = 18134,
  [SMALL_STATE(711)] = 18142,
  [SMALL_STATE(712)] = 18150,
  [SMALL_STATE(713)] = 18158,
  [SMALL_STATE(714)] = 18166,
  [SMALL_STATE(715)] = 18174,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(639),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(429),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(427),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(139),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(423),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(422),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(315),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(401),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(399),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(397),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(392),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(663),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(517),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__subdocument, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(515),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(514),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(496),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(494),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(140),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(251),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(641),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(419),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(418),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(134),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(417),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(416),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(312),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(389),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(388),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(386),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(374),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(678),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(505),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(504),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(503),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(484),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(481),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(89),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, .production_id = 23),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, .production_id = 23),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(617),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(437),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(435),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(148),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(433),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(432),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(309),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(410),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(409),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(406),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(405),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(647),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(529),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(527),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(526),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(501),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(500),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(173),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(592),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(353),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(356),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(168),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(364),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(371),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(317),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(402),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(411),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(414),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(421),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(611),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(572),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(468),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(560),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(559),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(558),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(34),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(251),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 4),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(595),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(471),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(470),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(469),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(507),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(467),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(466),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(465),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(464),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(463),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(57),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(453),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(324),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(331),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(75),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(248),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(247),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(245),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(244),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(230),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(207),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(207),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(228),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 6),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_text, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_text, 1),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__subdocument, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__subdocument, 1),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 15),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 15),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 11),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 11),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 15),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 15),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 15),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 15),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 11),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 11),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 12),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 12),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 15),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 15),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 14),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 14),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 13),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 13),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 6),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, .production_id = 22),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, .production_id = 22),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gantt_stmt, 1),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gantt_stmt, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_stmt, 1),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_stmt, 1),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_task, 3),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_task, 3),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_lr, 1),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_lr, 1),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_rl, 1),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_rl, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_bt, 1),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_bt, 1),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_tb, 1),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_tb, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actor, 1),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_actor, 1),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actor_repeat1, 2),
  [982] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2), SHIFT_REPEAT(252),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_meta_format, 1),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_meta_format, 1),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3),
  [1035] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [1041] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 2),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 1),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(588),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(283),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 3),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2),
  [1109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(588),
  [1112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(316),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(288),
  [1118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(616),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 4),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 18),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 19),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 20),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2),
  [1161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2), SHIFT_REPEAT(301),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1),
  [1166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 1),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pie_stmt_title, 1),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 2),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_element, 3),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pie_stmt, 1),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_showdata, 1),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2), SHIFT_REPEAT(348),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2),
  [1267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2), SHIFT_REPEAT(280),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 27),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 20),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 26),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 19),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 25),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 18),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 24),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2),
  [1294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2), SHIFT_REPEAT(52),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2),
  [1299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2), SHIFT_REPEAT(45),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 21),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, .production_id = 16),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2),
  [1330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2), SHIFT_REPEAT(276),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2),
  [1339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2), SHIFT_REPEAT(426),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2),
  [1344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2), SHIFT_REPEAT(78),
  [1347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2), SHIFT_REPEAT(434),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_type, 1),
  [1378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_type, 1),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_task_text, 1),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_open_arrow, 1),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_open_arrow, 1),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7),
  [1402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, .production_id = 16),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, .production_id = 16),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, .production_id = 16),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, .production_id = 16),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement, 1),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, .production_id = 17),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, .production_id = 17),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_minus_sign, 1),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_plus_sign, 1),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement, 1),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1778] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
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
