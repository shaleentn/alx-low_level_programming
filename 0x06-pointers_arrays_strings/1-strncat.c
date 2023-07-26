#include "main.h"
/**
  *_strncat - concatenates strings according to bytes
  *@dest: the pointer to the string to concatenate to
  *@src: the pointer to the string to be concatenated
  *@n: the number of bytes
  *
  *Return: the destination string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
