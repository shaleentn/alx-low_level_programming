#include "main.h"
/**
  *_strlen_recursion - prints the length of a string
  *@s: pointer to the string
  *Return: integer
  */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s)
	{
		++i;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
