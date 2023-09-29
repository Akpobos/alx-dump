#include <unistd.h>

/**
 * _putchar - Printts chars
 * @c: The char
 * Return: print count
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
