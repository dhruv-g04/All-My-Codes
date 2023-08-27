n= int (input())
l1=[]
l2=[]
if n==1:
    print(n)
elif n>=4:
    for i in range(1,n+1):
        if i%2:
            l1.append(i)
        else:
            l2.append(i)

    l=l2+l1
    print(*l)
else:
    print("NO SOLUTION")