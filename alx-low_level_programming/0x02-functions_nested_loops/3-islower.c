#include "main.h"

/**
 * _islower - Checks if a character is lower or upper case
 * @c: Character to check
 *
 * Return: 1 if lower, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
