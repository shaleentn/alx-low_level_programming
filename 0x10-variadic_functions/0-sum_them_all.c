#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sum_them_all - prints the sum of all its parameters
  *@n: the last required argument
  *Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int j, sum;

	sum = 0;

	va_start(p, n);

	if (n == 0)
		return (0);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(p, unsigned int);
	}
	va_end(p);
	return (sum);

}
