import re
while True:
    try:
        x, c = input(), 0
        x = re.sub('[^a-z^A-Z]', ' ', x)
        x = x.split()
        print(len(x))
    except EOFError:
        break
