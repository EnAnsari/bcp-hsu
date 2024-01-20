x = int(input())

list = []
for i in range(x):
    j = input()
    list.append(j.title())
print("\n".join(list))