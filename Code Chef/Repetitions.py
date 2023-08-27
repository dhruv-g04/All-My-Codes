s=input()
c=1
max=0
for i in range(len(s)-1):
    if s[i]==s[i+1]:
        c+=1
    else:
        # print(c)
        
        if c>=max:
            max=c
        c=1
if c>=max:
    max=c

print(max)