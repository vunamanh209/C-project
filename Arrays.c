#include<stdio.h>

/* nhap 10 so bat ki va tinh tong 10 so do */
int main() {
    
    int a[10];
    int sum = 0;
    int i;
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++) {
        sum += a[i];
    }
    printf("%d", sum);
    return 0;
}
