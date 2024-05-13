#include <stdio.h>
#include <stdlib.h>

/* Input 10 integers from the keyboard and display the sum of these 10 numbers. */

int main(int argc, char *argv[]) {
	int a[10];
	int sum = 0;
	int i;
	
	for(i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
}
	for(i = 0; i < 10; i++) {
		sum += a[i];
	}
		printf("%d", sum);
	
	return 0;
}
