#include <stdio.h>
// tinh tong cac so nhap tu 1 den n
int TongCacSo(int n) {
	int sum = 0;
	int i;

	for (i = 1; i <= n; i++) {
		sum = sum + i;
	}

	return sum;
}

int main() {
	int result;
	int n;

	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &n);

	result = TongCacSo(n);
	printf("Tong cac so tu 1 den %d la: %d\n", n, result);
	return 0;
}
