y = ""
z = ""
for i in range(1,5001):
    y += str(i)
k = len(y)
n10 = int(y)
num1 = int(input())
mos = k - num1
mos1 = 10**mos
num2 = n10 // mos1
num3 = str(num2)
num4 = num3[-1]
print(num4)
