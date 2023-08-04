#include "main.h"
/**
  *_strcat - concatentes strings
  *@dest: the pointer to string to be concatenated to
  *@src: the pointer to string to concatenate
  *Return: The string dest
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
