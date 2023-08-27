T = int(input())
for tc in range(T):
    # n= int (input())
    n,m=(map(int, input().split(' ')))
    b=max(n,m)
    a=min(n,m)
    # n*x+m*y
    # a-2*x-y=0
    # a-y=2x
    # a-2b/3-a/3)/2=x
    # 2b-4*y-2x=0
    # 
    # 2b-a-3y=0
    # 
    # if (())
    # elif ((2*b)-a)%3==0 and (a-((2*b)-a)/3)%2==0:
    if (2*b-a)%3==0 and (((2*a)-(b))/3)%1==0 and (2*b-a)>=0 and (2*a-b)>=0:
        print("YES")
    else:
        print("NO")