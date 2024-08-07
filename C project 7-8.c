#include <stdio.h>

// ham hien thi loi chao
void show(char name[100]) {
    printf("Hello %s\n", name);
}

int main() {
    char name[100];
    printf("Enter name: "); // Nhap chuoi ki tu nguoi dung
    scanf("%s", name);  // Doc chuoi tu nguoi dung
    show(name);  // Goi ham show de in loi chao
    return 0;
}

