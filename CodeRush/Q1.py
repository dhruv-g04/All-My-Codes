n,m=(map(int, input().split(' ')))
s=str(input())
for i in range (n):
    x,y=(map(int, input().split(' ')))
    j=0
    ls=len(s)
    while(x<n+1 and y<m+1 and x>0 and y>0 and j<ls):
        e=s[j]
        if e=="A":
            x+=1
            y+=1
        elif e=="B":
            x+=1
            y-=1
        elif e=="C":
            x-=1
            y+=1
        else:
            x-=1
            y-=1
        j+=1
    print(x-1,y-1)