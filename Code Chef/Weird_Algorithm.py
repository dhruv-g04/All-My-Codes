# T = int(input())
# for tc in range(T):
n= int (input())
# n,k=(map(int, input().split(' ')))
# l = list(map(int, input().split(' ')))
#l = list(((input())))
#l=list(map(int,l))
while n!=1:
    print(n,end=" ")
    if n%2==0:
        n=n//2
    else:
        n=(3*n)+1

print(1)
# print(2)