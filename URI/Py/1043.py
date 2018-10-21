a,b,c = map(float, input().split())

d = [a,b,c]
d.sort()

if d[0]+d[1] > d[2]:
    print("Perimetro = %.1f" %sum(d))
else:
    d = (a + b) * c / 2
    print("Area = %.1f" %d)