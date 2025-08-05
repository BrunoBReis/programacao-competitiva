def solution(A: int, B: int):
    answer = (B / 100) * A
    if B % 100 == 0:
        return int(answer)
    return round(answer, 2)

A, B = [int(number) for number in input().split()]
print(solution(A, B))