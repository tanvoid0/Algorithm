while True:
    try:
        a, b = map(int, input().split())
        a = str("{:032b}".format(a))
        b = str("{:032b}".format(b))

        a = list(a)
        b = list(b)
        c = ''
        d = 0
        for i in range(32):
            d = int(a[i]) + int(b[i])
            if d == 2:
                c+= '0'
            else:
                c+= str(d)

        c = int(c, 2)

        print(c)

    except EOFError:
        break