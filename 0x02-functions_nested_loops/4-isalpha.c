#include "main.h"
/**
  *_isalpha - checks for alphabets
  *
  *@c: the character in ASCII code
  *
  *Return: 1 for alphabets. 0 for the rest
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 96))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

