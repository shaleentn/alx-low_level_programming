#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
  *main - works on the main code
  *@argc: the number of arguments
  *@argv: pointer to the array of strings
  *Return: Always 0
  */
int main(int __attribute__((unused))argc, char *argv[])
{
	char *p;
	int n, m;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n = atoi(argv[1]);
	m = atoi(argv[3]);
	p = argv[2];

	if (get_op_func(p) == NULL && p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (((*p) == '%' && m == 0) || ((*p) == '/' && m == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(p)(n, m));
	return (0);
}
