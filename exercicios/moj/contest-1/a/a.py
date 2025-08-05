def solve(M, Ymax) -> float:
  return ((Ymax - (M * Ymax)) / (M + 1))

M, Ymax = map(float, input().split())

print(format(solve(M, Ymax), '.8f'))