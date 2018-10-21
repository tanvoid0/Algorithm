n = int(input())
print(n)
while True:
    if n == 1:
        break
    if n%2 == 1:
        n = 3*n + 1
    else:
        n = int(n/2)
    print(n)