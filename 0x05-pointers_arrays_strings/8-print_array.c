#include <stdio.h>
#include "main.h"
/**
  * print_array - prints the elements of the array
  *@a: pointer to the integer
  *@n: the number of elements
  *Return: 0
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i >= 0 && i < n-1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
