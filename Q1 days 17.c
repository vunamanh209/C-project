#include<stdio.h>
#include<math.h>

// In ra so lan Hello world ma nguoi dung nhap vao

void printstring(int n) {
	char c;

//	printf("Enter char : ");
//	scanf(" %c", &c);
	for(int i = 0; i < n; i++) {
		printf("Hello WWorld.\n");

	}
//	printf("\n");
}
int main() {
	int n;
	
	printf("Enter number of char: ");
	scanf("%d",&n);

	printstring(n);
	
	return 0;
}