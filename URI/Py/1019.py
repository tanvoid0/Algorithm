a = int(input())

h = int(a / 3600)

b = a%3600

m = int(b / 60)

s = b%60

print(str(h)+":"+str(m)+":"+str(s))