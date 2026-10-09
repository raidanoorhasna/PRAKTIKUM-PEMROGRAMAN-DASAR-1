#include <stdio.h>

int main() {
    int banyak_putaran = 5;
    int jarak = 14;
    float phi = 3.14;

    float jari_jari = jarak / (banyak_putaran * 2 * phi);

    printf("Diketahui:\n");
    printf("Pak Dengkelek mengelilingi taman = %d Putaran\n", banyak_putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", jarak);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah : %.2f Kilometer\n", jari_jari);

    return 0;
}