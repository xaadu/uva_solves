while True:
    try:
        x, y = map(int, input().split())
        print(x*y*2)
    except EOFError:
        break
