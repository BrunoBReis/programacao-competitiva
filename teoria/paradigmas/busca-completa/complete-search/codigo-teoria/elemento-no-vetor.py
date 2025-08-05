def solution(nums: list[int], X: int) -> int:
  for i, ch in enumerate(nums):
    if ch == X:
      return i
  return "Not Found"


X = int(input())
M = int(input())
nums = [int(num) for num in input().split()]
print(solution(nums, M))