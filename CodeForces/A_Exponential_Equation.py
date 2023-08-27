T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    # l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))

    if n%2==0:
        print(1,n//2)
    else:
        print(-1)

    