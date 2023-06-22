#include "main.h"
/**
 * print_line - Prints line
 * @n: Number of lines to print
 *
 * Returns: Nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
