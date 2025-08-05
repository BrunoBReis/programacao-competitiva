import sys

for line in sys.stdin:
    line = line.strip()
    if not line:
        continue
    num = int(line)
    if num == 0:
        continue
    print('1' if num % 17 == 0 else '0')
