#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.
   1
   2 3
   4 5 6
   7 8 9 10 */

void main() {
    int i, j, rows, a = 1;  

    printf("Input number of rows : "); 
    scanf("%d", &rows);  

    for (i = 1; i <= rows; i++) {  
        for (j = 1; j <= i; j++)  
            printf("%d ", a++);  

        printf("\n");  
    }


}