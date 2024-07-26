#include <stdio.h>
// Program to add numbers until the user enters zero

int main() {
  double number;
  double sum = 0;

  do {
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum += number;
  }
  while(number != 0.0);

  printf("Sum = %.2lf",sum);

  return 0;
}
