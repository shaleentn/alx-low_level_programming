#include "main.h"
#include <stdlib.h>
/**
  *_strdup - returns a pointer to a new string
  *@str: pointer to the string given
  *Return: pointer to new string, NULL if the string is null
  *NULL if the memory is insufficient
  */
char *_strdup(char *str)
{
	unsigned int i, m;
	char *a;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	for (m = 0; str[m];  m++)
	{
		a[m] = str[m];
	}
	return (a);

}
