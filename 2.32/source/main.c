#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float w;
	float t;
	float c;
	printf("請輸入身高(公尺)、體重(公斤)。");
	scanf_s("%f%f", &t, &w);
	c = w / (t*t);
	printf("BMI==%f",c);
	system("pause");
	return 0;
}