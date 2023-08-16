#include "function_pointers.h"
/**
  *print_name - prints a name
  *@name: pointer to the string
  *@f: pointer to a function
  *Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}

