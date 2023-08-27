n=int (input ())
l = list(map(int, input().split(' ')))
suml=sum(l)
ans=0
p=n
for i in range (n):
    p=p-1
    e=l[i]
    suml=suml-e
    ans+=suml-(p*e)
print(ans)



