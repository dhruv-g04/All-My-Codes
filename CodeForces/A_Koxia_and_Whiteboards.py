# import numpy as np
T = int(input())
for tc in range(T):
    # n= int (input())
    n,m=(map(int, input().split(' ')))
    nl = list(map(int, input().split(' ')))
    ml = list(map(int, input().split(' ')))
    for i in ml:
        nl.sort()
        nl[0]=i
    print(sum(nl))
