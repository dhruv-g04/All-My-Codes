s=list(str(input()))
# print(s)
for i in range (len(s)):
    if s[i]=="0":
        s[i]="1"
    else:
        s[i]="0"
for i in s:
    print(i,end='')
print()