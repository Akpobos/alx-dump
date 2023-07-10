#include "main.h"

/**
 * create_array - Creates an array of characters
 * @size: size of the array
 * @c: Initialization characher
 *
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size <= 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
