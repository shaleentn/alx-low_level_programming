#include "function_pointers.h"
/**
  *array_iterator - executes a function given as a parameter
  *@array: pointer to an array of integers
  *@size: the size of the array
  *@action: pointer to a function that prints the elements of an array
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int x;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
