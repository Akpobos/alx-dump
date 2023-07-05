#include "main.h"

/**
 * _memset - Function that fills memory with constant byte
 * @s: String to work on
 * @b: Constant to fill
 * @n: Length to fill
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
