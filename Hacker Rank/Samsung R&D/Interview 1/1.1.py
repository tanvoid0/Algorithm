#!/bin/python3

import math
import os
import random
import re
import sys
from itertools import combinations
# Complete the powerSum function below.
def powerSum(x, n):
    prime = range(1,32)
    max = int(x**(1/float(n)))
    max_prime = []
    for i in prime:
        if i <= max:
            max_prime.append(i)
            continue

        else:
            break


    # print(max_prime)
    permutations = []
    for i in range(1,len(max_prime)+1):
        permutations.append(list(combinations(max_prime, i)))

    # print(permutations)


    # print(permutations[1][1])

    found = 0

    for i in permutations:

        for j in i:
            sum = 0
            for k in j:
                po = k**n
                sum += po
                # print(po, end=", ")
            # print("Sum: "+str(sum))
            if sum == x:
                found+=1


    print(str(found))
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    X = int(input())

    N = int(input())

    result = powerSum(X, N)

    fptr.write(str(result) + '\n')

    fptr.close()
