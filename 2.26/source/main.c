#include <stdio.h>
#include <stdlib.h>

int  main(void)
{
	int a;
	int b;
	printf("�п�J2�ӼƦr:");
	scanf_s("%d %d", &a, &b);
	if (a > b)
	{
		if (a%b == 0)
		{
			printf("a�Ob�����ơC");
		}
	}
	if (a < b)
	{
		printf("a���Ob�����ơC");
	}
	system("pause");
	return 0;

}