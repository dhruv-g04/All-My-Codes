def nc2(n):
    return ((n*(n-1))//2)
T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    rem_num=10-n
    rnc2=nc2(rem_num)
    print(rnc2*6)
    