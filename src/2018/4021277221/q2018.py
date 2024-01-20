def getNoOfWays(x):
 if x <= 2:
  return x
 return getNoOfWays(x - 1) + getNoOfWays(x - 2)

x = int(input())
print(getNoOfWays(x))
