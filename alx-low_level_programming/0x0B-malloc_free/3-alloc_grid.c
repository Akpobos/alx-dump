#include "main.h"

/**
 * alloc_grid - Return pointer to 2D array
 * @width: Inner length
 * @height: Outer length
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int cnt;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(ptr) * height);
	if (ptr == NULL)
		return (NULL);
	for (cnt = 0; cnt < height; cnt++)
	{
		int j;

		*(ptr + cnt) = (int *)malloc(sizeof(int) * width);
		if (*(ptr + cnt) == NULL)
		{
			ptr = NULL;
			break;
		}
		for (j = 0; j < width; j++)
			*(*(ptr + cnt) + j) = 0;
	}
	return (ptr);
}
