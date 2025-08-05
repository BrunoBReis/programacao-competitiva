N, M = map(int , input().split())

n = [tuple(map(int, input().split())) for _ in range(N)]
m = [tuple(map(int, input().split())) for _ in range(M)]

for (a, b) in n:
  menor = min(
    range(M),
    key=lambda x: abs(a - m[x][0]) + abs(b - m[x][1])
  )
  print(menor + 1)