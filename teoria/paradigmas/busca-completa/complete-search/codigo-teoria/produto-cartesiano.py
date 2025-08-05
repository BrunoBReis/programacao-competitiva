A = [int(num) for num in input().split()]
B = [int(num) for num in input().split()]
ab = []
for a in A:
  for b in B:
    ab.append([a, b])
print(ab)