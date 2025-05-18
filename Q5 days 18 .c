#include <stdio.h>

int main() {
    int n;

    do {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }
    } while (n <= 0);

    printf("In cac so tu %d ve 1: ", n);


    do {
        printf("%d ", n);
        n--;
    } while (n > 0);

    printf("\n");
    return 0;
}
