RenderMan do (

	# Implement wrapper functions for the begin/end states in RenderMan, allowing a more
	# concise representation of these block elements.
	
	# RiFrameBegin/End
	frame := method(fno,
		frameBegin(fno)
		call target doMessage(call message argAt(1))
		frameEnd
	)	

	# RiWorldBegin/End
	world := method(
		worldBegin
		call target doMessage(call message argAt(0))
		worldEnd
	)	

	# RiTransformBegin/End
	transform := method(
		transformBegin
		call target doMessage(call message argAt(0))
		transformEnd
	)	

	# RiAttributeBegin/End
	attribute := method(
		attributeBegin
		call target doMessage(call message argAt(0))
		attributeEnd
	)	

	# RiSolidBegin/End
	solid := method(type,
		solidBegin(type)
		call target doMessage(call message argAt(1))
		solidEnd
	)

	# RiObjectBegin/End
	object := method(
		RtObjectHandle obj := objectBegin
		call target doMessage(call message argAt(0))
		objectEnd
		return obj
	)
)
