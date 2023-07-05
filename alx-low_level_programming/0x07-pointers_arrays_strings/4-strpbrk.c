#include "main.h"

/**
 * _strpbrk - Searches a string for set of bytes
 * @s: String to search
 * @accept: Search bytes
 *
 * Return: Pointer to first letter seen
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = 0;
	unsigned int i = 0;
	
	while (*(s + i))
	{
		int is_match = 0;
		unsigned int j = 0;

		while (*(accept + j))
		{
			if (*(accept + j) == *(s + i))
			{
				p = s + i;
				is_match = 1;
				break;
			}
			j++;
		}
		if (is_match)
			break;
		i++;
	}
	return (p);
}
