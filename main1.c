#include<stdio.h>
/* Write a program that asks the user for a number and then prints the multiplication table for that number.
The program should continue to prompt for numbers until the user enters 0. */
int main() {
	int number,i ;
	
	do {
		printf("Enter the number: ");
		scanf("%d", &number);
		
		if (number != 0) {
			for(i = 1; i <= 10; i++) {
				printf("%d + %d = %d.\n", number, i, number * i);
			}
		} 
		
	}
	while(number != 0);
	printf("Exit. \n");
		return 0;
}


