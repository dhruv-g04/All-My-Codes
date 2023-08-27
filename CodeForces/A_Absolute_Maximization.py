T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    # M=max(l)
    # bM=list(bin(M))
    # print(bM)
    # for i in range (1,n):
    #     if l[i]==0:
    a = l[0]
    b = l[0]
    for i in range(1, n):
        a = a | l[i]
        b = b & l[i]
    print(a - b)