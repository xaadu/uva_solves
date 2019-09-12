while True:
    try:
        x = list(map(int, input().split()))
        if x[0] > 1:
            past = abs(x[1]-x[2])
        else:
            past = 0
        for i in range(2, len(x)-1):
            y = abs(x[i]-x[i+1])
            dff = abs(y-past)
            if dff != 1:
                print('Not jolly')
                break
            past = y
        else:
            print('Jolly')
    except EOFError:
        break
Not Done