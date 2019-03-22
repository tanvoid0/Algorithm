def rec(x):
    if int(x) < 10:
        return int(x)
    else:
        sum = 0
        for i in str(x):
            sum += int(i)
        # print(sum)

        return rec(sum)

n, k = map(int, input().split())
n = str(n)
n = n*k
z = rec(int(n))
print(z)


