#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int findMax(int *arr, int n) {
		int max = *arr;
		int i;
		for(i = 0; i < n; i++) { // bat dau tu i = 1, vi mã da duoc khoi tao tu phan tu dau tien
			if(*(arr + i) > max){
				max = *(arr + i);
			}
		}
		return max;
	}
	
	int main(){
	int arr[]= {2, 4, 6, 8, 7};
	int n = sizeof(arr) / sizeof(arr[0]); // tinh so luong phan tu trong mang
	int max = findMax(arr,n); // tim phan tu lon nhat trong mang
	printf("The biggest number of array: %d", max); //in phan tu lon nhat trong mang
	
	return 0;
}
