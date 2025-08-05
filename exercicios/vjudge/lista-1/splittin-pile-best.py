N = int(input())
numbers = [int(num) for num in input().split()]
total = sum(numbers)
kept = 0
best = float('inf')


for _ in range(N - 1):
  x = numbers.pop()
  kept += x
  total -= x
  diff = abs(kept - total)
  if diff < best:
    best = diff
    if best == 0:
      break 
print(best)