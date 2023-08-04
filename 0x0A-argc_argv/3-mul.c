#include <stdio.h>
#include "main.h"
/**
  *_atoi - converts string to integer
  *@s: the string to be input
  *Return: integer
  */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			pn *= -1;
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}
	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
/**
  *main - checks the main code
  *@argc: the number of arguments
  *@argv: pointer to the array of strings
  *Return: 1 if the arguments are  not two. 0 if two
  */
int main(int argc, char *argv[])
{
	int mult, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);

	n2 = _atoi(argv[2]);

	mult = n1 * n2;

	printf("%d\n", mult);

	return (0);


}

