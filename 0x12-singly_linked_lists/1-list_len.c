#include "lists.h"
/**
  *list_len - prints the number of elements in a linked list
  *@h: pointer to the structure list
  *Return: number of elemnts
  */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
