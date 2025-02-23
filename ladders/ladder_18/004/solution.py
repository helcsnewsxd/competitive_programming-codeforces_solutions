line = input()
print(0 if line == "{}" else len(set(line[1:-1].split(", "))))
