#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String to search
 * @needle: Substring to find
 * Return: Pointer to the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = 0;
	unsigned int i = 0;

	if (!(*needle))
		return (haystack);
	while (*(haystack + i))
	{
		unsigned int j = 0;

		if (*(haystack + i) == *(needle + j))
		{
			char is_match = 1;
			while (*(needle + j))
			{
				if (*(haystack + i + j) != *(needle + j))
				{
					is_match = 0;
					break;
				}
				j++;
			}
			if (is_match)
			{
				p = haystack + i;
				break;
			}
		}
		i++;
	}
	return (p);
}
