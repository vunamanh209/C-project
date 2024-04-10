#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
/* Nhap 2 so bat ki tao 1 khoang nao do va tim so chia het cho 3 va cho 5 */
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}
