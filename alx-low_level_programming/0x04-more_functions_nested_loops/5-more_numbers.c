#include "main.h"
/**
 * more_numbers - prints 0 - 14, 10 times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int c;

		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
