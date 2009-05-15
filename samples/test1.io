rm := RenderMan clone

p1 := RtPoint {0,0,0}
p2 := RtPoint {0,0,2}
p3 := RtPoint {1,0,2}
p4 := RtPoint {1,0,0}
n1 := RtPoint {-1,1,-1}
n2 := RtPoint {-1,1,1}
n3 := RtPoint {1,1,1}
n4 := RtPoint {1,1,-1}

rm light := method(
	lp := Map clone
	lp atPut("lightcolor", RtColor {1,1,1})
	lp atPut("to", RtPoint {0,0,0})
	lp atPut("intensity", 0.5)
	lp atPut("from", RtPoint {-2,4,2})
	call hasArgs ifTrue(call evalArgAt(0) foreach(k,v, lp atPut(k, v)))
	lh := self lightSource("distantlight", lp)
	self illuminate(lh, true)
)

rm do (
	option("searchpath", "shader", "../../shaders:./:&")

	display("poly_test.tif", "framebuffer", "rgba", Map with("string compression", "lzw"))

	format(200,150,1)
	shadingRate(2)
	pixelFilter("gaussian", 2, 2)


	shutter(0,1)

	projection("perspective", Map with("fov", 50))
	translate(0,-1,1)

	motionBegin(list(0, 1))
		rotate(-10, 1, 0, 0)
		rotate(-40, 1, 0, 0)
	motionEnd

	option("limits", "eyesplits", 3)
	sides(2)

	frame(1,
		world(
			lightSource("ambientlight", "intensity", 0.1)
			light
			light(Map with("intensity", 0.7, "from", RtPoint {1,2,-2}))

			surface("plastic")

			attribute(
				color(RtColor {1, 0, 0})
				pointsPolygons(2, list(3,3), list(0,1,2, 0,2,3), Map with("P", list(p1, p2, p3, p4), "N", list(n1,n2,n3,n4)))
			)
			procedural("RunProgram", list("hello", "world"), list(1,2,3,4,5,6))
		)
	)
)
