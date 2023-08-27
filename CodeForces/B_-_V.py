n,m = (map(int , input().split(" ")))
l = list(map(int , input().split(" ")))
# print(n,m,l)
s=[x for x in range(1,n+1)]
# print(s)
# 134
# 12345
ans=[]
c=0
for i in range(m-1) :
    # print(l[i])
    if l[i]==l[i+1]-1:
        continue
    else:
        t=(s[c:i+2])
        # print(t)
        t.reverse()
        ans+=(t)
        c=i+2
    te=(s[c:n])
    te.reverse()
    # print(te)
    ans+=te
    print(*ans)