def binary_search(a,e):
    a.sort()
    n=len(a)
    l=0
    r=n-1
    while(l<=r):
        mid=(l+r)//2
        if e>a[mid]:
            l=mid+1
            
        elif (e<a[mid]):
            r=mid
        else:
            return mid
    return -2
a=[1,3,4,6,8]
e=1
print(binary_search(a,e))

