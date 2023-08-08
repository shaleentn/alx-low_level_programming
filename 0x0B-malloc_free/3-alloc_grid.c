#include "main.h"
#include <stdlib.h>
/**
  *alloc_grid - returns a pointer to a 2 dimensional array
  *@width: size of the first dimension
  *@height: size of the second dimension
  *Return: pointer to the array
  *NULL if function fails and if width and height is less or equal to 0
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);

		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
