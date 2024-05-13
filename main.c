#include<stdio.h>

int main() {
	int a;
	int b;
	int c;
	
	printf("enter number a: ");
	scanf("%d", &a);
	printf("enter number b: ");
	scanf("%d", &b);
	printf("enter number c: ");
	scanf("%d", &c); 
	
	
	if (a > b && a > c) {
		printf("a is the biggest number");
	}
	else if ( b > a && b > c){
		printf("b is the biggest number");
	}
	
	else if(c > a && c > b) {
		printf("c is the biggest number");
	}
	else {
		printf("a and b and c are equal");
	}
	return 0;
}
