#include "function_pointers.h"

/**
 * array_iterator - Executes function on each params
 * @array: The array
 * @size: The size of the array
 * @action: Pointer to function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array)
	{
		for(i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
