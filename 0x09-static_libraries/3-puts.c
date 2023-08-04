#include "main.h"
/**
  *_puts - printing a string to stdout
  *@str: string to be printed
  *
  *Return: string and new line
  */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
