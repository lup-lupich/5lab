#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>

int task1();
int task2();

int main() {
	setlocale(LC_CTYPE, "RUS");
	task1();
	task2_3();

	return 0;
}

int task1() {
	float gr;
	printf("Введите градусы\n");
	scanf("%f", &gr);
	float rad = gr * M_PI / 180;
	printf("%f\n\n", rad);

	return 0;
}

int task2() {
	float x;
	const float k = 8.2f;
	printf("Введите значение x\n");
	scanf("%f", &x);
	//найдем b
	float b = sqrt(fabs(x));
	//найдем a
	float a = pow(b, 4) + pow(k, 3);
	//найдем y
	float y = pow(log(a), 3) + exp(-x);
	printf("x = %.2f\n", x);
	printf("y = %.2f\n\n", y);

	return 0;
}