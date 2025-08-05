lines = int(input())
for _ in range(lines):
    line = input()
    x, y = [int(number) for number in line.split()]
    print(x + y)
