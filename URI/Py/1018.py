a = int(input())
x = int(a)

b = int(x / 100)
x = x%100

c = int(x / 50)
x = x%50

d = int(x / 20)
x = x%20

e = int(x / 10)
x = x%10

f = int(x / 5)
x = x%5

g = int(x / 2)
x = x%2

h = int(x)

print(str(a))
print(str(b)+" nota(s) de R$ 100,00")
print(str(c)+" nota(s) de R$ 50,00")
print(str(d)+" nota(s) de R$ 20,00")
print(str(e)+" nota(s) de R$ 10,00")
print(str(f)+" nota(s) de R$ 5,00")
print(str(g)+" nota(s) de R$ 2,00")
print(str(h)+" nota(s) de R$ 1,00")