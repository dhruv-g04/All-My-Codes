from collections import Counter
T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    # l = list(map(int, input().split(' ')))
    l = list(((input())))
    # l=list(map(int,l))
    # d=dict(Counter(l))
    # c=0
    # for i in (d.values()):
    #     if i>1:
    #         c+=2
    #     else:
    #         c+=1
    # print(c)

    l1=l[:n//2]
    l2=l[n//2:]
    # l3=l2.copy()
    d1=dict(Counter(l1))
    d2=dict(Counter(l2))
    # print(l1,l2)
    cou=0
    flag=0
    for i in l2:
        # l3.remove()
        if d2[i]==1 :
            break
        else:
            l1.append(i)
            l2.remove(i)
            d2[i]-=1
            try:
                d1[i]+=1
            except:
                d1[i]=1
    l1.reverse()
    for i in l1:
        # l3.remove()
        if d1[i]==1 :
            break
        else:
            d1[i]-=1
            l2.append(i)
            l1.remove(i)
            try:
                d2[i]+=1
            except:
                d2[i]=1
    # print(l1,l2)
    l1=list(set(l1))
    l2=list(set(l2))
    print(len(l1)+len(l2))


