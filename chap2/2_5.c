#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("���� 2-5 �Է��� ���ڿ��� ���� ����ϱ�\n");
	printf("\n");

	char str[100];
	int i, len = 0;

	printf("���̸� �˰� ���� ���ڿ��� �Է��ϼ��� : ");
	gets(str);			// ���ڿ� �Է��� scanf�� �ƴ� gets

	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		len++;
	}

	printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.\n", len);

	return 0;
}