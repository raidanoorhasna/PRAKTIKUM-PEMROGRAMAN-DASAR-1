Bilangan = int(input())

if Bilangan == 0:
    print("Nol")
elif Bilangan >= 100 or Bilangan < 0:
    print("Anda Menginput Melebihi Limit Bilangan")
elif 1 <= Bilangan <= 9:
    print("Satuan")
elif 11 <= Bilangan <= 19:
    print("Belasan")
else:
    print("Puluhan")