T = int(input())
for tc in range(T):
    # print(tc+1)
    # n= int (input())
    n,m,k=(map(int, input().split(' ')))
    A = list(map(int, input().split(' ')))
    i=0
    A.sort()
    # while  i<n and A[i]<k :
    #     i+=1
    # print("i= ",i)
    l=1
    minA=A[0]
    i=0
    if k==m==n:
        templ=[q for q in range (n)]
        if A==templ:
            print("YES")
        else:
            print("NO")
    elif k>m:
        print("NO")
    elif minA!=0 and k!=0:
        print("NO")
    elif k==0:
        if (n-1)>=m:
            print("YES")
        else:
            print("NO")
    
    else:
        for i in range (n-1):
            if ((A[i]==A[i+1]-1) or (A[i]==A[i+1])) and (A[i+1])<k:
                # print(A[i+1],k)
                l+=1
            else:
                
                break
        # print(l)
        # print(i)
        if A[i+1]==k:
            if A[i+2]>k and (m-l<=n-l-1):
                # tepl=A[i+2:]
                print("YES")
            else:
                print("NO")
        elif A[i]==k-1:
            if m-l<=n-l:
                print("YES")
            else:
                print("NO")
        else:
            print("NO")
                            
                    
        
        
        