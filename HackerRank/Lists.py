
if __name__ == '__main__':
    N = int(input())
    list = []
    for i in range(N):
        r = str(input()).split()
        if len(r) == 3:
            a = int(r[1])
            b = int(r[2])
        elif len(r) == 2:
            a = int(r[1])

        if r[0] == 'insert':
            list.insert(a,b)
        elif r[0] == 'print':
            print(list)
        elif r[0] == 'remove':
            if a in list:
                list.remove(a)
        elif r[0] == 'append':
            list.append(a)
        elif r[0] == 'sort':
            list.sort()
        elif r[0] == 'pop':
            list.pop()
        elif r[0] == 'reverse':
            list.reverse()

