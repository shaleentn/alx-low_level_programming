#include "main.h"
/**
  *_strpbrk - locates the first occurence in a string
  *@s: the pointer to the string
  *@accept: the pointer to the second string to be located
  *Return: pointer to the bytes in s that matches that of accept
  *NULL if not such bytes are found
  */
char *_strpbrk(char *s, char *accept)
{
	int  j, i;

	i = 0;
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		i++;
	}
	return ('\0');
}
