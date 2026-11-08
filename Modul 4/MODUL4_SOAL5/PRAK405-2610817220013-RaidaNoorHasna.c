#include <stdio.h>

int main() {
    int n, kelipatan;
    scanf("%d %d", &n, &kelipatan);

    int total_keseluruhan = 0;

    for (int i = 1; i <= n; i++) {
        int subtotal_baris = 0;
        for (int j = i; j >= 1; j--) {
            subtotal_baris += j * kelipatan;
            printf("(%d * %d)", j, kelipatan);
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", subtotal_baris);
        total_keseluruhan += subtotal_baris;
    }
    printf("%d\n", total_keseluruhan);

    return 0;
}