#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	char *p = s;

	while (*p)
	{
		p++;
	}

	while (s <= p)
	{
		_putchar(*p);
		p--;
	}
	_putchar('\n');
}
