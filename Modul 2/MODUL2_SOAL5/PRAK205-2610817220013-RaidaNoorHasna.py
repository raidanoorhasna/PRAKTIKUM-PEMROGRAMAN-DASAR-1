import math

input_data = []
while len(input_data) < 2:
    baris = input().split()
    input_data.extend(baris)

A = float(input_data[0])
B = float(input_data[1])
C = math.sqrt(B**2 - A**2)

keliling = A + B + C
luas = 0.5 * C * A

print(f"Alas = {int(C)} cm")
print(f"Tinggi = {int(A)} cm")
print(f"Keliling = {int(keliling)} cm")
print(f"Luas = {int(luas)} cm^2")