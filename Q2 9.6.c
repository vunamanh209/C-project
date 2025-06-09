#include <stdio.h>

/* Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Test Data :
Input the number of terms : 5
Expected Output :
1 + 11 + 111 + 1111 + 11111
The Sum is : 12345 */


int main() {
	int n, i;
	long sum = 0;
	long int t = 1;

	printf("Input the number : ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		printf("%ld  ", t);

		if (i < n) {
			printf("+ ");
		}

		sum = sum + t;
		t = (t * 10) + 1;
	}

	printf("\nThe Sum is : %ld\n", sum);
	return 0;
}
