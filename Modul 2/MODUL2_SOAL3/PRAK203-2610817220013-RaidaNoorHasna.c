#include <stdio.h>

int main() {
    float nilai[6];
    float a, b, i, j, x, y, hasil;

    for (int k = 0; k < 6; k++) {
        scanf("%f", &nilai[k]);
    }

    a = nilai[0];
    b = nilai[1];
    i = nilai[2];
    j = nilai[3];
    x = nilai[4];
    y = nilai[5];

    hasil = (a - b) * i / j - (x + y);

    printf("%.3f\n", hasil);

    return 0;
}