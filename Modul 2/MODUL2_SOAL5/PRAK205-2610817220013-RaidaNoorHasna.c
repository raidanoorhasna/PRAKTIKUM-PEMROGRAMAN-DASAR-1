#include <stdio.h>
#include <math.h>

int main() {
    float nilai [2];
    for (int i = 0; i < 2; i++) {
        scanf("%f", &nilai[i]);
    }
    
    float A = nilai[0];
    float B = nilai[1];
    float C = sqrt((B * B) - (A * A));

    float keliling = A + B + C;
    float luas = 0.5 * C * A;

    printf("Alas = %d cm\n", (int)C);
    printf("Tinggi = %d cm\n", (int)A);
    printf("Keliling = %d cm\n", (int)keliling);
    printf("Luas = %d cm^2\n", (int)luas);


}