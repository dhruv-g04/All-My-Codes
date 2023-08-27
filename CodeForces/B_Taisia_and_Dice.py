T = int(input())
for tc in range(T):
    n,s,r=(map(int, input().split(' ')))
    l=[]
    M=s-r
    
    temp=r//(n-1)
    temp2=r%(n-1)
    # l.append(temp+temp2)
    for i in range(n-1):
        l.append(temp)
    for i in range(n-1):
        if temp2:
            temp2-=1
            l[i]+=1
                


    l.append(M)
    print(*l)