#include <stdio.h>
// Dung do...while de yeu cau 1 nguoi nhap so nguyen duong, neu sai thi nhap lai
int main() {
    int n;

    do {
        printf("Nhap mot so nguyen duong (> 0): ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Sai! Vui long nhap lai.\n");
        }

    } while (n <= 0);

    printf("Ban da nhap dung: %d\n", n);

    return 0;
}
