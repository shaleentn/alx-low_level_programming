#include <stdio.h>
int main(void)
{
	int i, j, m;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			m = i * j;
			printf("*");
		}
		printf("\n");
	}
	return (0);
}
