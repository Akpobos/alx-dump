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
		unsigned int j = 0;
		
		while (*(accept + j))
		{
			if (*(accept + j) == *(s + i))
			{
				p = s + i;
				break;
			}
			j++;
		}
		if (*p == *(s + i))
			break;
		i++;
	}
	return (p);
}
