n=int(input())
x=0
y=0
z=0
w=n
i=0
while i<w :
    j=0
    while j<w :
        w=n-(i+j)
        if pow(w,2)==pow(i,2)+pow(j,2) :
            x=i
            y=j
            z=w
        j+=1
    i+=1

if x!=0  :
    if x>=y :
        print(y," ")
        print(x," ")
        print(z)
    else :
        print(y," ")
        print(x," ")
        print(z)
else :
    print("Impossible")
