n = int(input())

for i in range(n):
    x, c = input(), 0
    while x != x[::-1]:
        x = str(int(x)+int(x[::-1]))
        c += 1
    print(c, x)
