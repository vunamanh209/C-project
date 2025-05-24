#include<stdio.h>
#include<math.h>

int main(){
	int a,b,*c,*d, sum = 0;
	
	printf("Enter the first number: ");
	scanf("%d", &a);
	
	printf("Enter the second number: ");
	scanf("%d", &b);
	
	c = &a;
	d = &b;
	sum = *c + *d;
	
	printf("The sum of %d and %d is %d", *c, *d, sum);
	return 0;
}