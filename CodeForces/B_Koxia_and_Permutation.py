T = int(input())
for tc in range(T):
    # n= int (input())
    n,k=(map(int, input().split(' ')))
    # l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    l=[i for i in range(1,n+1)]
    # l1=[x for x in range (n,)]
    # print(l)
    ans=[]
    for i in range(n):
        if i%2==1:#1357

            e=l[((i)-1)//2]
            # print(i,(i)-1//2)
            ans.append(e)

        else:
            e=l[(-i-2)//2]#0246 -1-2-3-4
            ans.append(e)
            # print(i,-i-2//2)
    print(*ans)   