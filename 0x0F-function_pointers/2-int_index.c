#include "function_pointers.h"
/**
  *int_index - searches for an integer
  *@array: pointer to an array of integers
  *@size: the size of the array
  *@cmp: pointer to all the functions to compare values
  *Return: index of the element that does not return 0 after comparing
  *-1 if no elemement matches or if size is less than 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) > 0)
			return (x);
	}
	return (-1);
}

