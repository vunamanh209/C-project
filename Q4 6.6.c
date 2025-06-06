#include <stdio.h>  
/* Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.
The pattern is as follows:

   1
  2 2
 3 3 3
4 4 4 4 */


int main()
{
   int i, j, spc, rows, k;  

   printf("Input number of rows : ");  
   scanf("%d", &rows);  

   spc = rows + 4 - 1;  

   for(i = 1; i <= rows; i++){
         for(k = spc; k >= 1; k--) {
            printf(" ");
         }

	   for(j = 1; j <= i; j++){
	       printf("%d ", i);
	   }
	
	printf("\n");  
    spc--;  
   }
   return 0;
}
