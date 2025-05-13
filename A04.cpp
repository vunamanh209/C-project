#include<stdio.h>

int main(){
	int n;
	int i;
	int S = 0;
	
	printf("Enter the n number : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		if(i % 7 != 0){
			S += i;
		}
	}
	printf("Total of number less or equal than n and divisible by 7: %d\n", S);
	
	return 0;
}