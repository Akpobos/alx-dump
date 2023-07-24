#include "main.h"

/**
 * print_number - Prints a number
 * @n: Number to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	if (n < 10)
	{
		_putchar((n % 10) + '0');
	}
	else
	{
		int tmp = n < 1000 ? 100 : 1000;
		int tmp_val = n;
		
		while (tmp >= 10)
		{
			if (tmp == 10)
			{
				_putchar((tmp_val / tmp) + '0');
				_putchar((tmp_val % n) + '0');
			}
			else
			{
				_putchar((tmp_val / tmp) + '0');
			}
			tmp_val /= tmp;
			tmp /= 10;
		}
	}
	_putchar('\n');
}
