T = int(input())
for tc in range(T):
    # n= int (input())
    n,k=(map(int, input().split(' ')))
    l = list(map(int, input().split(' ')))
    c=1
    for i in l:
        if i==c:
            c+=1
    left=n-c+1 
    x=left//k 
    if left%k==0:
        print(x)
    else:
        print(x+1)