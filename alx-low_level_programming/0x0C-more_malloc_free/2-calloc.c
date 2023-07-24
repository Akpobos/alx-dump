#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Bolcks
 * @size: Size of each blocks
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(ptr) * nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (:i = 0; i < nmemb; i++)
	{
		unsigned int j;

		ptr[i] = malloc(size);
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				ptr[i] = NULL;
				i--;
			}
			free(ptr);
			ptr = NULL;
			break;
		}
		for (j = 0; j < size; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
