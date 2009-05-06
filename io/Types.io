// Ensure the Range addon is loaded.
Range 

RtPoint := Vector clone setSize(3) do (
	curlyBrackets := method(
		p := RtPoint clone
		0 to(2) foreach(v, p atPut(v, call evalArgs at(v)))
		return p
	)
	squareBrackets := method(
		return self at(call evalArgs at(0))
	)
)
RtColor := RtPoint clone
RtMatrix := Vector clone setSize(16)
RtBasis := RtMatrix clone
RtBound := Vector clone setSize(6)
RtString := Sequence clone
RtToken := Sequence clone
