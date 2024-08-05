#include <stdio.h>

void addTheNumbers(int a, int b) { // Ham khong tra ve gia tri addTheNumbers va nhan 2 tham so la so nguyen a và b.
    int sum = a + b;
    printf("Sum: %d\n", sum);
}

int main() {
    int num1, num2; // khai bao 2 gia tri num1 va num2
    
    printf("Enter num1: "); // yeu cau nguoi dung nhap so num1
    scanf("%d", &num1);
    
    printf("Enter num2: "); // yeu cau nguoi dung nhap so num2
    scanf("%d", &num2);
    
    addTheNumbers(num1, num2); // goi ham voi 2 tham so va tinh tong
    return 0;
}

