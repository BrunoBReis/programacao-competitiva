data = input()
cpf = [letter for letter in data if letter not in ["-", "."]]
current = ""
for letter in cpf:
    if len(current) == 3:
        print(current)
        current = ""
    current += letter
print(current)