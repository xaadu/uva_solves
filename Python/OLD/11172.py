n = int(input())

for i in range(n):
    x, y = map(int, input().split())
    print('<' if x < y else '>' if x > y else '=')
