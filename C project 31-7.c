#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10; // Khai bao gia tri cua a bang 10
	int b = 15; // Khai bao gia tri cua b bang 15
	int num;
	
	int *num1, *num2; // Khai bao 2 con tro den kieu bien num1 va num 2
	num1 = &a; // Gán dia chi cua bien a cho con tro num 1
	num2 = &b; // Gán dia chi cua bien b cho con tro num 2
	
	num = *num1 + *num2; // Cong 2 gia tri ma dia chi tro den num1 va num 2
	printf("Total of number = %d", num);
	return 0;
}
