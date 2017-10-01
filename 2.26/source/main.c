#include <stdio.h>
#include <stdlib.h>

int  main(void)
{
	int a;
	int b;
	printf("請輸入2個數字:");
	scanf_s("%d %d", &a, &b);
	if (a > b)
	{
		if (a%b == 0)
		{
			printf("a是b的倍數。");
		}
	}
	if (a < b)
	{
		printf("a不是b的倍數。");
	}
	system("pause");
	return 0;

}