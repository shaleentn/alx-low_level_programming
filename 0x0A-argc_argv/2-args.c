#include <stdio.h>
/**
  *main - checks the main code
  *@argc: the number of arguments passed
  *@argv: pointer to the array of strings
  *i: the index position of the strings
  *Return: Always 0
  */
int main(__attribute__((unused))int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
