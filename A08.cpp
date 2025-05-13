#include <stdio.h>

int main() {
    int n;
    
    // Nhập số lượng phần tử
    printf("Enter the n number: ");
    scanf("%d", &n);

    // Khai báo mảng với kích thước n
    float a[n];

    // Nhập các phần tử của mảng
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
    printf("Số lớn nhất trong dãy là: %.2f\n", max);

    return 0;
}
