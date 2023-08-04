#include "main.h"
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
