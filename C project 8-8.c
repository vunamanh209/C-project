#include<stdio.h>

int main() {
    int a, b;
    int *num1, *num2;
    
    printf("Enter two integer number: ");
    scanf("%d %d", &a, &b);
    
    num1 = &a;
    num2 = &b;
    
    if (*num1 > *num2) {
        printf("The larger number is: %d\n", *num1);
    } else {
        printf("The larger number is: %d\n", *num2);
    }
    
    return 0;
}

