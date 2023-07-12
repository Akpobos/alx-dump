#include "main.h"

/**
 * free_grid - Frees memory of 2D array
 * @grid: The 2D array
 * @height: Array height or length
 * Return: Nothing to return
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
		*(grid + i) = NULL;
	}
	free(grid);
	grid = NULL;
}
