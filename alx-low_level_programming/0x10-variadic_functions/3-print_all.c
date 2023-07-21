#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @args: va_list agrs
 * Return: Nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_str - Prints a string
 * @args: va_list args
 * Return: Nothing
 */
void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_int - Prints integer
 * @args: va_list
 * Return: Nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float
 * @args: va_list
 * Return: Nothing
 */
void print_float(va_list args)
{
	printf("%lf", va_arg(args, double));
}

/**
 * print_all - Prints anything
 * @format: The format
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	fmt_t fmt[] = {
		{ 'c', print_char },
		{ 'i', print_int },
		{ 'f', print_float },
		{ 's', print_str },
	};
	va_list args;
	int i = 0;

	va_start(args, format);
	while (format[i])
	{
		int j = 0;

		while (j < 4)
		{
			if (
				(
					format[i] == 'c' ||
					format[i] == 'i' ||
					format[i] == 'f' ||
					format[i] == 's'
				) &&
				fmt[j].type == format[i])
			{
				fmt[j].prnt(args);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
