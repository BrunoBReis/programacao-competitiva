N, R = map(int, input().split())
G = list(map(int, input().split()))

G.sort()

count = 0
for g in G:
  if g <= R:
    if R == 0:
      break
    R -= g
    count += 1

print(count)