T = int(input())
for tc in range(T):
    n= int (input())
    s= str(input())
    # n,k=(map(int, input().split(' ')))
    # l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    x=0
    flag=0
    y=0
    for i in s:
        if i=="U":
            # x=
            y+=1
        elif i=="D":
            # x=
            y-=1
        elif i=="L":
            x-=1
            # y=
        else:
            x+=1
            # y=
        if x==1 and y==1:
            flag=1
            break
        else:
            flag=0
    if flag:
        print("YES")
    else:
        print("NO")