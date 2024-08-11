#include <stdio.h>

int main() {
    int myNumbers[5] = {11, 22, 33, 44, 55};
    int *ptr = myNumbers; // con tro ptr dc khai bao va gan gia tri cua phan tu dau tien mang myNumbers
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++) {
        sum += *(ptr + i); //truy xuat gia tri cua pha tu i trong mang va cong gia tri do vao bien sum
    }

    printf("Total in array is: %d\n", sum);
    return 0;
}
