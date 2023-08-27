n=int(input())
def rec(n):
    if n==1:
        l=["0","1"]
        return l
    else:
        l=(rec(n-1))
        # print(l1+l2)
        l1=["0"+x for x in l]
        l.reverse()
        l2=["1"+x for x in l]
        # print(*l1+l2)
        return(l1+l2)
l=rec(n)
for i in l:
    print(i)




# s="0"*n
# for i in range(2**n):
#     t=s
#     print(s)
#     t+="1"
#     t=t[-n:]
#     # print(t)
    
#     s=str(bin(int(s,2)^int(t,2)))
    
#     temp="0"*(n-len(s)+2)
#     s=temp+s[2:]




# for i in range(n):
#     s+=2**i


# print(s)
# l="1"*n
# b="0b"+l
# # for i in range(2**n):
# print(b)
# nb=bin(b)
# print(nb)
# ans=0
# while ans<=s:
#     ansb=str(bin(ans))
#     a=ansb[2:]
#     temp=(n-len(a))*"0"
#     print(temp+a)
#     ans+=1