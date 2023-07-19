#include "main.h"
/**
  *_islower - checks for lowercas
  *@c: The character to be checked in ASCII code
  *
  *Return: 1 for lowercase. 0 for the rest.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
