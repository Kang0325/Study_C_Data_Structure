#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("���� 2-3 �Է��� ���ڸ� ���������� ����ϴ� ���α׷�\n");
	printf("\n");

	int a, b, i, j;

	while (1)
	{
		while (1)
		{
			printf("���� ���� �ܼ��� �Է��ϼ���(���) : ");
			scanf("%d", &a);
			if (a < 0)
			{
				printf("!.!.!.!.!.����� �Է��ϼ���.!.!.!.!.!\n");
			}
			else break;
		}

		while (1)
		{
			printf("������ ������ ���ڸ� �Է��ϼ���(���) : ");
			scanf("%d", &b);
			if (b < 0)
			{
				printf("!.!.!.!.!.����� �Է��ϼ���.!.!.!.!.!\n");
			}
			else break;
		}

		for (i = 1; i < b + 1; i++)
		{
			printf("%d * %d = %d\n", a, i, a * i);
		}

		printf("�������� �����ϽǷ��� ������, ����Ͻ÷��� ����� �Է��ϼ��� : ");
		scanf("%d", &j);
		if (j < 0) break;
	}

	return 0;
}