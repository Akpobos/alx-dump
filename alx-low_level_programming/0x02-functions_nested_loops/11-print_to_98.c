#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * @n: start
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("%i\n", n);
}
