#include <stdio.h>
int main()
{
    int x, y;
    int result= 0, i;

    printf("Enter the first number: ");
    scanf("%d",&x);
   
    printf("\nEnter the second number: ");
    scanf("%d",&y);

    for(i=1;i<=y;i++) {
        result += x;
    }
   
    printf("\nMultiplication of %d and %d is: %d\n" , x, y, result);
    return 0;
}