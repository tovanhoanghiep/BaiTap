#include <stdio.h>
#define h 3500

float A, t, P;
int main() {
	printf("nhap vao so cong va thoi gian tieu thu: ");
	scanf("%f%f", &A, &t);
	P = (A*t)/3600000;
	printf("Cong suat tieu thu la: %f \n", P);
	float B = P*30*24*h;
	printf("Tien dien hang thang la: %f", B);
}
