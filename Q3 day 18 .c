#include<stdio.h>
// Vong lap do...while dem xem nguoi dung nhap vao bao nhieu chu so
int main() {
	int n;
	int dem = 0;


	do {
		printf("Nhap so nguyen duong: ");
		scanf("%d", &n);
	} while (n <= 0);

	int tam = n;

	do {
		n = n / 10;
		dem++;
	} while (n > 0);

	printf("%d co %d chu so.\n", tam, dem);

	return 0;
}