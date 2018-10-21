top = 2000
num = "";
for i in range(1, top):
    num = num + "1"
    for j in range(1, i):
        num = num + "0"

t = int(input())
n= []

for i in range(t):
    x = int(input())
    n.append(x)

for i in range(t):
    print(num[n[i]-1] , end="")
    if i != t-1:
        print("", end=" ")
print()