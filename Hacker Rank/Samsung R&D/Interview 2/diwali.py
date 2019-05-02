from itertools import permutations

def fact(n):
    if n== 1 or n == 0:
        return 1
    return n*fact(n-1)


T =int (input())

for i in range(T):
    N = int (input())
    total = 0
    for i in range(N):
        total += int(fact(N)/ fact(i+1))
    print(total)

