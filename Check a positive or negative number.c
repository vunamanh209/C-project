#include <stdio.h>
#include <stdlib.h>

/* Enter the random number and check that number is positive or negative */

	int main() {
	int n;
	printf("Enter the number%d :", n);
	scanf("%d", &n);
	if (n > 0) {
		printf("n is a positive number");
	} else if (n < 0) {
		printf("n is a negative number");
	} else {
		printf("n is equal to 0");
	}
	return 0;
}
