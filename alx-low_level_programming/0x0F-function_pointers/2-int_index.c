#include "function_pointers.h"

/**
 * int_index - Searches for an index
 * @array: The search array
 * @size: Size of the array
 * @cmp: Compare function
 * Return: Index of the search
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			break;
	}

	if (i <= 0)
		i = -1;
	return (i);
}
