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
	unsigned int len, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	len = nmemb * size;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		*(ptr + i) = 0;
	return (ptr);
}
