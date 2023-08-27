T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    # l = list(map(int, input().split(' ')))
    l = list(((input())))
    l=list(map(int,l))
    # temp=[[1,0],[0,1]]
    c=n
    for i in range (n//2):
        # print("l=",l[i]+l[n-1-i])
        
        if l[i]+l[n-1-i] ==1:
            c-=2
        else:
            break
    print(c)

    