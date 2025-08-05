N = int(input())

A = input().count("*")
B = input().count("*")
if B == 0:
  print("1.00")
else:
  print(format(abs((B / A) - 1.0), '.2f'))