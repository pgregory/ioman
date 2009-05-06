rm := RenderMan clone

p1 := RtPoint clone set(0,0,0)
p2 := RtPoint clone set(0,0,2)
p3 := RtPoint clone set(1,0,2)
p4 := RtPoint clone set(1,0,0)
n1 := RtPoint clone set(-1,1,-1)
n2 := RtPoint clone set(-1,1,1)
n3 := RtPoint clone set(1,1,1)
n4 := RtPoint clone set(1,1,-1)

rm option("searchpath", "shader", "../../shaders:./:&")

rm display("poly_test.tif", "framebuffer", "rgba"/*, Map with("string compression", "lzw")*/)

rm format(200,150,1)
rm shadingRate(2)

rm projection("perspective", Map with("fov", 50))
rm translate(0,-1,1)
rm rotate(-40, 1, 0, 0)

rm option("limits", "eyesplits", 3)
rm sides(2)

rm worldBegin

	rm lightSource("ambientlight", "intensity", 0.1)
	rm lightSource("distantlight", "intensity", 0.5, "lightcolor", RtColor clone set(1,1,1), "from", RtPoint clone set(-2, 4, 2), "to", RtPoint clone set(0,0,0))
	rm lightSource("distantlight", "intensity", 0.7, "lightcolor", RtColor clone set(1,1,1), "from", RtPoint clone set(1, 2, -2), "to", RtPoint clone set(0,0,0))

	rm surface("plastic")

	rm attributeBegin
		rm color(RtColor clone set(1, 0, 0))
		rm pointsPolygons(2, list(3,3), list(0,1,2, 0,2,3), Map with("P", list(p1, p2, p3, p4), "N", list(n1,n2,n3,n4)))
	rm attributeEnd
rm worldEnd

