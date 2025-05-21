#include<stdio.h>
#include<math.h>

int IsPrime(int n){
	
	int a,b;
	if(n == 1){
		return 1;
	}
	else if(n == 2){
		return 0;
	}
	for(int i = 2; i < sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	} return 1;
}

int main(){
	int a,b;
	printf("Enter number a and b : ");
	scanf("%d%d", &a,&b);
	printf("List of number in prime [%d %d]: ", a,b);
	for(int i = a; i <= b; i++){
		if(IsPrime(i)){
			printf(" %d", i);
		}
	}
	return 0;
}