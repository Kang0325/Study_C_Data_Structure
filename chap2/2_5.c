#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("예제 2-5 입력한 문자열의 길이 계산하기\n");
	printf("\n");

	char str[100];
	int i, len = 0;

	printf("길이를 알고 싶은 문자열을 입력하세요 : ");
	gets(str);			// 문자열 입력은 scanf가 아닌 gets

	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		len++;
	}

	printf("입력한 문자열의 길이는 %d입니다.\n", len);

	return 0;
}