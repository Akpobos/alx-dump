#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 * Return: Nothing
 */
void _print_binary(unsigned long int n)
{
	if (n)
	{
		_print_binary(n >> 1);
		_putchar((n & 1) + 48);
	}
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n)
		_print_binary(n);
	else
		_putchar((n & 1) + 48);
}
