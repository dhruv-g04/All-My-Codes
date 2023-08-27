# import math
# print(math.pi)
T = int(input())
for tc in range(T):
    n= (input())
    s="314159265358979323846264338327"
    c=0
    for i in range (len(n)):
        if n[i]==s[i]:
            c+=1
        else:
            break
    print(c)


    