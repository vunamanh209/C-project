#include <stdio.h>

void addTheNumbers(int a, int b) {
    int sum = a + b;
    printf("Sum: %d\n", sum);
}

int main() {
    int num1, num2;
    
    printf("Enter num1: ");
    scanf("%d", &num1);
    
    printf("Enter num2: ");
    scanf("%d", &num2);
    
    addTheNumbers(num1, num2);
    return 0;
}

