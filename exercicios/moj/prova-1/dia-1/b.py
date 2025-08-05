import math
date = input().replace('/', '')
buff = {}
for d in date:
  if d in buff:
    buff[d] += 1
    continue
  buff[d] = 1

sum = 1
for value in buff.values():
  if value != 1:
    sum *= math.factorial(value)

# print(sum if sum != 0 else 1)
print(720 // sum if sum != 0 else 1)

