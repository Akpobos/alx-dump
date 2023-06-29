#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy
 *
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n)
	{
		if (*(src + c))
		{
			*(dest + c) = *(src + c);
		}
		else
		{
			*(dest + c) = '\0';
		}
		c++;
	}
	return (dest);
}
