#include <stdio.h>

double DoFSangDoC(double F) {
    return (F - 32) * 5.0 / 9.0;
}

int main() {
    double F;
    printf("enter F: ");
    scanf("%lf",&F);
    double C = DoFSangDoC(F);
    printf("%.1f do F tuong duong voi %.1f do C\n", F, C);
    return 0;
}