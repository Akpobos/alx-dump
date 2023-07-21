#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: Separator
 * @n: Numbers count
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (separator != NULL && i != (n - 1))
				printf("%s", separator);
		}
		printf("\n");
		va_end(args);
	}
}
