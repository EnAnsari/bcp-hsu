def khayam(n):
    for i in range(n):
        
        a=1
        for j in range(i+1):
            print(a,end=" ")
            a=a*(i-j)//(j+1)

        print()

num_rows=int(input())

khayam(num_rows)