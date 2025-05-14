#include<stdio.h>
#include<math.h>

void giaiptb2(float a, float b, float c){
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("Phuong trinh vo so nghiem.");
			}
			else{
				printf("Phuong trinh vo nghiem.");
			}
	}
	else{
		printf("Co 1 nghiem duy nhat: %.2f");
	}
	return;
}
	float x, x1, x2;
	float delta = b*b-4*a*c;
	printf("Delta = %.2f");
	if(delta < 0){
		printf("Phuong trinh vo nghiem");
	}
	else if(delta == 0){
		x = -b / (2 * a);
	}
	else{
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;
	}
}
	int main(){
		float a,b,c;
		printf("Nhap a, b va c :");
		scanf("%f %f %f", &a, &b, &c);
	
		giaiptb2(a,b,c);
	return 0;
}
	
