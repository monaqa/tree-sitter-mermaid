[
 "sequenceDiagram"
 "classDiagram"
 "classDiagram-v2"
 "stateDiagram"
 "stateDiagram-v2"
 "gantt"

 "participant"
 "as"
 "activate"
 "deactivate"
 "note "
 "over"
 "link"
 "links"
 ; "left of"
 ; "right of"
 "properties"
 "details"
 "title"
 "loop"
 "rect"
 "opt"
 "alt"
 "else"
 "par"
 "and"
 "end"
 (sequence_stmt_autonumber)
 (note_placement_left)
 (note_placement_right)

 "class"

 "state "

 "dateformat"
 "inclusiveenddates"
 "topaxis"
 "axisformat"
 "includes"
 "excludes"
 "todaymarker"
 "title"
 "section"
 ] @keyword

[
 (comment)
 ] @comment

[
 ":"
 (signal_plus_sign)
 (signal_minus_sign)

 (class_visibility_public)
 (class_visibility_private)
 (class_visibility_protected)
 (class_visibility_internal)

 (state_division)
 ] @punctuation.delimiter

[
 "("
 ")"
 "{"
 "}"
 ] @punctuation.bracket

[
 "-->"
 (solid_arrow)
 (dotted_arrow)
 (solid_open_arrow)
 (dotted_open_arrow)
 (solid_cross)
 (dotted_cross)
 (solid_point)
 (dotted_point)

 (class_reltype_aggregation)
 (class_reltype_extension)
 (class_reltype_composition)
 (class_reltype_dependency)
 (class_linetype_solid)
 (class_linetype_dotted)
 ] @operator

(actor) @field
(class_name) @field

(state_name) @field

(gantt_task_text) @field

[
 (class_annotation_line)
 (class_stmt_annotation)
 (class_generics)

 (state_annotation_fork)
 (state_annotation_join)
 (state_annotation_choice)
 ] @type

(directive) @include
