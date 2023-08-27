T = int(input())
for tc in range(T):
    # n= int (input())
    s = input()
    a,b=(map(int, input().split(' ')))
    c,d=(map(int, input().split(' ')))
    e,f=(map(int, input().split(' ')))
    # x=[a,c,e]
    # y=[b,d,f]

    anyY = False
    anyX = False
    if b == d or d == f or b == f:
        anyY = True
    if a == c or c == e or a == e:
        anyX = True
    if anyX and anyY:
        print("NO")
    else :
        print("YES")


    # x.sort()
    # y.sort()
    # ans= (x[0]<x[1]<x[2]) | (y[0]<y[1]<y[2])
    # # print(ans)
    # if ans:
    #     print("YES")
    # else:
    #     print("NO")
    # if b==d:
    #     if c==e :
    #         print("NO")
    #     elif a==e :
    #         print("NO")
    #     else:
    #         print("YES")
    # elif f==d:
    #     if c==a :
    #         print("NO")
    #     elif e==a :
    #         print("NO")
    #     else:
    #         print("YES")
    # elif b==f:
    #     if c==a :
    #         print("NO")
    #     elif c==e :
    #         print("NO")
    #     else:
    #         print("YES")
    # else:
    #     print("YES")

    