
if __name__ == '__main__':
    N = int(input())
    list = []

    r = str(input()).split()

    r.sort()
    x = -1
    while True:
        if r[x] == r[x-1]:
            x-=1
        else:
            break

    print(r[x])

    print(r)

