#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s: The string
 * @accept: Character set to search
 *
 * Return: Number of bytes matched
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	unsigned int i = 0;

	while (*(s + i))
	{
		unsigned int j = 0;
		char is_match = 0;

		while (*(accept + j))
		{
			if (*(accept + j) == *(s + i))
			{
				is_match = 1;
				break;
			}
			j++;
		}
		if (is_match)
			c++;
		else
			break;
		i++;
	}
	return (c);
}
