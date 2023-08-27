T = int(input())
for tc in range(T):
    # n= int (input())
    n,a,b=(map(int, input().split(' ')))
    # 132
    # 123
    # if (a+b)>=n:
        # if a==b and b==n:
            # print("Yes")
        # else:
            # print("No")
    # elif a == b and a == n:
    #     print("Yes")
    if n-a-b<2:
        if a == b and a == n:
            print("Yes")
        else:
            print("No")
    else:
        print("Yes")
    
    # if (a+b)>=n:
    #     if a==b and b==n:
    #         print("Yes")
    #     else:
    #         print("No")
    # elif n%2==1:
    #     if (a+b+1)>=n:
    #         if a==b and b==n:
    #             print("Yes")
    #         else:
    #             print("No")
    # else:
    #     print("Yes")



    