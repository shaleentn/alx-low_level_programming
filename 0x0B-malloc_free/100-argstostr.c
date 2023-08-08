#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all the arguments
  *@ac: the number of arguments passed
  *@av: pointer to the arguments
  *Return: pointer to the new string
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *s;

	l = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			l++;
		}
	}
	l += ac;
	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
		{
			s[k++] = '\n';
		}
	}
	return (s);
}
