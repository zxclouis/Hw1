#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a;
	int b;
	printf("�п�J�@�ӼƦr:\n");
	scanf_s("%d",&a);
	b = a % 2;
	if (b == 1)
	{
		printf("%d�O�_��\n", a);
	}
	else if (b == 0)
	{
		printf("%d�O����\n", a);
	}
	system("pause");
	return 0;
}