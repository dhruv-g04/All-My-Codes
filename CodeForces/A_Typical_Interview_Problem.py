T = int(input())
for tc in range(T):
    n= int (input())
    s=str(input())
    temp="FBFFBFFB"
    temp=temp*3
    ans=0
    for i in range (8):
        if s==(temp[i:i+n]):
            ans=1
            break
    if ans:
        print("YES")
    else:
        print("NO")