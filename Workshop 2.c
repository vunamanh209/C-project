#include <stdio.h>
// chuyen doi tu so ngay qua ngay thang nam
int main() {
	int days, years, weeks;



	printf("Enter days: ");
	scanf("%d", &days);
	years = days/365; // tinh nam
	weeks = (days % 365)/7; // tinh ngay
	days = days - ((years*365) + (weeks*7)); // tinh so ngay con lai

	printf("Years: %d\n", years);
	printf("Weeks: %d\n", weeks);
	printf("Days: %d \n", days);

	return 0;
}
