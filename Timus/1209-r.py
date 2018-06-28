n= 2000
def boot():
    s = ''
    for i in range(n):
        s += '1'
        for j in range(i):
            s += '0'
    return s
z = boot()
# print(len(val))
x = int(input())
val = []
for i in range(x):
    y = int(input())
    val.append(z[y-1])
z = False
for i in val:
    if z:
        print(' ', end='')
    if not z:
        z = True
    print(str(i), end='')
