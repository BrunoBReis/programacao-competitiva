H, W = map(int, input().split())

tmp = []
for _ in range(H):
  tmp.append([int(A) for A in input().split()])

for w in range(W):
  word = ''
  for h in range(H):
    word += f"{tmp[h][w]} " if (h < H - 1) else f"{tmp[h][w]}"
  print(word)