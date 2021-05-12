#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("예제 2-4 문자 배열에 문자열을 저장하고 출력하기\n");
	printf("\n");

	char str[20] = "Data Structure!";
	int i;
	int cnt = 0;
	printf("\n문자 배열 str[] : ");
	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		cnt++;
	}
	getchar();
	printf("%d", cnt);		// 몇 번 실행 됬는지 확인

	return 0;
}