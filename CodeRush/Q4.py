def checkx(x1,x2):
    return x1-x2
def checky(y1,y2):
    return y1-y2
def checkA(x,y):
    global xl
    global yl
    global a
    global b
    for i in range (n):
        p=xl[i]
        q=yl[i]

        difx=0
        dify=0
        if p > x:
            difx=p-x
            dify=q-y
            if difx==dify:
                a=p
                b=q
                return
            else:
                return -2
def checkB(x,y):
    global xl
    global yl
    global a
    global b
    for i in range (n):
        p=xl[i]
        q=yl[i]
        difx=0
        dify=0
        if p > x:
            difx=p-x
            dify=y-q
            if difx==dify:
                a=p
                b=q
                return
            else:
                return -2
def checkC(x,y):
    global xl
    global yl
    global a
    global b
    for i in range (n):
        p=xl[i]
        q=yl[i]
        difx=0
        dify=0
        if p > x:
            difx=x-p
            dify=q-y
            if difx==dify:
                a=p
                b=q
                return
            else:
                return -2
def checkD(x,y):
    global xl
    global yl
    global a
    global b
    
    for i in range (n):
        p=xl[i]
        q=yl[i]
        difx=0
        dify=0
        if p > x:
            difx=x-p
            dify=y-q
            if difx==dify:
                a=p
                b=q
                return 1
            else:
                return -2
def solve(x,y):
    for e in s:
        # e=s[j]
        if e=="A":
            if checkA(x,y)==-2:
                return -2
            
        elif e=="B":
            if checkB(x,y)==-2:
                return -2
        elif e=="C":
            if checkC(x,y)==-2:
                return -2
        else:
            if checkD(x,y)==-2:
                return -2
        # j+=1
    



n,m=(map(int, input().split(' ')))
s=str(input())
l=[]
# for i in range (n):
#     temp=[]
#     for j in range (m):
#         temp.append(0)
#         # x,y=(map(int, input().split(' ')))
#     l.append(temp)
x,y=(map(int, input().split(' ')))
l.append([x,y])
a=x
b=y
xl=[]
yl=[]
for i in range (n-1):
    l,m=(map(int, input().split(' ')))
    # l.append([x,y])
    xl.append(l)
    yl.append(m)
    # l[y-1][x-1]=1
solve(a,b)
print(a,b)


# print(l)
