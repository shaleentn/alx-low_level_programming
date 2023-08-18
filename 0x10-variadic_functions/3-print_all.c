#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  *print_all - prints everything from the arguments
  *@format: the list of all types of arguments passed
  *Return: void
  */
void print_all(const char * const format, ...)
{
	char *t, *p = "";
	int i;
	va_list l;

	va_start(l, format);

	i = 0;
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", p, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(l, double));
					break;
				case 's':
					t = va_arg(l, char *);
					if (t == NULL)
					{
						printf("(nil)");
					}
					printf("%s%s",p,  t);
					break;
				default:
					i++;
					continue;
			}
			p = ", ";
			i++;
		}
	}
	va_end(l);
	printf("\n");
}
