#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[1000];
    int i;
    
    // Prompt the user to enter the elements
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Print even numbers
    printf("Even numbers are: ");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n"); // Print newline for better output formatting

    return 0;
}

