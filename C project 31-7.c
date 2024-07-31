#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10;
	int b = 15;
	int num;
	
	int *num1, *num2;
	num1 = &a;
	num2 = &b;
	
	num = *num1 + *num2;
	printf("Total of number = %d", num);
	return 0;
}
