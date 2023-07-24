#include "main.h"
/**
  *swap_int - Swaps two values
  *@a: the value swapped to store address of b
  *@b: value swapped to a
  *Return: 0
  */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
