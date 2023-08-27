T = int(input())
for tc in range(T):
    # n= int (input())
    n, s = (map(int, input().split(' ')))
    l = list(map(int, input().split(' ')))
    # l = list(((input())))
    # l=list(map(int,l))
    ind = []
    for i in range(n):
        if l[i] == 1:
            ind.append(i)
    # print(*ind)
    l=len(ind)
    bi = 0
    bj = l-1
    ans = 0
    suma = l
    i = 0
    j = n-1
    while (i <= j and bi<l and bj>=0):
        if (s == sum):
            ans=0
            break
        elif (ind[bi]-i) < (j-ind[bj]):
            ans += ind[bi]-i+1
            i = ind[bi]+1
            suma = suma-1
            bi+=1
        else:
            ans += j-ind[bj]+1
            j=ind[bj]-1
            suma=suma-1
            bj-=1
    print(ans)