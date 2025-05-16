#include<stdio.h>
#include<math.h>

int KiemTraSoNguyenTo(int n){
	if(n < 2){
		return 0;
	}
	int i;
	for(i = 1; i <= n/2; i++){
		if(n % i == 0){
			return 0;
		}
	} return 1;
}

int main(){
	int n;
	printf("Enter n number: ");
	scanf("%d", &n);
	
	if(KiemTraSoNguyenTo(n)){
		printf("%d la so nguyen to.\n",n);
	}else{
		printf("%d khong la so nguyen to.\n",n);
	} return 0;
}