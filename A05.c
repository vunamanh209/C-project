#include<stdio.h>

int main(){
	int a,b,c;
	
	printf("Enter a b c number: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > 0 && b > 0 && c > 0 && 
        a + b > c && a + c > b && b + c > a) {
        printf("Ba so la do dai cua 1 tam giac.\n");
    } else {
        printf("Ba so khong the la do dai cua 1 tam giac.\n");
    }

    return 0;
}