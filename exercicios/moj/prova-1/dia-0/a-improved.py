import math

TIMES = 3

def solution(M: int, N: int) -> int:
  return math.comb(M, TIMES) * math.comb(N, TIMES)

M, N = input().split()
M = int(M)
N = int(N)
print(solution(M, N))