vertex = int(input())

while vertex is not 0:
    dic = {}
    for i in range(vertex):
        dic[i] = []
    edge = int(input())
    for i in range(edge):
        x = list(map(int, input().split()))
        dic[x[0]].append(x[1])
        dic[x[1]].append(x[0])
    for i in dic.values():
        i.sort()
    print(dic)
    dct = {}
    # print(dic[1])
    for i in range(edge):
        if i == 0:
            dct[0] = [0]
        else:
            for j in range(i+1):
                try:
                    print(j not in dic[i])
                    if j not in dic[i]:
                        try:
                            dct[j].append(i)
                            print(dic[i], i, dct[j])
                        except Exception:
                            dct[j] = [i]
                            print("E -- ", end=' ')
                            print(dic[i], i, dct[j])
                        break
                except Exception:
                    dct.update({j: [i]})
                    #break
    print(dct)
    # print(len(dct))
    print('NOT BICOLORABLE.' if len(dct) > 2 else 'BICOLORABLE.')
    vertex = int(input())
