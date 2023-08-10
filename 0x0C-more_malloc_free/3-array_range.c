#include "main.h"
#include <stdlib.h>
/**
  *array_range - creates an array of integers
  *@min: the value to start from
  *@max: the value to stop at
  *Return: Null if function fails. Null if min is greater than max
  */
int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max + 1 - min));
	for (i = 0; min <= max; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);

}
