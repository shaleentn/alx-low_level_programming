#include <stdio.h>
#include <stdlib.h>
/**
  *main - operates on the main code
  *@argc: the number of arguments
  *@argv: pointer to an array of strings
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i, j;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (char *)main;
	j = 0;
	while (j < i)
	{
		if (j == i - 1)
		{
			printf("%02hhx\n", a[j]);
			break;
		}
		j++;
		printf("%02hhx", a[j]);
	}
	return (0);
}
