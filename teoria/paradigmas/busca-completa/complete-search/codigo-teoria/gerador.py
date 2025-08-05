def gerador(N: int, a: int, b: int) -> list[int]:
  ans = []
  for ai in range(a, N + 1, a):
    ans.append(ai)
  for bi in range(b, N + 1, b):
    if (bi % a != 0):
      ans.append(bi )
  return ans

N = 10
print(*gerador(N, 2, 3))