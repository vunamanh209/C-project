#include <stdio.h>

void checkEvenOdd(int num) { // Ham khong tra ve gia tri ten checkEvenOdd va nhan tham so la so nguyen num.
    if (num % 2 == 0) { // If de kiem tra menh de
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);   // lay so nguoi dung nhap vao
    checkEvenOdd(num);  // Kiem tra va in ket qua chan le
    return 0;
}

