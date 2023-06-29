#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr)
		ptr++;

	while (src[i])
	{
		*(ptr + i) = src[i];
		i++;
	}

	*(ptr + i) = '\0';

	return dest;
}
