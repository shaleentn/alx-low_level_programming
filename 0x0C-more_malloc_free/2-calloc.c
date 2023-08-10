#include "main.h"
#include <stdlib.h>
/**
  *_memset - used to fill bytes of a location with a constant byte
  *@s: pointer to the buffer
  *@b: the constant byte to replace ones in the buffer
  *@n: the size of the buffer
  *Return: the pointer s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;
	return (s);
}
/**
  *_calloc - allocates memory for an array
  *@nmemb: number of elements
  *@size: size of the array
  *Return:NULL if function fails or when size or nmeb is 0
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(size * nmemb);
	if (t == NULL)
		return (NULL);
	_memset(t, 0, size * nmemb);
	return (t);

}
