#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    arr = sorted(arr, key=int)
    print(str(sum(arr)-int(arr[-1]))+ " "+ str(sum(arr)-int(arr[0])))
if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
