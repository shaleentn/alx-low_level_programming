#include "main.h"
int sqrt_support(int n, int m);
/**
  *_sqrt_recursion - returns the square root of a number
  *@n: the input integer to be operated on
  *
  *Return: resulting square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_support(n, 0));
}

/**
  *sqrt_support - returns the square root fo a number
  *@n: the number to be checked if it has a squareroot
  *@m: the number to be incremented to get to the squareroot
  *Return: square root
  */
int sqrt_support(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);

	return (sqrt_support(n, m + 1));
}
