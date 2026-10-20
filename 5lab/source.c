#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>

int task1();
int task2_3();

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

int task2_3() {
	//task2
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

	//task3
	int A = a;
	int B = b;
	int C = y;
	int condition_a = ((A % 2 == 0) != (B % 2 == 0));
	int condition_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
	printf("Условие a выполнено (1 - да, 0 - нет): %d\n", condition_a);
	printf("Условие b выполнено (1 - да, 0 - нет): %d\n", condition_b);

	return 0;
}
