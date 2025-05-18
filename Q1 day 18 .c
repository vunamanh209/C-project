#include <stdio.h>
// Tinh giai thua bang vong lap do while
int main() {
	int n;
	int giaithua = 1;
	int i = 1;

	// Nh?p n
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);

	do {
		giaithua = giaithua * i;
		i++;
	} while (i <= n);


	printf("%d! = %d\n", n, giaithua);

	return 0;
}
