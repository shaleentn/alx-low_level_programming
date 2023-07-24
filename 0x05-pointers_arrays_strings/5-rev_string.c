#include "main.h"
/**
  *rev_string - reverses the string
  *@s: the string to be reversed
  *Return: string
  */
void rev_string(char *s)
{
	int i, z, half;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	;
	z = 0;
	half = i / 2;

	while (half--)
	{
		c = s[i - z - 1];
		s[i - z - 1] = s[z];
		s[z] = c;
		z++;
	}
}
