#include <stdio.h> 
/* Write a program in C to print Floyd's Triangle.
The Floyd's triangle is as below :

1 
01 
101
0101
10101 */

int main() {
	int i, j, n, p, q;

	printf("Input number of rows : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			p = 1;
			q = 0;
		} else {
			p = 0;
			q = 1;
		}

		for (j = 1; j <= i; j++) {
			if (j % 2 == 0)
				printf("%d", p);
			else
				printf("%d", q);
		}

		printf("\n");
	}
	return 0;
}
