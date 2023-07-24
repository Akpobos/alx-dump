#include "main.h"

/**
 * gtwdcnt - Get word count
 * @str: The String
 * Return: Number of words in the string
 */
int gtwdcnt(char *str)
{
	int i = 0, wc = 0, curr = 0;

	if (str == NULL)
		return(0);
	while (*(str + i))
	{
		if (*(str + i) == 32)
		{
			if (curr == 1)
				wc++;
			curr = 0;
		}
		else 
		{
			curr = 1;
		}
	}

	return (wc);
}

/**
 * strtow - Splits string into words
 * @str: The string
 *
 * Return: Array of words
 */
char **strtow(char *str)
{
	char **ptr = NULL;
	int wc = gtwdcnt(str), i = 0, start = 0, fill = 0;

	if (!wc)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (wc + 1));
	while (*(str + i))
	{
		if (*(str + i) == 32)
		{
			if (start > 0)
			{
				int len = i - start, j = 0;

				ptr[fill] = (char *)malloc(sizeof(char) * len);
				if (ptr[fill] == NULL)
				{
					while (fill >= 0)
					{
						free(ptr[fill]);
						ptr[fill] = NULL;
						fill--;
					}
					free(ptr);
					ptr = NULL;
					return (NULL);
				}
				while (start < len)
				{
					*(ptr[fill] + j) = *(str + start);
					j++;
					start++;
				}
				*(ptr[fill] + j) = '\0';
				fill++;
				start = 0;
			}
		}
		else
		{
			if (start == 0)
				start = i;
		}
		i++;
	}
	*(ptr[wc]) = NULL;
	return (ptr);
}
