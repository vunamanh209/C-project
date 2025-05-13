/*Nhap so tu nhien n roi tinh tong(luu y phep chia so nguyen)
	S =1+ 1/2 + 1/3 +...+ 1/n   */



#include <stdio.h>
int main(){
	
	int i;
	int n;
	float S = 0; //S phai bang 0 de ra ket qua chinh xac 
	
	printf("Enter number : ");
	scanf("%d", &n);
	for(i = 1; i < n; i++){
		S += 1.0 / i;
	}
	printf("Result: %f", S);
	return 0;
}
