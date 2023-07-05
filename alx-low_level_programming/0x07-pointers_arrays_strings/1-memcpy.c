#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination data
 * @src: Source data
 * @n: number of bytes to copy
 * Return: Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
