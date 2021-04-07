#include <stdio.h>

int a, b, c, d;
int main() {
	printf("nhap vao so giay: ");
	scanf("%d", &a);
	b = a/3600;
	c = (a%3600)/60;
	d = (a%3600)%60;
	printf("Thoi gian sau quy doi la: %d gio %d phut %d giay", b, c, d);
}
