#include <stdio.h>

int countCharacters(char *str) {
    int count = 0;
    while (*str != '\0') { //vong lap while tiep tuc chay mien la gia tri ma con tro str tro toi khong phai la ki tu NULL
        count++;
        str++;
    }
    return count;
}

int main() {
    char str[] = "Hello, World!"; // chuoi ki tu duoc  khoi tao va luu vao mang str
    int count = countCharacters(str);//ket qua tra ve tu ham countCharacters dc luu trong bien count
    printf("Number of character in string: %d\n", count);
    return 0;
}

