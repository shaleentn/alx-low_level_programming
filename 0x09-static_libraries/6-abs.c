#include "main.h"
/**
  *_abs - Computes  absolute value of an integer
  *
  *@j: the integer input
  *
  *Return: absolute value
  */
int _abs(int j)
{
	if (j >= 0)
	{
		return (j);
	}
	else
	{
		return (j * -1);
	}
}
