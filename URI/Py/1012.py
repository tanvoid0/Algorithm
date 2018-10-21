a, b, c = input().split()

a = float(a)
b = float(b)
c = float(c)

d = .5 * a * c
e = 3.14159 * (c**2)
f = (a+b)* c/2
g = b*b
h = a*b

print("TRIANGULO: %.3f" %d)
print("CIRCULO: %.3f" %e)
print("TRAPEZIO: %.3f" %f)
print("QUADRADO: %.3f" %g)
print("RETANGULO: %.3f" %h)