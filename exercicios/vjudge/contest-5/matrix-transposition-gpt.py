h, w = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(h)]

print(list(zip(*matrix)))

for row in zip(*matrix):
  print(*row)