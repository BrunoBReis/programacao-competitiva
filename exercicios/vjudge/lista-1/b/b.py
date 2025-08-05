def o3_solution(K: int, S: int) -> int:
    count = 0
    for x in range(K + 1):
        for y in range(K + 1):
            for z in range(K + 1):
                if (x + y + z == S):
                    count += 1
    return count

def o2_solution(K: int, S: int) -> int:
    count = 0
    for x in range(K + 1):
        for y in range(K + 1):
            if (S - (x + y) <= K and S - (x + y) >= 0):
                count += 1
    return count


K, S = input().split()
# print(o3_solution(int(K), int(S)))
print(o2_solution(int(K), int(S)))