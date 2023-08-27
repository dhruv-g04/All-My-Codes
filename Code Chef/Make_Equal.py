T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    andv=l[0]
    orv=0
    m=max(l)
    lmax=len(bin(m))-2
    for i in l:
        orv=orv|i
        andv=andv&i
    s=str(bin(andv))
    le=len(s)-2
    ans="0b"
    ans+="1"*(lmax-le)
    for i in range (2,len(s)):
        if s[i]=="0":
            ans+="1"
        else:
            ans+="0"
    mul=1
    val=0
    for i in range (len(ans)-1,1,-1) :
        val+=int (ans[i])*mul
        mul*=2
    
    # print(ans)
    print(val&orv)

    