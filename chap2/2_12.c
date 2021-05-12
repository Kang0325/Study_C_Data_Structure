#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct employee
{
	char name[10];
	int year, pay;
};

void main()
{
	printf("예제 2-12 점 연산자를 이용해 데이터 항목 참조하기\n");
	printf("\n");

	int i;
	struct employee Lee[4] =
	{
		{"이진호", 2014,4200},
		{"이한영", 2015,3300},
		{"이상원", 2015,3500},
		{"이상범", 2016,2900}
	};

	for (i = 0; i < 4; i++)
	{
		printf("\n 이름 : %s", Lee[i].name);
		printf("\n 입사 : %d", Lee[i].year);
		printf("\n 연봉 : %d\n", Lee[i].pay);
	}

	getchar();
}