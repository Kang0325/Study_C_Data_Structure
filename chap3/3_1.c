#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("���� 3-1 ������ ����, ������ ���� Ȯ���ϱ�\n");
	printf("\n");

	int i, sale[4] = { 157,209,251,312 };

	for (i = 0; i < 4; i++)
	{
		printf("\n address : %u, sale[%d] = %d", &sale[i], i, sale[i]);
	}

	getchar();
}