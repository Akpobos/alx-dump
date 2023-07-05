#include "main.h"

/**
 * _strlen_recursion - Prints length of a string
 * @s: The string
 *
 * Return: The string length
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(++s));
}
