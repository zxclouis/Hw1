#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float w;
	float t;
	float c;
	printf("�п�J����(����)�B�魫(����)�C");
	scanf_s("%f%f", &t, &w);
	c = w / (t*t);
	printf("BMI==%f",c);
	system("pause");
	return 0;
}