#include "main.h"
/**
  *_strlen - checks the length of a string
  *@s: the string to be checked
  *Return: the string length
  */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l])
	{
		l++;
	}
	return (l);
}
