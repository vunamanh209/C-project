#include<stdio.h>

int GCD(int a, int b){
	if(a == 0){
		return b;
	}
	return GCD(b % a, a);
}

int main(){
	
	int a, b;
	
	printf("Enter a and b: ");
	scanf("%d %d ", &a, &b);
	
	printf("GCD(%d,%d) = %d\n",a,b,GCD(a,b));
	
	return 0;
}