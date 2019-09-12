n = int(input())

for i in range(n):
    x = list(map(int, input().split()))
    x.sort()
    print('Case %d: %d' % (i+1, x[1]))
