#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to concatenate
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int c = 0;

	while (*ptr)
		ptr++;

	while (c + 1 <= n && *(src + c))
	{
		*(ptr + c) = *(src + c);
		c++;
	}
	*(ptr + c) = '\0';
	return (dest);
}
