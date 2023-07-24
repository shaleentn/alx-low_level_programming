#include "main.h"
/**
  *print_rev -  prints the reverse of a string
  *@s: string to be printed
  *REeturn: 0
  */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}	
	while (i--)
		_putchar(s[i]);
	
	_putchar('\n');
}
