#include <stdio.h>

int main() {
    float nilai[2];
    float r, t, volume, luas, keliling;
    float phi = 22.0 / 7.0;

    for (int i = 0; i < 2; i++) {
        scanf("%f", &nilai[i]);
    }

    r = nilai[0];
    t = nilai[1];
    volume = phi * r * r * t;
    luas = 2 * phi * r * (r + t);
    keliling = 2 * phi * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}