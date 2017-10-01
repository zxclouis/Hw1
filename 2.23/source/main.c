#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("¤T­Ó¼Æ¦r:");
	scanf_s("%d %d %d", &a, &b, &c);

	if (b>a & b>c)
	{
		if (a>c)
			printf("max:%d min:%d\n", b, c);
		else if (c>a)
			printf("max:%d min:%d\n", b, a);
	}
	else if (a>b & a>c)
	{
		if (b>c)
			printf("max:%d min:%d\n", a, c);
		else if (c>b)
			printf("max:%d min:%d\n", a, b);
	}
	else if (c>b & c>a)
	{
		if (b>a)
			printf("max:%d min:%d\n", c, a);
		else if (a>b)
			printf("max:%d min:%d\n", c, b);
	}
	system("pause");
	return 0;
}