#include<stdio.h>
#include<math.h>

int main() {
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	if(n > 0) {
		printf("%d is positive.\n",n);
	} else if(n == 0) {
		printf("zero");
	} else {
		printf("%d is negative.\n",n);
	} return 0;
}