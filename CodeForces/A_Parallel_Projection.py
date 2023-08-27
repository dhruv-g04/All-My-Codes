for t in range(0,int(input())):
    w,d,h=map(int,(input()).split(" "))
    a,b,f,g=map(int,(input()).split(" "))
    # if dis==
    dist1=abs(a-f)+min(b+g,d-b+d-g)+h
    dist2=abs(b-g)+min(a+f,w+w-a-f)+h
    print(min(dist1,dist2))