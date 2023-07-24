#include "main.h"
/**
  *_strcpy - copies the string pointed to by src
  *@dest: char type string
  *@src: char type string
  *Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int y = -1;

	do {
		y++;
		dest[y] = src[y];
	} while (src[y] != '\0');
	return (dest);
}
