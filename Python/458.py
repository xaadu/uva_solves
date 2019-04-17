while True:
    try:
        x = input()
        for i in x:
            print(chr(ord(i)-7), end='')
        print()
    except EOFError:
        break
Not Done