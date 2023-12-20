char = input()
result = ['','','']
for i in range(2):
    for k in range(1,len(char)+1):
        if i == 0:
            if k %3 == 0:
                result[0] += '..*.'
            else:
                result[0] += '..#.'
            if k == len(char):
                result[0] += '.'
        if i == 1:
            if k %3 == 0:
                result[1] += '.*.*'
            else:
                result[1] += '.#.#'
            if k == len(char):
                result[1] += '.'
for i in range(1,len(char)+1):
    if i != 1 and (i%3 == 0 or i%3 == 1):
        result[2] += f'*.{char[i-1]}.'
    else:
        result[2] += f'#.{char[i-1]}.'
    if i == len(char):
        if i != 1 and i%3 == 0:
            result[2] += '*'
        else:
            result[2] += '#'
print(result[0])
print(result[1])
print(result[2])
print(result[1])
print(result[0])