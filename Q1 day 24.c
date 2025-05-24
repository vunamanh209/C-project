#include <stdio.h>

int main() {
	int arr[10];
	int i;


	printf("Nhap 10 so vao mang :\n");
	for(i=0; i<10; i++) {
		printf("So - %d : ",i);  
		scanf("%d", &arr[i]);  
	}

	printf("\nCac so trong ma la: ");
	for(i=0; i<10; i++) {
		printf("%d  ", arr[i]);  
	}
	printf("\n");
	return 0;
}
