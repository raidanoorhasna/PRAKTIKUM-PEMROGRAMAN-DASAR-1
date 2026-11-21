def reverse(n):
    rev = 0
    while n > 0:
        rev = rev * 10 + (n % 10)
        n //= 10
    return rev

data = input().split()
A = int(data[0])
B = int(data[1])

A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))