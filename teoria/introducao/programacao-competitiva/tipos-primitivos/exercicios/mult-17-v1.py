nums = []
while(True):
    try:
        line = int(input().strip())
        if line == 0:
            continue
        nums.append(line)
    except EOFError:
        break
    
ans = ['1' if x % 17 == 0 else '0' for x in nums]

print('\n'.join(ans))