def num(x):
    n = 0
    while True:
        if 2**n == x:
            return n
        else:
            n += 1

while True:
    try:
        n = int(input())
        print(num(n))
    except EOFError:
        break