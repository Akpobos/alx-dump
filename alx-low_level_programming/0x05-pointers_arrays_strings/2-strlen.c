#include "main.h"
/**
 * _strlen - Get length of a string
 * @s: String
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len += 1;
		s++;
	}
	return (len);
}
