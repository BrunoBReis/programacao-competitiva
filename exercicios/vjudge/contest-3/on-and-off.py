# o dia começa no 0 e termina no 23
# exemplo
# ele liga as 7 e desliga as 20
# ou seja, ficou ligado das 7 as 20 do mesmo dia

S, T, X = input().split()
if S < T:
  if X < T:
    print("Yes")
  else:
    print("No")
else:
  if X >= S and X < T:
    print("Yes")
  else:
    print("No")