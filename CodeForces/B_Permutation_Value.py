T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    # l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    l=[x for x in range(1,n+1)]
    temp=l.pop()
    ans=[1]+[temp]+l[1:]
    print(*ans)
    