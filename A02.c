/*Nhap so tu nhien n roi tinh cac tong sau:
	S= tong cac so tu nhien khong lon hon n, 
	S1=tong cac so tu nhien le khong lon hon n  n,  
	S2=tong cac so tu nhien chan khong lon hon n  n. */



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
			S1 += i; // Cong tong cac so chan trong vong lap
		}
		else{
			S2 += i; // Cong tong cac so le trong vong lap
		}
	}
	
	printf("Total of number that smaller than n: %d\n", S);
	printf("Total of even number that smaller than n: %d\n", S1);
	printf("Total of odd number that smaller than n: %d", S2);
	
	return 0;
}