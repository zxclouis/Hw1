#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a;
	int b;
	printf("請輸入一個數字:\n");
	scanf_s("%d",&a);
	b = a % 2;
	if (b == 1)
	{
		printf("%d是奇數\n", a);
	}
	else if (b == 0)
	{
		printf("%d是偶數\n", a);
	}
	system("pause");
	return 0;
}