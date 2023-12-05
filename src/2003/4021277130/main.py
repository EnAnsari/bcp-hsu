x=int(input("Enter The Num : "))
y=0
i=1
temp=0
while y==0 :
    n=0
    temp=temp+i
    j=1
    while j<=temp:
        if temp%j==0:
            n+=1
        j+=1 
    if x==n:
        print(temp)
        y+=1
    i+=1