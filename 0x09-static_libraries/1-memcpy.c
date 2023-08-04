#include "main.h"
/**
  *_memcpy - copies the memory to another memory location
  *@dest: pointer to the destination memory
  *@src: pointer to the source memory
  *@n: size of the bufer
  *Return: the dest pointer
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n ; m++)
		dest[m] = src[m];
	return (dest);
}
