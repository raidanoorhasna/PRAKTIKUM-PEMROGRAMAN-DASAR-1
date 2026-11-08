data = input().split()
n = int(data[0])
kelipatan = int(data[1])

total_keseluruhan = 0

for i in range(1, n + 1):
    subtotal_baris = 0
    for j in range(i, 0, -1):
        subtotal_baris += j * kelipatan
        print(f"({j} * {kelipatan})", end="")
        if j > 1:
            print(" + ", end="")
    print(f" = {subtotal_baris}")
    total_keseluruhan += subtotal_baris

print(total_keseluruhan)