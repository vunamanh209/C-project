#include <stdio.h>
/* chia het cho 2,3 va 5 */
int main() {
    int i,a, b;
    printf("Enter 2 number: ");
    scanf("%d%d", &a, &b);

    printf("Number divisible by 2: ");
    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Number divisible by  3: ");
    for ( i = a; i <= b; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Number divisible by 5: ");
    for ( i = a; i <= b; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

