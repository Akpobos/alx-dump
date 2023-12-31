#include "main.h"

/**
 * print_char - prints a character
 * @args: va_list argument
 *
 * Return: 1
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_str - Prints string
 * @args: va_list argument
 *
 * Return: numbers of character printed to stdout
 */
int print_str(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_int - Prints integers
 * @args: va_list argument
 *
 * Return: number of characters printed to stdout
 */
int print_int(va_list args)
{
	int val = va_arg(args, int);
	int count = 0;
	
	if (val < 0)
		count += _putchar('-');
	count += print_numbers(_abs(val));
	return (count);
}

/**
 * print_bnry - Prints binary
 * @args: va_list argument
 *
 * Return: number of characer printed
 */
int print_bnry(va_list args)
{
	unsigned int val = va_arg(args, unsigned int);
	return (print_binary(val));
}
