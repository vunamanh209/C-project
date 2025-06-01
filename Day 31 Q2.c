#include <stdio.h>
#include<math.h>
//Write a program in C to display the multiplication table for a given integer.

void main() {
	int j, n;
	printf("Input the number (Table to be calculated) : ");
	scanf("%d", &n);
	printf("\n");

	for (j = 1; j <= 10; j++) {
		printf("%d X %d = %d \n", n, j, n * j);
	}
}
