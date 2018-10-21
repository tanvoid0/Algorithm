a = float(input())
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

print("NOTAS:")
print(str(b)+" nota(s) de R$ 100.00")
print(str(c)+" nota(s) de R$ 50.00")
print(str(d)+" nota(s) de R$ 20.00")
print(str(e)+" nota(s) de R$ 10.00")
print(str(f)+" nota(s) de R$ 5.00")
print(str(g)+" nota(s) de R$ 2.00")

print("MOEDAS:")
print(str(h)+" moeda(s) de R$ 1.00")

x = int(a*100) %100
b = int(x/50)
x = x%50

c = int(x/25)
x = x%25

d = int(x/10)
x = x%10

e = int(x/5)
x = x%5

f = x
print(str(b)+" moeda(s) de R$ 0.50")
print(str(c)+" moeda(s) de R$ 0.25")
print(str(d)+" moeda(s) de R$ 0.10")
print(str(e)+" moeda(s) de R$ 0.05")
print(str(f)+" moeda(s) de R$ 0.01")

