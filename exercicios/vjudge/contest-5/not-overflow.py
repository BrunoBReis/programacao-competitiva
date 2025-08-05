import math
N = int(input())
C = int(math.pow(2,31))
if N >= -C and N <= C - 1:
  print("Yes")
else:
  print("No")