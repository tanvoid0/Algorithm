#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the kangaroo function below.
def kangaroo(x1, v1, x2, v2):
    # x1,v1,x2,v2 = 43, 2, 70, 2
    y1 = x1
    y2 = x2
    result = ""
    if (x1 > x2 and v1 > v2) or (x2 > x1 and v2 > v1) or (x1 != x2 and v1 == v2):
        return "NO"
    while True:
        if y1 == y2:
            return "YES"
        if (x1 > x2 and y1 < y2) or (x1 < x2 and y1 > y2):
            return "NO"
        y1 = y1+v1
        y2 = y2+v2

print(kangaroo( 43, 2, 70, 2))
#
# if __name__ == '__main__':
#     fptr = open(os.environ['OUTPUT_PATH'], 'w')
#
#     x1V1X2V2 = input().split()
#
#     x1 = int(x1V1X2V2[0])
#
#     v1 = int(x1V1X2V2[1])
#
#     x2 = int(x1V1X2V2[2])
#
#     v2 = int(x1V1X2V2[3])
#
#     result = kangaroo(x1, v1, x2, v2)
#
#     fptr.write(result + '\n')
#
#     fptr.close()
