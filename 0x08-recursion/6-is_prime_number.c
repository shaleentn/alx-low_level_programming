#include "main.h"
int support_prime(int n, int s);

/**
  *is_prime_number - checks for  prime number
  *@n: the integer to be checked
  *Return: 1 if prime. 0 otherwise
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (support_prime(n, n - 1));
}

/**
  *support_prime - checks for prime number
  *@n: the number to be checked
  *@s: the number used to check if n is a prime number
  *Return: 1 if prime. 0 otherwise
  */
int support_prime(int n, int s)
{
	if (s == 1)
		return (1);
	if (n % s == 0 && s > 0)
		return (0);
	return (support_prime(n, s - 1));
}
