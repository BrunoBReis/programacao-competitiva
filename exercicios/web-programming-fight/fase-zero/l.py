M = int(input())
times = 0 
while (2 << times) <= M * 8000000:
  times += 1

print(times + 1)