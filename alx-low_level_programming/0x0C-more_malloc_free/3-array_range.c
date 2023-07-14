#include "main.h"

/**
 * array_range - Creates array of integers
 * @min: Start integer
 * @max: End integer
 * Return: Pointer to the integer array
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int len = 0, i;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		len++;
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		*(ptr + i) = min + i;
	return (ptr);
}
