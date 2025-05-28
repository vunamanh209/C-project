#include <stdio.h>

//Write a C program to display a pattern like a right angle triangle with a number.

void main() {
	int i, j, rows;

	printf("Input number of rows : ");
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= i; j++)
			printf("%d", j);
		printf("\n");
	}
	return 0;
}
