while(True):
    try:
        line = input()
        x, y = [number for number in line.split()]
    except EOFError:
        break