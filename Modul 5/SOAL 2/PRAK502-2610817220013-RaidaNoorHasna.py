def mutlak(angka):
    if angka < 0:
        return -angka
    return angka

def hitung(nilai1, nilai2):
    return mutlak(nilai1 - nilai2)

data = input().split()
a = int(data[0])
c = int(data[1])
b = int(data[2])
d = int(data[3])

Hasil = hitung(a, b) + hitung(c, d)
print(mutlak(Hasil))