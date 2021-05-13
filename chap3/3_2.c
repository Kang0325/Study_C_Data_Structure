#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("예제 3-2 2차원 배열의 논리적, 물리적 순서 확인하기\n");
	printf("\n");

	int i, n = 0, * ptr;
	int sale[2][4] = { {63,84,140,130},
					   {157,209,251,312} };
	int (* pptr)[4];		// 배열 포인터 선언
	int** pptr2 = sale;		// 이중포인터 선언
	
	ptr = &sale[0][0];
	pptr = &sale[0][0];

	for (i = 0; i < 8; i++)
	{
		printf("\n address : %u, sale %d = %d", ptr, i, *ptr);
		ptr++;
	}

	printf("\n\n %d", pptr[1][1]);		// 209
	printf("\n %d", pptr + 1);			// 157, +1 함으로써 다음 행으로 이동
	
	printf("\n\n %d", pptr2);			// 63, 이중포인터 적용

	getchar();
}