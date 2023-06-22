#include "main.h"

/**
 * print_triangle - Prints triangle
 * @size: Size of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (c = 1; c <= size; c++)
	{
		int j;

		for (j = size; j >= 1; j--)
		{
			if (j <= c)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
