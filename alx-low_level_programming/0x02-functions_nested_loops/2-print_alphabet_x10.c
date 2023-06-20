#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabet 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int c = 1;

	while (c <= 10)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		c++;
	}
}
