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
	printf("�C�Ѧ�p���{:\n");
	scanf_s("%d",&a);
	printf("�C�[�ڨT�o������:\n");
	scanf_s("%d", &b);
	printf("�C�[�ڨT�o��p���{��:\n");
	scanf_s("%d", &c);
	printf("�C�Ѫ������O:\n");
	scanf_s("%d", &d);
	printf("�C�Ѫ��L���O:\n");
	scanf_s("%d", &e);
	t = (a / c) * b + d + e;
	printf("�C�Ѫ�����:%d��\n", t);
	system("pause");
	return 0;

		
}