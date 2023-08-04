#include "main.h"
/**
  *_strncpy - copies a string
  *@dest: pointer to string to be copied to
  *@src: string to be copied
  *@n: number of bytes
  *Return: the destination string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
