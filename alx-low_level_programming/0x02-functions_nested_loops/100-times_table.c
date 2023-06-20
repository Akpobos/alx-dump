#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints time table
 * @n:                 print n times
 *
 * Return:             Nothing
 */
void print_times_table(int n)
{
	int start;

	if (n > 15 || n < 0)
		return;

	for (start = 0; start <= n; start++)
	{
		int i = 0;

		while (i <= n)
		{
			int ans = start * i;

			if (ans == 0 && i == 0)
			{
				_putchar(ans + '0');
			}
			else if (ans < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(ans + '0');
			}
			else if (ans > 9 && ans < 99)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((ans / 100) + '0');
				_putchar(((ans % 100) / 10) + '0');
				_putchar((ans % 10) + '0');
			}
			if (i < n)
				_putchar(',');
			i++;
		}
		_putchar('\n');
	}
}
