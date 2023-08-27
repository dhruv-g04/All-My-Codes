T = int(input())
for tc in range(T):
    x,y=(map(int, input().split(' ')))
    x,y=y,x
    # if x==y:
    #     ans=1+(x-1)*(x)
    # # print(ans)
    if x>=y:
        if x%2:
            ans=(x**2)-(y-1)
        else:
            ans=((x-1)**2)+1+(y-1)
    else:
        if y%2:
            ans=((y-1)**2)+1+(x-1)
        else:
            ans=(y**2)-(x-1)
    print(ans)


    