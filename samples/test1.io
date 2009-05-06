rm := RenderMan with("test1.rib")

p := RtPoint clone atPut(2,2)
n := RtPoint clone atPut(1,1)

rm worldBegin
rm sphere(1,-1,1,360, Map with("Ka", 1.0, "P", list(p, p, p, p), "N", list(n,n,n,n)))
rm worldEnd

