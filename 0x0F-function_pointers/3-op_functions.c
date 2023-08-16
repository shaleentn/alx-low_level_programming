#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  *op_add - adds two integers
  *@a: the first integer
  *@b: the second integer
  *Return: result of the operation
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  *op_sub - subtracts two integers
  *@a: the first integer
  *@b: the second integer
  *Return: result of the operation
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  *op_mul - mulitiplies two integers
  *@a: the first integer
  *@b: the second integer
  *Return: the result of the operation
  */
int op_mul(int a, int b)
{
	return (a * b);

}
/**
  *op_div - divides two integers
  *@a: the first integer
  *@b: the second integer
  *Return: the result of the operation
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  *op_mod - finds the remainder of two integers
  *@a: the first integer
  *@b: the second integer
  *Return: the result of the operation
  */
int op_mod(int a, int b)
{
	return (a % b);
}
