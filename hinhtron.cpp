#include <stdio.h>
#define Pi 3.14159
float r;
int main() {
	printf("ban kinh cua hinh tron la: ");
	scanf("%f", &r);
	printf("Duong kinh cua hinh tron la: %f \n", 2*r);
	printf("Chu vi cua hinh tron la: %f \n", 2*Pi*r);
	printf("Dien tich cua hinh tron la: %f", Pi*r*r);
}
