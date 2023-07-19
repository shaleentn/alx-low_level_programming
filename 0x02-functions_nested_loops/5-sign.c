#include "main.h"
/**
  *print_sign - checks the input integer
  *
  *@n: Te input integer
  *
  *Return: 1 if greater. 0 if zero. -1 if less tha zero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
