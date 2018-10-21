a,b,c = map(float, input().split())
d = [a,b,c]
d.sort(reverse=True)
a = d[0]
b = d[1]
c = d[2]

#print(str(a)+" "+str(b)+" "+str(c))

if a>= b+c:
    print("NAO FORMA TRIANGULO")
else:
    if a**2 == (b**2)+ (c**2):
        print("TRIANGULO RETANGULO")
    if a**2 > (b**2) + (c**2):
        print("TRIANGULO OBTUSANGULO")
    if a**2 < (b**2) + (c**2):
        print("TRIANGULO ACUTANGULO")
    if a==b==c:
        print("TRIANGULO EQUILATERO")
    if (a==b and b!=c) or (b==c and c!=a) or (a==c and c!=b):
        print("TRIANGULO ISOSCELES")