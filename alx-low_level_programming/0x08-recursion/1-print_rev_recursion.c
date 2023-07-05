#include "main.h"

/**
 * _print_rev_recursion - Print string in reverse
 * @s: The string
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (!(*s))
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
