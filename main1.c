#include<stdio.h>

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


