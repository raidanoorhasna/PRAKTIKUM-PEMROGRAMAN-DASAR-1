#include <stdio.h>

int main() {
    int Bilangan;
    scanf("%d", &Bilangan);

    if (Bilangan == 0) {
        printf("Nol\n");
    } else if (Bilangan >= 100 || Bilangan < 0) {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    } else if (Bilangan >= 1 && Bilangan <= 9){
        printf("Satuan\n");
    } else if (Bilangan >= 11 && Bilangan <= 19) {
        printf("Belasan");
    } else {
        printf("Puluhan\n");
    }

    return 0;
}