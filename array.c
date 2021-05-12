#include <stdio.h>

int main()
{
	int i;
	int array[5] = { 1, 2, 3 };
	char array1[5] = { 'a', 'b', 'c' };

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", array[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", &array1[i]);
	}

	return 0;
}