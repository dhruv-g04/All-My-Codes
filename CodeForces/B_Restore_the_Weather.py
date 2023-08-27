T = int(input())
for tc in range(T):
    # n= int (input())
    n,k=(map(int, input().split(' ')))
    a= list(map(int, input().split(' ')))
    b = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    copa=[]
    for i in range (n):
        copa.append(a[i])
    d={}
    for i in a:
        d[i]=[]
    a.sort()
    b.sort()
    for i in range(n):
        # print(i)
        d[a[i]].append(b[i])
    ans=[]
    # print(copa)
    # print(d)
    for i in range(n):
        ans.append(d[copa[i]][0])
        d[copa[i]].pop(0)
    print(*ans)