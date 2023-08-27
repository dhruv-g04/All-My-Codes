n=int(input())

ans=0
l=[]
def rec(n,a,b,c):
    global ans
    global l
    if n==1:
        l.append([a,c])
        ans+=1
    elif n==2:
        l.append([a,b])
        l.append([a,c])
        l.append([b,c])
        ans+=3
    elif n==3:
        rec(n-1,a,c,b)
        l.append([a,c])
        ans+=1
        rec(n-1,b,a,c)
    else:
        rec(n-1,a,c,b)
        l.append([a,c])
        ans+=1
        rec(n-1,b,a,c)
        # return(ans)
rec(n,1,2,3)
print(ans)
for i in l:
    print(*i)


# 15
# 1 3
# 1 2
# 3 2
## 1 3
# 2 1
# 2 3
# 1 3
# 1 3
# 1 3
# 1 2
# 3 2
# 1 3
# 2 1
# 2 3
# 1 3


# 15
# 1 2
# 1 3
# 2 3
# 1 3
# 3 1
# 3 2
# 1 2
# 1 3
# 2 3
# 2 1
# 3 1
# 1 3
# 1 2
# 1 3
# 2 3