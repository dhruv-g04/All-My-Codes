n=int(input())
l=list(map (int,(input().split())))
# print(l)
l.sort()
ans=0
kc=[x+1 for x in range (n)]
for i in  range(n-1):
    if l[i]!=kc[i]:
        ans=kc[i]
        break
    else:
        ans=kc[-1]
print(ans)
        
    


