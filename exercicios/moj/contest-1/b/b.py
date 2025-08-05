N = int(input())
ans = [float(a) * i for i, a in enumerate(input().split(), 1)]
tot = sum(ans) / ((len(ans) / 2) * (1 + len(ans)))
print(f"Sim\n{format(tot, '.2f')}" if float(format(tot, '.2f')) >= 5.0 else f"Nao\n{format(tot, '.2f')}")