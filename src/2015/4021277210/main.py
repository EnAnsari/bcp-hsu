index = 1
Area = 3
Coordinates = {0, 0}
x=int(input())
i=1
while i<x :
    if Area==1 :
        Coordinates[0] -=index
    elif Area==2 :
        Coordinates[1] -=index
    elif Area==3 :
        Coordinates[0] +=index
    elif Area==4 :
        Coordinates[1] +=index
    Area +=1
    Area %=4

    if i%2==0 :
        index +=1
print(Coordinates[0]," ",Coordinates[1])