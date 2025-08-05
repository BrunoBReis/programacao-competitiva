import itertools

def solution(A: list[int], K: int) -> list[list[int]]:
  return [list(p) for p in itertools.combinations(A, K)]

A = list(map(int, input().split()))
print(solution(A, 2))