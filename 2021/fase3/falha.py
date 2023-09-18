n = int(input())

lis = []
subs = []
map = {}

resp = 0
for i in range(0, n):
    pala = str(input())
    lis.append(pala)
    temp = set()
    for j in range(len(pala)):
        tempo = ""
        for k in range(j, len(pala)):
            tempo += pala[k]
            temp.add(tempo)
    for k in temp:
        if k in map.keys():
            map[k] += 1
        else:
            map[k] = 1
for i in lis:
    resp += map[i]

print(resp-n)