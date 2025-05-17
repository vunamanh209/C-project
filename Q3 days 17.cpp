#include <stdio.h>

int NhanHaiSoNguyen(int a, int b) {
    int ketqua = 0;
    int i;

    for (i = 0; i < b; i++) {
        ketqua = ketqua + a;
    }

    return ketqua;
}

int main() {
    int x, y, ketqua;

    printf("Nhap so thu nhat: ");
    scanf("%d", &x);

    printf("Nhap so thu hai: ");
    scanf("%d", &y);

 
    ketqua = NhanHaiSoNguyen(x, y);
    printf("Ket qua cua %d * %d la: %d\n", x, y, ketqua);

    return 0;
}
