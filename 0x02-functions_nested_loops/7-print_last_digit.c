#include "main.h"
/**
  * print_last_digit - prints the last digit
  *
  *@x: the number to input
  *
  *Return: the last digit
  */
int print_last_digit(int x)
{
	int n;

	n = x % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
