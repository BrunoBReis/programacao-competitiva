N = int(input())
numbers = [int(num) for num in input().split()]
numbers.sort()
tmp = []
ans = []

for _ in range((N // 2) + 1 if N > 2 else 1):
  tmp.append(numbers.pop())
  num = abs(sum(tmp) - sum(numbers))
  if not ans:
    ans.append(num)
  elif num < ans[-1]:
    ans.append(num)
  elif ans[-1] <= 1:
    break
print(ans[-1])