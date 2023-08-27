from collections import Counter
T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    d=dict(Counter(l))
    # print(d)
    flag=0
    for i in d:
        # print(i)
        if d[i]<=i:
            flag=1
        else:
            flag=0
            break
    if flag:
        
        print("YES")
    else:
        print("NO")


                
            

    