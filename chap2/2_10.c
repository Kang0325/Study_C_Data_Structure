#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("���� 2-10 ������ �迭�� �̿��� ���ڿ� �����ϱ�\n");
	printf("\n");

	int i;
	char* ptrArray[4] = { {"Korea"},{"Seoul"},{"Mapo"},{"152���� 2 / 3"} };
	for (i = 0; i < 4; i++)
	{
		printf("\n %s", ptrArray[i]);
	}

	ptrArray[2] = "Jongno";
	printf("\n\n");
	for (i = 0; i < 4; i++)
	{
		printf("\n %s", ptrArray[i]);
	}

	getchar();
}