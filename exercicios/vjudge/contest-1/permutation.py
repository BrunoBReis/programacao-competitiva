def solution(numbers: list):
    for number in numbers:
        if int(numbers.count(number)) != 1:
            return "No"
    return"Yes"

N = int(input())
numbers = [int(number) for number in input().split()]
if len(numbers) != N:
    exit()
print(solution(numbers))