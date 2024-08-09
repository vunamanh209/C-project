#include<stdio.h>
#include<conio.h>
 
int main() {
   int arr[5];
   int i;
   int sum = 0;
   int *ptr;
  
   printf("Enter 5 numbers: \n");
  
   for (i = 0; i < 5; i++) {
       printf("Enter a[%d] = ", i + 1);
       scanf("%d", &arr[i]);
   }
   // gan dia chi o nho dau tien cua mang arr cho ptr = &arr[0]
   ptr = arr;
  
   // mang trong c duoc luu tru lien tuc trong bo nho
   for (i = 0; i < 5; i++) {
      sum = sum + *ptr;
      ptr++;
   }
  
   printf("Total all number in array: %d", sum);
   return(0);
}

