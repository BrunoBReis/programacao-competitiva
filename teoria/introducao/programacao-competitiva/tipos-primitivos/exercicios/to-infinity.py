def solve(str: str, k_element: int) -> str:
    for char in str:
        if char != '1':
            return char
        k_element -= 1
        if k_element == 0:
            break
    return '1'

str = input().strip()
k_element = int(input())

print(solve(str,  k_element))
