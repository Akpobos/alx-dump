#include "main.h"

/**
 * rev_string - Reverses a string in reverse
 * @s: The string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	char *p = s;
	char *tmp = s;
	int len = 0;

	while (*tmp)
	{
		tmp++;
	}

	while (p <= tmp)
	{
		*(s + len) = *tmp;
		len++;
		tmp--;
	}
}
