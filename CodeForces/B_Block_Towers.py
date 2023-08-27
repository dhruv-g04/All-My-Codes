T = int(input())
for tc in range(T):
    n= int (input())
    # n,k=(map(int, input().split(' ')))
    l = list(map(int, input().split(' ')))
    #l = list(((input())))
    #l=list(map(int,l))
    temp=l.copy()
    temp.pop(0)
    temp.sort()
    # temp=[0]+temp
    # # temp.append(0)
    # # 
    # i=1
    # while ((l[0]+((temp[-i]-l[0])//2)+1)<temp[-i]) and (i<=(n-1)):
    #     # print("i=",-i)
    #     l[0]+=((temp[-i]-l[0])//2)+1
    #     i+=1

    # print(l[0])
    # print("t= ",temp)
    for i in range (len(temp)):
        if (temp[i]>l[0]):
            if ((temp[i]-l[0])%2)==0:
                l[0]+=((temp[i]-l[0])//2)
            else:
                l[0]+=((temp[i]-l[0])//2)+1
        # else:
        #     break
    print(l[0])