from sys import stdin

numbers = [int(x) for x in stdin.readlines()][:-1]
ans = ['1' if x % 17 == 0 else '0' for x in numbers]

print('\n'.join(ans))