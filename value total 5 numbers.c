# include <stdio.h>
/* Calculate the total of up to 5 numbers. If the user enters a negative number, ignore it (do not add the number to the total). */
int main() {

    int number;
    int sum = 0;
	int i;
	
    for ( i = 1; i <= 5; ++i){
        printf("Enter a %d: ",i);
        scanf("%d", &number);

        if(number < 0) {
            continue;
        }

        sum += number; 
    }

    printf("\nSum = %d", sum);
}
