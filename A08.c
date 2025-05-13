//Nhap so n va day cac so thuc a[0], a[1],...,a[n-1] va tim so lon nhat trong nay

#include <stdio.h>

int main() {
    int n;
    
    // Nhap so luong phan tu
    printf("Enter the n number: ");
    scanf("%d", &n);

    // Khai bao mang voi kich thuoc n
    float a[n];

    // Nhap cac phan tu cua mang
    printf("Enter %d decimal number:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }

    // Tim so lon nhat
    float max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    // in ket qua
    printf("The largest number is: %.2f\n", max);

    return 0;
}
