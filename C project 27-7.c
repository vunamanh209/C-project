#include <stdio.h>

// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers
int main()
{
    int num;
    int count;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d", sum);

    return 0;
}
