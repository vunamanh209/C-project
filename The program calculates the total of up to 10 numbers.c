#include<stdio.h>

int main() {
	double sum = 0;
	double n;
	int i;
	
	for(i = 1; i <= 10; i++) {
		printf("Enter the n%d: ", i);
		scanf("%lf", &n);
	
	if( n < 0) {
		break;
	}
	sum += n;
}
	printf("Value : %.2lf", sum);
	return 0;
}
