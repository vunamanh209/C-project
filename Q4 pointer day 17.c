#include <stdio.h>

/*Tạo một hàm nhận vào một con trỏ và thay đổi giá trị của biến mà con trỏ trỏ đến. 
In ra giá trị của biến trước và sau khi gọi hàm.*/
void thayDoiGiaTri(int *p) {
	*p = *p * 2;
}

int main() {
	int x;

	printf("Nhap gia tri: ");
	scanf("%d", &x);

	printf("Truoc khi goi ham: %d\n", x);


	thayDoiGiaTri(&x);

	printf("Sau khi goi ham: %d\n", x);

	return 0;
}
