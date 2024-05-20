#include <stdio.h>

int main() {
    int n;
    int arr[n];
    int i;
    
	printf("Enter the number of elements: ");
	scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("The sum of even numbers is: %d", sum);

    return 0;
}

