#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("���� 3-2 2���� �迭�� ����, ������ ���� Ȯ���ϱ�\n");
	printf("\n");

	int i, n = 0, * ptr;
	int sale[2][4] = { {63,84,140,130},
					   {157,209,251,312} };
	int (* pptr)[4];		// �迭 ������ ����
	int** pptr2 = sale;		// ���������� ����
	
	ptr = &sale[0][0];
	pptr = &sale[0][0];

	for (i = 0; i < 8; i++)
	{
		printf("\n address : %u, sale %d = %d", ptr, i, *ptr);
		ptr++;
	}

	printf("\n\n %d", pptr[1][1]);		// 209
	printf("\n %d", pptr + 1);			// 157, +1 �����ν� ���� ������ �̵�
	
	printf("\n\n %d", pptr2);			// 63, ���������� ����

	getchar();
}