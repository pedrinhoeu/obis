lista = [(x[:2], x[3:]) for x in input().split()]

dist_a = int(lista[0][0])*60 + int(lista[0][1])
chegada_a = int(lista[1][0])*60 + int(lista[1][1])
dist_b = int(lista[2][0])*60 + int(lista[2][1])
chegada_b = int(lista[3][0])*60 + int(lista[3][1])

voo = (chegada_a - dist_b + chegada_b - dist_a)//2

voo %= (12*60)

difa = (chegada_a - dist_a - voo)

difa %= 60 * 24
difa //= 60

if(difa > 12):
    difa -= 24

print(voo, difa)