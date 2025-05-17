#include<stdio.h>
#include<math.h>

void SwapNumber(int *a, int *b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
int main() {
	int x,y;

	printf("Nhap so thu 1: ");
	scanf("%d",&x);

	printf("Nhap so thu 2: ");
	scanf("%d", &y);

	SwapNumber(&x,&y);
	printf("Sau khi doi so x se la %d va y se la %d",x,y);
	return 0;
}