T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    ans=0
    # le=0
    # sum=0
    # l.sort()
    # len=n
    # for i in range(n):
    #     sum+=l[i]
    #     # le+=sum
    #     len=len-1
    #     if sum<len
    c1=l.count(1)
    # for i in l:
    if c1%2==0:
        ans+=(c1//2)+(n-c1)
    else:
        ans+=(c1//2)+(n-c1)+1
        
    print(ans)