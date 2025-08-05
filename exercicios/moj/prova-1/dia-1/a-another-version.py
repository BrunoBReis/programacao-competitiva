N, R = map(int, input().split())
G = list(map(int, input().split()))

G.sort()

count = 0
times = 0 
for g in G:
  count += g
  if count <= R:
    times += 1
  else:
    break
print(times)