#include "main.h"
/**
  *factorial - prints the factorial of a number
  *@n: the number to be tested
  *Return: integer
  */
int factorial(int n)
{
	int m;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	m = (n * factorial(n - 1));
	return (m);
}
