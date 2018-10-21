while True:
    try:
        n = int(input())
        x = input()
        x = list(map(int,x.split()))
        a = x.count(1)
        b = x.count(0)

        if a >= (2/3)*n:
            print("impeachment")
        else:
            print("acusacao arquivada")

    except EOFError:
        break