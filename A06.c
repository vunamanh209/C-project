//Nhap 1 so tu nhien n roi dem cac so tu nhien khong lon hon n va chia 3 du 1

#include<stdio.h>

int main(){
	int n;
	int i;
	int count = 0;
	printf("Enter the n number: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		if(i % 3 == 1){
			count++;
		}
	}
	printf("Have %d the number that less or equal than %d divide by 3 remainder 1.\n",count,n);
	return 0;
}