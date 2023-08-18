#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_strings - prints strings
  *@separator: pointer to the string to be printed between strings
  *@n: the number of strings passed to the function
  *Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list b;
	unsigned int i;
	char *s;

	va_start(b, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(b, char *);
		if(s == NULL)
			printf("nil");
		else
			printf("%s", s);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(b);
	printf("\n");
}
