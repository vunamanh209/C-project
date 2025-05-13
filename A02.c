#include<stdio.h>
#include<math.h>

int main(){
	int S = 0, S1 = 0, S2 = 0;
	int n;
	int i;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	for(i = 1; i < n; i++){
		S += i;
		if(i % 2 == 0){
			S1 += i;
		}
		else{
			S2 += i;
		}
	}
	
	printf("Total of number that smaller than n: %d\n", S);
	printf("Total of even number that smaller than n: %d\n", S1);
	printf("Total of odd number that smaller than n: %d", S2);
	
	return 0;
}