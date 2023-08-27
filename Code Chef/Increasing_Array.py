n=int(input())
l=list(map(int,input().split()))
# print(l)
max=l[0]
c=0
for i in l:
    if i<=max:
        c+=(max-i)
    else:
        max=i
print(c)
