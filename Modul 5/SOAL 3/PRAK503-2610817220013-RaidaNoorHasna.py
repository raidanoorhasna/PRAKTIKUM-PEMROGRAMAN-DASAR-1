def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b

bilangan = int(input())
data = input().split()

maks = -100000
minim = 100000

batas = 0
while batas < bilangan:
    nilai = int(data[batas])
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
    batas += 1

print(f"{maks} {minim}")