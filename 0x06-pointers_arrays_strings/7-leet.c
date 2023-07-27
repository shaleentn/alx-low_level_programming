#include "main.h"
/**
  *leet - functio that encodes a string into 1137
  *Letters a and A should be replaced by 4
  *Letters e and E should be replaced by 3
  *Letters o and O should be replaced by 0
  *Letters t and T should be replaced by 7
  *Letters l and L should be replaced by 1
  *@z: the pointer to the string
  *
  *Return: pointer
  */
char *leet(char *z)
{
	int l, c;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (l = 0; z[l] != '\0'; l++)
	{
		for (c = 0; c < 10; c++)
		{
			if (z[l] ==  a[c])
			{
				z[l] = b[c];
			}
		}
	}
	return (z);
}

