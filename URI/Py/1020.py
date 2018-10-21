a = int(input())

y = int(a / 365)
a = a % 365

m = int(a / 30)
a = a % 30

d = a

print(str(y)+" ano(s)")
print(str(m)+" mes(es)")
print(str(d)+" dia(s)")