# math Is a Library From Python For Mathematical works
import math

a = int(input("Coefficient 1 : "))
b = int(input("Coefficient 2 : "))
c = int(input("Coefficient 3 : "))

if a!=0:
    
    delta = ((b * b ) - ( 4 * a * c ))
    if delta > 0 :
         Root1 = ( -b + math.sqrt(delta) ) / ( 2 * a )
         Root2 = ( -b - math.sqrt(delta) ) / ( 2 * a )
         print("It Has Two Roots")
         print("Root 1 : ",Root1)
         print("Root 2 : ",Root2)

    elif delta == 0 :
        Root1 = (-b) / ( 2 * a )
        print(Root1,"Root 1 : ")

    else:
        print("No Root")    
        
else:
    print("It's Impossible")        

