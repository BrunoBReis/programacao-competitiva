def dis(a: list[int, int], b: list[int, int]) -> int:
  return abs(a[0] - b[0]) + abs(a[1] - b[1])

N, M = map(int, input().split())

n = []
m = []
for _ in range(N):
  n.append([a for a in map(int, input().split())])

for _ in range(M):
  m.append([a for a in map(int, input().split())])

for ns in n:
  k = 0
  for i, ms in enumerate(m):
    if dis(ns, m[i]) < dis(ns, m[k]):
      k = i
  print(k + 1)
