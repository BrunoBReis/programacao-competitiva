def solution(students: list, checkpoints: list) -> int:
    options = []
    for student in students:
        for i, checkpoint in enumerate(checkpoints, start=1):
            options.append([i,(abs(student[0] - checkpoint[0]) + abs(student[1] - checkpoint[1]))])
        print(min(options, key=lambda x: x[1])[0])
        options.clear()


N, M = [int(number) for number in input().split()]
students, checkpoints = []
for _ in range(N):
    students.append([int(coordenate) for coordenate in input().split()])
for _ in range(M):
    checkpoints.append([int(coordenate) for coordenate in input().split()])

solution(students, checkpoints)