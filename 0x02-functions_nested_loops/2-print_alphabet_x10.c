#include "main.h"
/**
  *main - entry
  *
  *print_alphabet_x10 - printing alphabets 10 times
  *Return: void
  */
void print_alphabet_x10(void)
{
	char ch;

	int j;

	j = 0;

	while (j < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		j++;
	}
}
