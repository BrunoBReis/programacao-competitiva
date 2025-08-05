numbers = [number for number in range(1, 100_001)]
def solution(integers: list, positions: list):
    count = 0
    for position in positions:
        for removed_number in integers:
            if numbers[position] > removed_number or numbers[position] == removed_number:
                count += 1
            continue
        print(numbers[position + count])
        count = 0


N, Q = [int(number) for number in input().split()]
integers = [int(number) for number in input().split()]
if len(integers) != N:
    exit()
positions = []
for _ in range(Q):
    positions.append(int(input()))
print(len(numbers))