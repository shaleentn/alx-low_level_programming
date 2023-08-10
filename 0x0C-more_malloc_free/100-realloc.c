#include "main.h"
#include <stdlib.h>
/**
  *_realloc - reallocates memory
  *@ptr: pointer to the old allocated memory
  *@old_size: the size of the memory allocated to the ptr
  *@new_size: the size of the newly allocated memory space
  *Return: NULL if new_size is 0 and ptr is not null
  *ptr if new_size is equal to old_size
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;
	char *old_ptr;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	old_ptr = ptr;
	new_ptr = malloc(new_size);
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);

}
