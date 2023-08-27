def check(l):
    l.pop(0)
    le=len(l)
    if le==0:
        print("NO")
        return False
        # return "NO1"
    m2=min(l)

    if l[0]==m2:
        check(l)
        # print("NO")
    else:
        print("YES")
        return True
        # return ("YES1")
T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    m=min(l)
    if l[0]!=m:
        print("YES")
    # elif ()#13245
    else:
        check(l)
    #     l.pop(0)
    #     m2=min(l)
    #     if l[0]==m2:
    #         print("NO")
    #     else:
    #         print("YES")
    # # for i in l:m:
    # #     if i==



