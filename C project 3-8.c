#include<stdio.h> 

void show() { // Ham khong tra ve gia tri co ten la show
	char c; // Khai bao bien c dang ki tu
	// vong lap for de liet ke bang chu cai theo thu tu tang dan
    for ( c = 'A'; c <= 'Z'; c++) {
        printf("%4c", c); // in ra man hinh gia tri cua bien c
    }
    printf("\n");  
}

int main() {

    show(); //goi ham show de thuc thi doan ma ben trong ham
    return 0;
}

