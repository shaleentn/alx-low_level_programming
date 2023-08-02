#include "main.h"
/**
  *_pow_recursion - returns the power of an integer raised to another integer
  *@x: the first imteger to raise
  *@y: integer to raise to
  *Return: integer
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x,  y - 1));
}
