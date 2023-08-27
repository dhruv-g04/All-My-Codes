allcase = int(input())
for some in range(allcase):
    N,K=(map(int, input().split(' ')))
    lst = list(map(int, input().split(' ')))
    sum1=0
    sum2=0
    for i in range(0,N):
        sum1+=lst[i]
        sum2+=lst[i]**2
    b=4*sum1
    a=4*N
    c=sum2-K
    d=(b**2)-4*(a)*(c)
    dr=d**(1/2)
    ans=(-b+dr)/(2*a)
    print(int(ans))


    