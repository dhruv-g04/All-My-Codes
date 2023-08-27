i=int(input())


for n in range (1,i+1):
    ans=0
    ans=((n**2)*(n**2-1)-((8)+(8*3)+((n-4)*4*4)+(16)+((n-4)*4*6)+(((n-4)**2)*8)))//2
    print(ans)
