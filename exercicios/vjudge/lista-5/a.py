N = input()
nN = len(N)

tmp = []
count = 0
for n in range(1 << nN):
  value = int(str(bin(n)).replace("0b", ""))
  if (value <= int(N) and value != 0):
    count += 1

print(count)