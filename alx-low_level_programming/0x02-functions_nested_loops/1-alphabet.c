#include "main.h"

/**
 * print_alphabet - Prints out all lowercase alphabets to STDOUT
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
