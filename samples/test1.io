rm := RenderMan clone

p := RtPoint clone atPut(2,2)
n := RtPoint clone atPut(1,1)

rm riWorldBegin
rm riSphere(1,-1,1,360, Map with("Ka", 1.0, "P", list(p, p, p, p), "N", list(n,n,n,n)))
rm riWorldEnd

