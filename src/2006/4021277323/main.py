
a = int(input())
b = int(input())
max = a if a > b else b
min = b if a > b else a

for i in range(min, max+1):
    flg = True
    for j in range(2, i):
        if i % j == 0:
            flg = False
    if flg and i != 1:
        print(i)
