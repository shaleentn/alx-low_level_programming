#include "main.h"
#include <stdlib.h>
/**
  *string_nconcat - concatenates strings
  *@s1: pointer to the first string
  *@s2: pointer to the second string
  *@n: the size of the bytes
  *Return: NULL if function fails
  *Pointer to the space allocated
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, m, k;

	if (s1 == NULL)
		s1 = " ";
	k = 0;
	while (s1[k] != '\0')
		k++;
	if (s2 == NULL)
		s2 = " ";
	m = 0;
	while (s2[m] != '\0')
		m++;
	if (n > m)
		s = malloc(sizeof(char) * (k + m + 1));
	else
		s = malloc(sizeof(char) * (k + n + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; n < m && i < k + n; i++, j++)
		s[i] = s2[j];
	for (j = 0; n >= m && i < k + m; i++, j++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
