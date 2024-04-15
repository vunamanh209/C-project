#include<stdio.h>

//Calculate the sum of the first and last numbers of 1 number

int main() {
    int n;
    scanf("%d", &n);
    int arr[1000];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", arr[0] + arr[n - 1]);
    return 0;
}
