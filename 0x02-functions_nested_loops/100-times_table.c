#include "main.h"
/**
  *print_times_table - works out n times table
  *@n: the number to be computed
  *
  *Return: always 0
  */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				k = i * j;
				if (k <= 9)
				{
					_putchar(' ');
				}
				if (k <= 99)
				{
					_putchar(' ');
				}
				if (k >= 100)
				{
					_putchar((k / 100) + 48);
					_putchar((k / 10) % 10 + 48);
				}
				else if (k <= 99 && k >= 10)
				{
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
