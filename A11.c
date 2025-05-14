#include<stdio.h>

int Factorial(int n){
	if(n == 0){
		return 1;
	}
	return n * Factorial(n -1);
}

int main(){
	
	int n = 1;
	printf("Nhap so n : ");
	scanf("%d", &n);
	
	printf("Giai thua cua %d la : %d",n, n*Factorial(n-1));
	return 0;
}