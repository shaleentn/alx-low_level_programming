#include "main.h"

int string_len(char *s);
int pal_checker(char *s, int n, int j);

/**
  * is_palindrome - checks if a string is a palindrome
  *@s: pointer to the string
  *Return: 1 if palindrome. 0 if not
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_checker(s, 0, string_len(s)));
}
/**
   *string_len - prints the length of the string
   *@s: the pointer to the string
   *Return: the length of the string
   */
int string_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_len(s + 1));
}
/**
  *pal_checker - checks if the string is a palindrome
  *@s: pointer to the string
  *@n: the current index of the string
  *@j: length of the string
  *Return: 1 if string is palindrome. 0 if not
  */
int pal_checker(char *s, int n, int j)
{
	if (*(s + n) != *(s + j - 1))
		return (0);
	if (n >= j)
		return (1);
	return (pal_checker(s, n + 1, j - 1));
}
