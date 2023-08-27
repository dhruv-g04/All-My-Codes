T = int(input())
for tc in range(T):
    a=input()
    b=input()
    ans=0
    flag=0
    if a[0]==b[0]:
        flag=1
        # if len(a)>1:
        s=a[0]+"*"
        
    elif a[-1]==b[-1]:
        flag=1
        s="*"+a[-1]
    else:
        s="*"
        for i in range(len(a)-1):
            for j in range(len(b)-1):
                if a[i]==b[j] and a[i+1]==b[j+1]:
                    flag=1
                    s="*"+a[i]+a[i+1]+"*"
                    break
            if flag==1:
                break
    if flag:
        print("YES")
        print(s)
    else:
        print("NO")
        