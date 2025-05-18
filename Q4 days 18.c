#include <stdio.h>
// tinh tong tu 1 den n bang vong lap do ... while
int main() {
    int n;
    int i = 1;
    int tong = 0;


    do {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
    } while (n <= 0);

    do {
        tong = tong + i;
        i++;
    } while (i <= n);

    printf("Tong tu 1 den %d la: %d\n", n, tong);

    return 0;
}
