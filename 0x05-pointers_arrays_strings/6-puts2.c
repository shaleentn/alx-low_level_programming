#include "main.h"
/**
  *puts2 - prints each character
  *@str: the string to be printed by character
  *Return: 0
  */
void puts2(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');

}
