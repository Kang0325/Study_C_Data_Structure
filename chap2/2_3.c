#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("예제 2-3 입력한 숫자를 구구단으로 출력하는 프로그램\n");
	printf("\n");

	int a, b, i, j;

	while (1)
	{
		while (1)
		{
			printf("보고 싶은 단수를 입력하세요(양수) : ");
			scanf("%d", &a);
			if (a < 0)
			{
				printf("!.!.!.!.!.양수를 입력하세요.!.!.!.!.!\n");
			}
			else break;
		}

		while (1)
		{
			printf("마지막 곱셈할 숫자를 입력하세요(양수) : ");
			scanf("%d", &b);
			if (b < 0)
			{
				printf("!.!.!.!.!.양수를 입력하세요.!.!.!.!.!\n");
			}
			else break;
		}

		for (i = 1; i < b + 1; i++)
		{
			printf("%d * %d = %d\n", a, i, a * i);
		}

		printf("구구단을 종료하실려면 음수를, 계속하시려면 양수를 입력하세요 : ");
		scanf("%d", &j);
		if (j < 0) break;
	}

	return 0;
}