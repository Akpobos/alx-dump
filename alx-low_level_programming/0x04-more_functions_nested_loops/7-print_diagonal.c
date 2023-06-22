#include "main.h"

/**
 * print_diagonal - Draws diagonal line
 * @n: Number of times \ should be printed
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (c = 1; c <= n; c++)
	{
		int f;

		for (f = 1; f <= c; f++)
		{
			if (f < c)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
