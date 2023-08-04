#include "main.h"
/**
  *_isdigit - checks for a  digit
  *@c: the character to be checked
  *Return: i if it is a digit. 0 if not
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
