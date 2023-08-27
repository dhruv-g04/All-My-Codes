T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    # l = list(map(int, input().split(' ')))
    l = list(((input())))
    l=list(map(int,l))
    o=""
    sum=0
    if l[0]==1:
        sum=1
    for i in range(1,n):
        if sum==1 and l[i]==1:
            o+="-"
            sum=0
        elif sum==0 and l[i]==1:
            o+="+"
            sum=1

        else:
            o+="+"
    print(o)


    