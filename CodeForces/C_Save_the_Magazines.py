T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    b = list(map(int, input()))
    l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    dn={}
    db={}
    for i in range(n):
        dn[l[i]]=i
        db[i]=b[i]
    # print(dn,db)
    m=0
    # print(b)
    myKeys = list(dn.keys())
    myKeys.sort()
    sdn = {i: dn[i] for i in myKeys}
    print(sdn)
    # for i in range (1,n):
    #     if b[i]==1:
    #         if l[i]<l[i-1] and b[i-1]==0:
    #             m+=l[i-1]
    #             b[i]=0
    #         else:
    #             m+=l[i]
    # # if b[0]==1:
    # #     m+=l[0]
    # print(m)
