#include <stdio.h>
#include <stdlib.h>

/* Write a program to input two integers a and b from the keyboard. Using While
Then display on the screen the numbers from a to b that are divisible by both 3 and 5. */

int main(int argc, char *argv[]) {
	int a, b;
	printf("Enter a and b: ");
	scanf("%d%d", &a, &b);
	while (a <= b) {
		if (a % 3 == 0 && a % 5 == 0) {
			printf("%d ", a);
		}
		a++;
	}
	return 0;
}
