x=int(input("Enter The Num : "))
z=1
max=x
i=2
while i<=5 :
    x=int(input("Enter The Num : "))
    if x>max :
        max=x
        z=1
    elif max==x:
        z+=1
    i+=1


print("Repetition : ",z)
print("Maximum : ",max)
        
    
