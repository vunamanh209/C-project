#include<stdio.h>
#include<math.h>
//Enter number and print the cube of number!!!

int main(){
	int i,n;
	printf("Enter the number you want to input: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++ ){
		printf("Number is: %d and cube of %d is: %d \n", i,i,(i*i*i));
	} return 0;
}