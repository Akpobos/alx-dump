#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int c = 0;

	while (c < 10)
	{
		int i;

		for (i = 0; i < 10; i++)
		{
			int ans = c * i;

			if (ans == 0 && i == 0)
			{
				_putchar(ans + '0');
			}
			else if (ans < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((ans % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
			}
			if (i < 9)
				_putchar(',');
			if (i == 9)
				_putchar('\n');
		}
		c++;
	}
}
