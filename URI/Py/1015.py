import math

a, b = input().split()

c, d = input().split()
a = float(c) - float(a)
c = float(d) - float(b)

a = a**2
c = c**2
a = a+c
a = math.sqrt(a)


print("%.4f" % a)