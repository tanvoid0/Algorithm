#!/bin/python3
from fractions import gcd
from functools import reduce
import os
import sys


#
# Complete the getTotalX function below.
#
def find_gcd(list):
    x = reduce(gcd,list)
    return x

def find_lcm(a,b):
    return a*b/gcd(a,b)

def getTotalX(a, b):
    B = find_gcd(b)

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    total = getTotalX(a, b)

    f.write(str(total) + '\n')

    f.close()
