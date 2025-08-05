def filtro(N: int, a: int, b: int) -> list[int]:
  ans = []
  for num in range(N + 1):
    if num % a == 0 or num % b == 0:
      ans.append(num)
  return ans

print(*filtro(10, 2, 3))