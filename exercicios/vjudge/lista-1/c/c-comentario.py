def solution(S: str) -> int:
  n = len(S)
  total = 0
  print(f"Current number: {S}")
  for mask in range(1 << (n - 1)):
    print("-" * 5)
    print(f"Current possibility: {bin(mask)}")
    cur = 0
    sub_total = 0
    for i, ch in enumerate(S):
      cur = cur * 10 + int(ch) # 0 = 0 * 10 + 1; 1 = 1 * 10 + 2; 12 = 12 * 10 + 3; 123;
      print(f"Current cur: {cur}")
      # se chegar ao final do numero ou 
      if i == n - 1 or (mask & (1 << i)):
        print(f"i == n -1 -> {i == n -1} \nmask & (1 << i) -> {True if mask & (1 << i) > 0 else False}")
        print(f"Mask for this case: {bin(mask)} and {bin(1 << i)} => {bin(mask & (1 << i))}")
        sub_total += cur 
        cur = 0 
      print(f"Current subtotal[{mask}]: {sub_total}")
    total += sub_total
    print(f"Current sum: {total}")
  return total
 
S = input().strip()
print(solution(S))