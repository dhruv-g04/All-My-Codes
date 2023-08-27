T = int(input())
for tc in range(T):
    # n= int (input())
    a1,a2,a3,a4=(map(int, input().split(' ')))
    # l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    b=a1
    a=a1
    ans=a1
    if a2<=a3:  
        if b>=a2:
            ans+=a2
            b=b-a2
            a+=a2
        else:
            ans+=b
            b=0
            a=a+b
    else:
        if a>=a3:
            ans+=a3
            b+=a3
            a=a-a3
        else:
            ans+=a
            a=0
            b+=a
    m=min(a,b,a4)
    if m!=a4:
        ans+=m+1
    else:
        ans+=m
    print(ans)


    