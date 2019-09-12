n = int(input())
for i in range(n):
    x, y, s = int(input()), int(input()), 0
    for j in range(x, y+1):
        if j % 2 is not 0:
            s += j
    print('Case %d: %d' % ((i+1), s))
