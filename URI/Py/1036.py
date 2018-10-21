import math

a,b,c = input().split()

a = float(a)
b = float(b)
c = float(c)
try:
    y = math.sqrt((b**2)-(4*a*c))
    x1 = (-b+y)/(2*a)
    x2 = (-b-y)/(2*a)
    print("R1 = %.5f" %x1)
    print("R2 = %.5f" %x2)
except (ZeroDivisionError, ValueError):
    print("Impossivel calcular")

