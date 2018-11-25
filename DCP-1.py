while True:
    try:
        a = input()
        a,b = a.split(",")
        a = ''.join(reversed(a))
        b = ''.join(reversed(b))
        c = int(a)+int(b)
        c = ''.join(reversed(str(c)))
        print(int(c))
    except EOFError:
        break;