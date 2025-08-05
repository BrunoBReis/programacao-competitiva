while(True):
    line = input()
    x, y = [int(number) for number in line.split()]
    if (x == -1 and y == -1):
        break
    print(x + y)