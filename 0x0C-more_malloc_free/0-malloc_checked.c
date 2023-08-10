#include "main.h"
#include <stdlib.h>
/**
  *malloc_checked - allocates memory
  *@b: the size of the memory to allocate
  *Return: NULL if function fails . pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
