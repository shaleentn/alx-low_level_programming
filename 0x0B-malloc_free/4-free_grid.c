#include <stdlib.h>
#include "main.h"
/**
  *free_grid - frees the space allocated
  *@grid: pointer to the pointer to our integers
  *@height: the size of height of the grid
  *Return: void
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
