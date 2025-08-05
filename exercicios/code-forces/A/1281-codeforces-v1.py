times = int(input())

for _ in range(times):
    word = input().lower()
    if word.endswith('o'):
        print("FILIPINO")
    elif word.endswith('a'):
        print("KOREAN")
    else:
        print("JAPANESE")
