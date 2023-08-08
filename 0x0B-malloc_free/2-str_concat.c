#include "main.h"
#include <stdlib.h>
/**
  *str_concat - concatenates two strings
  *@s1: pointer to the first string
  *@s2: pointer to the second string
  *Return: pointer to the new space allocated. NULL if failed
  */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; i++, j++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
