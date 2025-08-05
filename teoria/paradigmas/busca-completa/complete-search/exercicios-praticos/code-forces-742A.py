def solution(n: int) -> int:
  possible = [6, 8, 4, 2]
  if n == 0:
    return 1
  if n == 1:
    return 8
  return possible[n % 4]
  

n = int(input())
print(solution(n))