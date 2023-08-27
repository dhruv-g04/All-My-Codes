from collections import Counter
s=list(input())
# print(s)
codd=0
ans=""
d=dict(Counter(s))
for i in d.values():
    if i%2:
        codd+=1
if codd>1:
    print("NO SOLUTION")
else:
    # s.sort()
    for i in d.keys():
        if d[i]%2==0:
            # while d[i]!=0:
            ans=(d[i]//2)*i+ans+(d[i]//2)*i
            d[i]-=2
        else:
            n=len(ans)
            temp=d[i]*i
            ans=ans[:n//2]+temp+ans[n//2:]


print(ans)
