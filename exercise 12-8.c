#include<stdio.h>

  int replacestring(char *str) { //con tro str cho phep truy cap vvao mang 
	int i = 0;
	 while(str[i] != '\0') { // duyet qua ki tu chuoi cho den khi chay den ki tu thi i la NULL
	 	if(i  % 2 == 0) { // chay dieu kien cho i chia het cho 2
	 		str[i] = ' '; // thay the vi tri thu chan trong chuoi bang dau cach
		 }
		 i++;
	 }
}

  int main() {
	char str[] = "something"; // chuoi mau trong mang
	replacestring(str); //goi ra ham de thay doi chuoi
	printf("string after replace:%s \n", str); //in ra chuoi cuoi cung
	return 0;
}

