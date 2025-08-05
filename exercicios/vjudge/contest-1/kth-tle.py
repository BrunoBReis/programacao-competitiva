numbers = [number for number in range(100_000)]
def solution(integers: list, positions: list):
    for number in integers:
        numbers.remove(number)
    new_numbers = sorted(numbers)
    for position in positions:
        print(new_numbers[position])

N, Q = [int(number) for number in input().split()]
integers = [int(number) for number in input().split()]
if len(integers) != N:
    exit()
positions = []
for _ in range(Q):
    positions.append(int(input()))
solution(integers, positions)