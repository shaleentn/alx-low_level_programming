#include "lists.h"
#include <stdio.h>
/**
  *print_list - prints all elements of structure list
  *@h: pointer to the structure list
  *Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t i;

	i= 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}

	return (i);
}
