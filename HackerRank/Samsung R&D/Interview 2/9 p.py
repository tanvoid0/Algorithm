#!/bin/python3
import numpy as np



# Complete the solve function below.
def solve(n, operations):
    jar = []
    for i in range(n):
        jar.append(0)
    for i in operations:
        for j in range(i[0], i[1]+1):
            jar[j-1] += i[-1]

    print(int(sum(jar)/n))



if __name__ == '__main__':


    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    operations = []

    for _ in range(m):
        operations.append(list(map(int, input().rstrip().split())))

    result = solve(n, operations)

    # print(str(result) + '\n')

