times = int(input())
for _ in range(times):
    word = [letter for letter in input().lower()]
    if word[-1] == 'o':
        print("FILIPINO")
    elif word[-1] == 'a':
        print("KOREAN")
    else:
        print("JAPANESE")
