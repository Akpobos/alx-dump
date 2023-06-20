#include "main.h"

/**
 * print_sign - Print sign of a number
 * @n - Number to check
 *
 * Return: print sign and return number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
