#include <stdio.h>

int main() {
    int a, b;
    int arr[100];
    int n = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int i;
    for (i = a; i <= b; i++) {
        arr[n] = i;
        n++;
    }

    printf("Numbers divisible by 2: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    printf("Numbers divisible by 3: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    printf("Numbers divisible by 5: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 5 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

