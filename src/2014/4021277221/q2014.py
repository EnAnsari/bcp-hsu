a = int(input())
b = int(input())

if a == 1 and b == 1:
    pass
elif a == 1 and b == 2:
    print(2)
elif a == 2 and b == 2:
    print(2)
else:
    if a == 1 or a == 2:
        print(2)
    if a % 2 == 0:
        start_point = a+1
    else:
        if a == 1:
            start_point = 3
        else:
            start_point = a
    if b % 2 == 0:
        end_point = b-1
    else:
        end_point = b

    for x in range(start_point, end_point+1, 2):
        is_prime = True
        for y in range(3, int(x**0.5)+1, 2):
            if x % y == 0:
                is_prime = False
                break
        if is_prime:
            print(x)