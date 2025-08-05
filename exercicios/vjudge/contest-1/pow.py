def solution(A: int, B: int, C: int):
    if C % 2 == 0:
        if abs(A) == abs(B):
            return "="
        if abs(A) > abs(B):
            return ">"
        return "<"
    else:
        if A == B:
            return "="
        elif A > B:
            return ">"
        return "<"

A, B, C = [int(number) for number in input().split()]
print(solution(A, B, C))
