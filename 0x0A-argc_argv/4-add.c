#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main - checks the entire code
  *@argc: the number of arguments
  *@argv: the pointer to the array of strings
  *Return: Always 0
  */
int main(int argc, char *argv[])
{
	int i, j, c, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		c = atoi(argv[i]);
		sum += c;
	}
	printf("%d\n", sum);
	return (0);
}
