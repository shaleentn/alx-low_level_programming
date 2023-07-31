#include "main.h"
/**
  *_strspn - gets the length of a prefix substring
  *@s: pointer of the string to be checked
  *@accept: the other poinetr of the other string to be checked
  *Return: the number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
			if (accept[j] == '\0')
				return (i);
	}
	return (0);
}
