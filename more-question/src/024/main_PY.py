n=int(input("Enter The Num For Lenght : "))
m=int(input("Enter The Num For HOP : "))
i=1
while i<=n:
    
    if i%m==0 :
        #\n For create a new line
        print("HOP\n")
        
    else :
        print(i)
    i+=1
