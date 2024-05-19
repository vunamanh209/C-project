#include <stdio.h>

// The average total of 10 numbers depends on the user
int main() {
    int numbers[10];
    int i;
    int sum = 0;
    float average;

    for (i = 0; i < 10; ++i) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &numbers[i]);
		sum += numbers[i];
    }
    average = sum / 10;

    printf("The average of the elements in the array is: %.2f\n", average);

    return 0;
}

