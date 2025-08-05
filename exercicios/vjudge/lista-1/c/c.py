def solution(S: str) -> int:
  n = len(S)
  total = 0
  for mask in range(1 << (n - 1)):
    cur = 0
    sub_total = 0
    for i, ch in enumerate(S):
      cur = cur * 10 + int(ch) # 0 = 0 * 10 + 1; 1 = 1 * 10 + 2; 12 = 12 * 10 + 3; 123;
      # se chegar ao final do numero ou 
      if i == n - 1 or (mask & (1 << i)):
        sub_total += cur 
        cur = 0 
    total += sub_total
  return total
 
S = input().strip()
print(solution(S))