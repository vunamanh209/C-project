#include <stdio.h>

int main() {
	double a[100] = {3,-2,5.6,7.9,8,4,9.5,11,-1,3,6,3.5,9.5,8.5};
	int n = 14;
	double sum = 0, sum1= 0;
	int valid = 0, invalid = 0;
	int count;
	double average = 0;
	for (int i = 0; i <= n; i++) {
		sum += a[i];
		average = sum / n;
	}
	for (int i = 0; i <= n; i++) {
		if (a[i] > 0 && a[i] < 10) {
			valid++;
		} else if (a[i] < 0 || a[i] > 10) {
			invalid++;
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] > 5 && a[i] < 10){
			count++;
			sum1 += a[i];
		}
	}
	if(count > 0){
		average = sum1 / count;
	}

	printf("Passed average: %.1f.\n", average);
	printf("Total sum: %.2lf .\n", sum);
	printf("Total average: %.1f\n",average);
	printf("Invalid count : %d.\n", invalid);
	printf("Valid count: %d.\n", valid);
	return 0;
}