#include <stdio.h>

int countCharacters(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int main() {
    char str[] = "Hello, World!";
    int count = countCharacters(str);
    printf("Number of character in string: %d\n", count);
    return 0;
}

