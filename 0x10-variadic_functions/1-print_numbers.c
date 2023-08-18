#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
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
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
