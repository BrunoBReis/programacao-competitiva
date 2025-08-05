import itertools

def solution(A: list[int]) -> list[list[int]]:
  return [list(p) for p in itertools.permutations(A)]

A = list(map(int, input().split()))
print(solution(A))