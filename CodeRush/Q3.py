n,m=(map(int, input().split(' ')))
s=str(input())
l=[]
for i in range (n):
    temp=[]
    for j in range (m):
        temp.append(0)
        # x,y=(map(int, input().split(' ')))
    l.append(temp)

for i in range (n):
    x,y=(map(int, input().split(' ')))

    l[y-1][x-1]=1


print(l)

