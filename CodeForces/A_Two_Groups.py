T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    # l.sort()
    s1=[]
    s2=[]
    for i in l:
        if i<0:
            s1.append(i)
        else:
            s2.append(i)
    print(abs(sum(s2)-abs(sum(s1))))
    