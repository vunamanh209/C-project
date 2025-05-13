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

    // Tìm số lớn nhất
    float max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    // In kết quả
    printf("The largest number is: %.2f\n", max);

    return 0;
}
