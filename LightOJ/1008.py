def in_list(n, ara):
    for i in range(5):
        for j in range(5):
            if(ara[i][j] == n):
                print(str(j+1) + " " +str(i+1))


ara = [
        [1, 4, 5, 16, 17],
        [2, 3, 6, 15, 18],
        [9, 8, 7, 14, 19],
        [10, 11, 12, 13, 20],
        [25, 24, 23, 22, 21]
    ]

t = int(input())
for i in range(t):
    n = int(input())
    print("Case "+str(i+1)+": ",end="")
    in_list(n, ara)
    