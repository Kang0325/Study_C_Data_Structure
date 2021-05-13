#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("예제 3-1 원소의 논리적, 물리적 순서 확인하기\n");
	printf("\n");

	int i, sale[4] = { 157,209,251,312 };

	for (i = 0; i < 4; i++)
	{
		printf("\n address : %u, sale[%d] = %d", &sale[i], i, sale[i]);
	}

	getchar();
}