#include <stdio.h>

// H�m hi?n th? l?i ch�o
void show(char name[100]) {
    printf("Hello %s\n", name);
}

int main() {
    char name[100];
    // Nh?p chu?i k� t? t? ngu?i d�ng
    printf("Enter your name: ");
    scanf("%s", name);  // �?c chu?i t? ngu?i d�ng
    show(name);  // G?i h�m show d? in ra l?i ch�o
    return 0;
}

