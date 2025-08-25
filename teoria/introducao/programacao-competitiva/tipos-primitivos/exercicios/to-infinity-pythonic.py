def solve(string: str, K: int) -> str:
    return next((c for i, c in enumerate(string) if c != '1' and i < K), '1')

def solve_new(string: str, K: int) -> str:
    return next((c for i, c in string[:K] if c != '1'), '1')

S = input().strip()
K = int(input())
print(solve(S, K))
