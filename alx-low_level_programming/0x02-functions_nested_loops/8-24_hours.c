#include "main.h"

/**
 * jack_bauer - Print every minute of the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int h = 0;

	while (h < 24)
	{
		int m = 0;

		while (m < 60)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar((h % 10) + '0');
			}
			else
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
			_putchar(':');
			if (m < 10)
			{
				_putchar('0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			_putchar('\n');
			m++;
		}
		h++;
	}
}
