n=int(input())
l1=[]
l2=[]
s1=0
s2=0
l1.append(n)
s1+=n
for i in range(n-1,0,-1):
    if s1>=s2:
        l2.append(i)
        s2+=i
    else:
        l1.append(i)
        s1+=i
# print(abs(s1-s2))
l1.sort()
l2.sort()
if s1==s2:
    print("YES")
    print(len(l1))
    print(*l1)
    print(len(l2))
    print(*l2)
else:
    print("NO")
