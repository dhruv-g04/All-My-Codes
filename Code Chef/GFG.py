def rom(n,i):
    global l1
    if i==3:
        return "M"*n
    else:
        i=2*i
        if n in [1,2,3]:
            return l1[i]*n
        elif n==4:
            return l1[i]+l1[i+1]
        elif n==5:
            return l1[i+1]
        elif n in [6,7,8]:
            return l1[i+1]+l1[i]*(n%l1val[i+1])
        elif n==9:
            # x=n-n%l1val[i+2]
            return l1[i]+l1[i+2]
        return
 
sn=str(58)
print(sn)
s=""
# u=["I","II",'III']
l1=['I','V','X','L','C','D','M']
l1val=[1,5,10,50,100,500,1000]
# for i range (len(sn)-1,-1,-1):
# l2=[l[]]
sn = sn[::-1]

for i in range (len(sn)):
    n=int(sn[i])
    print(n)
    s=rom(n,i)+s
    print(s,n,i)