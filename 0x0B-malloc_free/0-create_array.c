#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates an array of characters
  *@size: the size of the buffer
  *@c: the character to initialize the buffer with
  *Return: pointer to the array . NULL if it fails. 0 if size is 0
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int n;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		s[n] = c;
	}
	return (s);

}
