#include <stdio.h>

int main() {
    int arr[25], i, n;

    printf(" Input the number to store in the array :");
    scanf("%d", &n); 

    printf(" Input %d number in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf(" number %d : ", i);
        scanf("%d", arr + i); 
    }

    printf(" The number you entered are : \n");
    for (i = 0; i < n; i++) {
        printf(" number of %d : %d \n", i, *(arr + i)); 
    }
    return 0;
}
