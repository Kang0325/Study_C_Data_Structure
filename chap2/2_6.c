#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	printf("예제 2-6 3차원 배열 입출력하기\n");
	printf("\n");

	int array[2][3][4];
	int i, j, k, value = 1;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				array[i][j][k] = value;
				printf("\n array[%d][%d][%d] = %d", i, j, k, array[i][j][k]);
				value++;
			}
		}
	}
	getchar();

	return 0;
}