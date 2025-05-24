#include <stdio.h>
// total of odd and even number 
int main() {
	int i = 1;
	int sumEven = 0;
	int sumOdd = 0;

	do {
		if (i % 2 == 0) {
			sumEven += i;
		} else {
			sumOdd += i;
		}

		i++;
	} while (i <= 50);

	printf("Sum of even numbers: %d\n", sumEven);
	printf("Sum of odd numbers: %d\n", sumOdd);

	return 0;
}
