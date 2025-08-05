TIMES = 3
FAC_TIMES = 6

def factorial(N: int, carry=0) -> int:
  if N == 1 or N == 0:
    if carry == 0:
      return 1
    return carry
  if carry == 0:
    carry = N
  else:
    carry *= N
  return factorial(N - 1, carry=carry)

def solution(M: int, N: int) -> int:
  a = factorial(M) // (FAC_TIMES * factorial(M - TIMES))
  b = factorial(N) // (FAC_TIMES * factorial(N - TIMES))
  return a * b

M, N = input().split()
M = int(M)
N = int(N)
print(solution(M, N))