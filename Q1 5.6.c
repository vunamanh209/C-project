#include<stdio.h>
#include<math.h>

int main() {
	int arr[20][30], brr[20][30], crr[20][30], i,j,n;
	
	printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &n);

	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("Enter the element [%d] [%d] : ", i,j);
			scanf("%d", &arr[i][j]);
		}
	}

	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("Enter the element [%d] [%d] : ", i,j);
			scanf("%d", &brr[i][j]);
		}
	}

	printf("\nThe First matrix is :\n");
	for (i = 0; i < n; i++) {
		printf("\n");
		for (j = 0; j < n; j++)
			printf("%d\t", arr[i][j]);
	}

	printf("\nThe Second matrix is :\n");
	for (i = 0; i < n; i++) {
		printf("\n");
		for (j = 0; j < n; j++)
			printf("%d\t", brr[i][j]);
	}

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			crr[i][j] = arr[i][j] + brr[i][j];


	printf("\nThe Addition of two matrix is : \n");
	for (i = 0; i < n; i++) {
		printf("\n");
		for (j = 0; j < n; j++)
			printf("%d\t", crr[i][j]);
	}
	return 0;
}