#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - checks the main code
  *@argc: the number of arguments
  *@argv: pointer to teh array of strings
  *Return: Always 0
  */
int main(int argc, char *argv[])
{
	int i, total, c;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	total = 0;
	c = atoi(argv[1]);
	if (c < 0)
		return (0);
	for (i = 0; i < 5 && c >= 0; i++)
	{
		while (c >= coins[i])
		{
			total++;
			c -= coins[i];
		}
	}
	printf("%d\n", total);
	return (0);
}
