while True:
    try:
        a, b = map(int, input().split())
        n = 0
        for i in range(a):
            c, d = map(int, input().split())
            if c == b and d == 0:
                n+=1

        print(n)
    except EOFError:
        break