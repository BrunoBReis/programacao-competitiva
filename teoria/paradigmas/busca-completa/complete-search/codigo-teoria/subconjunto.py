def solution(list: list[int], n: int) -> None:
  for mask in range(1 << n):
    subset = [list[i] for i in range(n) if mask & (1 << i)]
    print(subset)

K = [int(num) for num in input().split()]
solution(K, len(K))