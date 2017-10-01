#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a;
	int b;
	printf("叫块计:\n");
	scanf_s("%d",&a);
	b = a % 2;
	if (b == 1)
	{
		printf("%d琌计\n", a);
	}
	else if (b == 0)
	{
		printf("%d琌案计\n", a);
	}
	system("pause");
	return 0;
}