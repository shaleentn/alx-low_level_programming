#include "main.h"
/**
  *rot13 - converts the letters of a string by shifting to thirteen
  *@j: the pointer to the string
  *Return: the pointer
  */
char *rot13(char *j)
{
	int i, m;

	char a[] = "ABCDEFGHIJKLNOPQRSTUVWXYZabvcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; j[i] != '\0'; i++)
	{
		for (m = 0; m < 52; m++)
		{
			if (j[i] == a[m])
			{
				j[i] = b[m];
			}
		}
	}
	return (j);
}
