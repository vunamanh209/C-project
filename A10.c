#include <stdio.h>
/* Viết chương trình  C giải bài toán sau:
 trăm trâu trăm cỏ, trâu đứng ăn 5, trâu nằm ăn 3, lụ khụ trâu già, ba con ăn 1. Hỏi có bao nhiêu trâu đứng, bao nhiêu trâu nằm và bao nhiêu trâu già?  */
int main() {
    int x, y, z;

    printf("Cac cach chia trau dung va trau gia va trau nam:\n");
    for (x = 0; x <= 100; x++) {
        for (y = 0; y <= 100 - x; y++) {
            z = 100 - x - y;
            if (5 * x + 3 * y + z / 3.0 == 100) {
                printf("Trau dung: %d, trau nam: %d, trau gia: %d\n", x, y, z);
            }
        }
    }

    return 0;
}
