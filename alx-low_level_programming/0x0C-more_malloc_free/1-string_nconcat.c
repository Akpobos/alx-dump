#include "main.h"

/**
 * _strlen - Get string length
 * @str: The string
 * Return: The length
 */
unsigned int _strlen(char *str)
{
	unsigned int cnt = 0;

	if (str == NULL)
		return (cnt);
	while (*(str + cnt))
		cnt++;
	return (cnt);
}

/**
 * _strcpy - Copy string
 * @dest: Destination string
 * @src: Source string
 * @strt: Position to start concat
 * @n: Byte count
 * Return: Nothing
 */
void _strcpy(char *dest, char *src, unsigned int strt, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && src && *(src + i))
	{
		*(dest + strt + i) = *(src + i);
		i++;
	}
}

/**
 * string_nconcat - Concatenates two string
 * @s1: String 1
 * @s2: string 2
 * @n: n bytes of string 2
 * Return: A pointer to concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = _strlen(s1), s2len = _strlen(s2);
	unsigned int len = s1len + s2len;
	char *ptr = NULL;

	if (len == 0)
		len = 1;
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);
	_strcpy(ptr, s1, 0, s1len);
	_strcpy(ptr, s2, s1len, n);
	*(ptr + (len > 1 ? len : (len - 1))) = '\0';
	return (ptr);
}
