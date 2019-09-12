start = True
while True:
    try:
        x = list(input())
        for i in range(len(x)):
            if x[i] == '"' and start:
                x[i] = '`'
                x = x.insert(i+1, '`')
                start = not start
            elif x[i] == '"' and not start:
                x[i] = "'"
                x = x.insert(i + 1, "'")
                start = not start
            else:
                continue
    except EOFError:
        break
Not End