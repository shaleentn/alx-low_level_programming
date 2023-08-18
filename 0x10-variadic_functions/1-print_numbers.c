#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
  *print_numbers - prints numbers
  *@separator: pointer to a string
  *@n: the number of integers
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, unsigned int));
		if (separator == NULL)
			return;
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
