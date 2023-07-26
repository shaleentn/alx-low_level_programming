#include "main.h"
/**
  *reverse_array - to reverse an array
  *@a: the pointer to an array
  *@n: the number of elements
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int w, t;

	for (w = 0; w < n--; w++)
	{
		t = a[w];
		a[w] = a[n];
		a[n] = t;
	}
}
