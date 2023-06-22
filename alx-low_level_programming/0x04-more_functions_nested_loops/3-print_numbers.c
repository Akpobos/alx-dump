#include "main.h"
/**
 * print_numbers - Prints from 0 - 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
