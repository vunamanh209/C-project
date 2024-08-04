#include <stdio.h>  

void bangcuuchuong(int num) {

	int i;
    for (i = 1; i <= 10; i++) {
        // in ket qua phep nhan
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int num = 5;  // Khai báo bien num và gan gia tri la 5
    bangcuuchuong(num);  // giai bangcuuchuong voi gia tri là num
    return 0;
}

