#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	double number;
	double sum = 0;
	
	for(i; i <= 10; i++){
		printf("Enter number %d: ", I);
      		scanf("%lf", &number);
      	
		if(number < 0){
			break;
		}
		sum += number;
	}
	 printf("Sum = %.2lf", sum);
	 
	return 0;
}
