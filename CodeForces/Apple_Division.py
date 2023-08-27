n=int(input())
l1=[]
l2=[]
s1=0
s2=0
# l1.append(n)
# s1+=n
for i in range(n,0,-1):
    if s1>=s2:
        l2.append(i)
        s2+=i
    else:
        l1.append(i)
        s1+=i
s1,s2=max(s1,s2),min(s1,s2)-+


print(abs(s1-s2))


