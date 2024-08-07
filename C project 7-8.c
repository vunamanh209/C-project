#include <stdio.h>

// Hàm hi?n th? l?i chào
void show(char name[100]) {
    printf("Hello %s\n", name);
}

int main() {
    char name[100];
    // Nh?p chu?i ký t? t? ngu?i dùng
    printf("Enter your name: ");
    scanf("%s", name);  // Ð?c chu?i t? ngu?i dùng
    show(name);  // G?i hàm show d? in ra l?i chào
    return 0;
}

