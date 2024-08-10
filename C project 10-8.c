#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n, S;
	 printf("\nNhap n: ");
    scanf("%d", &n);
    S = 0;
    i = 1;
    while(i <= n)
    {
        S = S + i * i * i;
        i++;
    }
    printf("\nTotal: %d", S);
	return 0;
}
