#include "main.h"

/**
 * _realloc - Reallocates a memory
 * @ptr: The pointer
 * @old_size: size of old pointer
 * @new_size: size of new pointer
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2 = NULL;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size <= 0)
	{
		if (ptr != NULL)
		{
			free(ptr);
			ptr = NULL;
		}
		return (NULL);
	}
	else
	{
		if (old_size > new_size)
			new_size = old_size;
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		if (ptr != NULL)
		{
			for (i = 0; i < old_size; i++)
			{
				ptr2[i] = ptr[i];
			}
			free(ptr);
			ptr = NULL;
		}
	}
	return (ptr2);
}
