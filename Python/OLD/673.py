n = int(input())

for i in range(n):
    x, y, ok = list(input()), [], True
    for j in x:
        try:
            if j == '(':
                y.append(j)
            elif j == '[':
                y.append(j)
            elif j == ']':
                if y.pop() == '[':
                    continue
                else:
                    ok = not ok
                    break
            elif j == ')':
                if y.pop() == '(':
                    continue
                else:
                    ok = not ok
                    break
        except Exception:
            ok = not ok
            break
    if len(y) != 0:
        ok = False
    print('Yes' if ok else 'No')
