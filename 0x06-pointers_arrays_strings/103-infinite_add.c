#include "main.h"
/**
  *infinite_add - adds two numbers
  *@n1: pointer for the first array of numbers
  *@n2: pointer for the second number
  *@r: the buffer
  *@size_r: the size of array
  *Return: 0 if the numbers is more than buffer. r
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, i, j, d, v1, v2, temp;

	a = 0;
	i = 0;
	j = 0;
	d = 0;
	v1 = 0;
	v2 = 0;
	temp = 0;
	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i <= size_r)
		return (0);
	while (j >= 0 || i >= 0 || a == 1)
	{
		if (i < 0)
			v2 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		temp = v1 + v2 + a;
		if (temp >= 10)
			a = 1;
		else
			a = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (temp % 10) + '0';
		d++;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
	}
}
