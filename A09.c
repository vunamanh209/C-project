#include<stdio.h>
#include<math.h>

void giaiptb2(float a, float b, float c) {
	if(a == 0) {
		if(b == 0) {
			if(c == 0) {
				printf("Phuong trinh vo so nghiem.");
			} else {
				printf("Phuong trinh vo nghiem.");
			}
		} else {
			float x = -c/b;
			printf("Co 1 nghiem duy nhat: %.2f",x);
		}
		return 0;
	}
	float x, x1, x2;
	float delta = b*b-4*a*c;
	printf("Delta = %.2f.\n",delta);
	if(delta < 0) {
		printf("Phuong trinh vo nghiem.\n");
	} else if(delta == 0) {
		x = -b / (2 * a);
		printf("Phuong trinh co 1 nghiem duy nhat.\n");
		printf("x = %.2f",x);
	} else {
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;
		printf("Phuong trinh co 2 nghiem phan biet.\n");
		printf("x1 = %.2f.\n",x1);
		printf("x2 = %.2f",x2);
	}
}
int main() {
	float a,b,c;
	printf("Nhap a, b va c :");
	scanf("%f %f %f", &a, &b, &c);

	giaiptb2(a,b,c);
	return 0;
}

