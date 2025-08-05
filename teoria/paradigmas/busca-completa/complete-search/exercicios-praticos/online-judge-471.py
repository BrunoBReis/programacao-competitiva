from sys import stdin

V = int(input())

for _ in range(V * 2):
  num = input()
  if num == '': 
    continue
  else:
    for e in num:
      print(e)
    
