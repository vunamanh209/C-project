#include <stdio.h>

int main() {
    int a = 20, b = 35;
    int *p1; // khai bao con tro den b1
    int *p2; // khai bao con tro den b2

    p1 = &a; // gan dia chi cua bien a cho con tro p1
    p2 = &b; // gan dia chi cua bien b cho con tro p2

    int num = *p1; // Luu gia tri cua a (duoc tro boi p1) vào bien tam thoi num
    *p1 = *p2; // gan gia tri cua b (duoc tro boi p2) cho a (duoc tro boi p1)
    *p2 = num; // gan gia tri tam thoi num cho b

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

