#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
