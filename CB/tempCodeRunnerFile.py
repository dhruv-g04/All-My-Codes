1
    l=[a[0]]
    maxl=a[0]
    r=a[2:]
    maxr=max(r)
    for i in range(1,n-1):
        maxl=max(maxl,a[i])
        if a[i]==maxr:
            maxr=max(r)


        temp=min(maxl,maxr)-a[i]
        if (temp>0):
            area+=temp
        l+=[a[i]]
        r=r[1:]
    print(area)