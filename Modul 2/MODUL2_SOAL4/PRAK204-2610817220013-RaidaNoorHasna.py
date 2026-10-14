input_data = []
while len(input_data) < 2:
    baris = input().split()
    input_data.extend(baris)

r = float(input_data[0])
t = float(input_data[1])
phi = 22.0 / 7.0

volume = phi * r * r * t
luas = 2 * phi * r * (r + t)
keliling = 2 * phi * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")