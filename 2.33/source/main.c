#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int t;
	printf("每天行駛里程:\n");
	scanf_s("%d",&a);
	printf("每加侖汽油的價格:\n");
	scanf_s("%d", &b);
	printf("每加侖汽油行駛里程數:\n");
	scanf_s("%d", &c);
	printf("每天的停車費:\n");
	scanf_s("%d", &d);
	printf("每天的過路費:\n");
	scanf_s("%d", &e);
	t = (a / c) * b + d + e;
	printf("每天的價格:%d元\n", t);
	system("pause");
	return 0;

		
}