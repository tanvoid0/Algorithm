from sys import stdin

# EOF Problem
while True:
    try:
        a,b,c = map(int, input().split())
        n = 0
        for i in range(a):

            x = int(input())
            if b <= x <= c:
                n+=1

        print(n)
    except EOFError:
        break