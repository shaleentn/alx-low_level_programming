#include <stdio.h>
/**
  *main - checks the main code
  *@argc: the number of arguments passed
  *@argv: pointer to the array of strings passed
  *Return: Always 0
  */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
