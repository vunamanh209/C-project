#include <stdio.h>
// Write a program in C to find the sum of all elements of an array.
int main() {
	int a[100];
	int i, n, sum = 0;

	printf("Input the number of elements to be stored in the array :");
	scanf("%d", &n);
	printf("Input %d elements in the array :\n", n);
	for (i = 0; i < n; i++) {
		printf("element of %d : ", i);
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		sum += a[i];
	}
	printf("Sum of all elements stored in the array is : %d\n\n", sum);
	return 0;
}
