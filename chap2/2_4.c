#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("���� 2-4 ���� �迭�� ���ڿ��� �����ϰ� ����ϱ�\n");
	printf("\n");

	char str[20] = "Data Structure!";
	int i;
	int cnt = 0;
	printf("\n���� �迭 str[] : ");
	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		cnt++;
	}
	getchar();
	printf("%d", cnt);		// �� �� ���� ����� Ȯ��

	return 0;
}