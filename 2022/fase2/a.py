c = int(input())
d = int(input())
q = int(input())

d = d - (c*q)

print(f"{max(d/c, 0):.1f}")