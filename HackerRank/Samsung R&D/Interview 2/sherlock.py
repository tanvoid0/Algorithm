from itertools import permutations
T = int(input())
for j in range(T):
    a, b = map(int, input().split())
    ls = str('0' * a) + str('1' * b)
   #print(ls)
    ls = list(set(permutations(ls)))
    total = 0
    for i in ls:
        if i[0] == '1':
            total += 1
    print(total)