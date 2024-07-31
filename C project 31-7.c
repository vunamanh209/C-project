#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10; 
	int b = 15;
	int num;
	
	int *num1, *num2; // Declare two pointers to int, num1 and num2
	num1 = &a;    // Assign the address of variable 'a' to pointer 'num1'
	num2 = &b;    // Assign the address of variable 'b' to pointer 'num2'
	
	num = *num1 + *num2; // Dereference num1 and num2 to get the values at the addresses they point to, add them, and assign the result to 'num'
	printf("Total of number = %d", num);
	return 0;
}
