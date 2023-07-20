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
				k = i * j;
				if (j == 0)
				{
					_putchar(k + 48);
				}
				if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + 48);
				}
				else if (k >= 10 && k <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				}
				else if (k > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + 48);
					_putchar(((k / 10) % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
