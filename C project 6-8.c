#include<stdio.h>

void show() {
	int i;
	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 != 0) {
			printf("%d ", i);
		}
	}
}

int main() {
	show();
	return 0;
}
