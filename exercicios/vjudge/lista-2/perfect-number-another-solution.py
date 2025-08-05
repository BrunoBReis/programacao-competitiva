k = int(input())

curr = 0

while k > 0:
  curr += 1
  sm = sum(map(int, list(str(curr))))

  if sm == 10:
    k -= 1
  elif sm < 10:
    curr += 10 - sm - 1
  else:
    curr += 10 - (curr % 10) - 1

print(curr)