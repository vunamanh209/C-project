#include<stdio.h>
#include<math.h>

int main(){
	int a,b, *c, *d;
	printf("Enter the first number: ");
	scanf("%d",&a);
	
	printf("Enter the second number: ");
	scanf("%d", &b);
	
	c = &a;
	d = &b;
	
	if(*c > *d){
		printf("%d is the maximum number.", *c);
	}
	
}