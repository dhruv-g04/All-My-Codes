
# def solve(a):
#     n = len(a)
#     j=n-1
#     area=0
#     suma=sum(a)
#     if len<3:
#         return 0
#     else:
#         idx=1
#         i=0
#         j=2
#         if a[idx]>=min(a[i],a[j]):
#             area=0
#         else:
#             area=min(a[i],a[j])-a[idx]
#         while (j<n):
#             area=min(a[i],a[j])-a[idx]
#             if a[i]<=a[j]:
#                 i=j
#             j=j+1
#             idx+=1

a= [2,0,3]
n = len(a)
j=n-1
area=0
suma=sum(a)
if n<3:
    print(0)
else:
    i=1
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