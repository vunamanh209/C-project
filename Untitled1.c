#include <stdio.h>
int main(){
	
	int i;
	int n;
	float S = 0;
	
	printf("Enter number : ");
	scanf("%d", &n);
	for(i = 1; i < n; i++){
		S += 1.0 / i;
	}
	printf("Result: %f", S);
	return 0;
}