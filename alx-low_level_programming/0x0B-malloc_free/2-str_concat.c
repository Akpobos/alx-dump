#include "main.h"

/**
 * _strlen - Gets string length
 * @str: The string
 *
 * Return: The length
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}

/**
 * _strcat - Concatenate string
 * @dest: Destination
 * @src: Source
 * @start: Index to start adding from in dest
 * Return: Nothing
 */
void _strcat(char *dest, char *src, unsigned int start)
{
	unsigned int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i + start) = *(src + i);
		i++;
	}
}

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Newly concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	unsigned int cnt = 0;
	unsigned int len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len += _strlen(s1);
	len += _strlen(s2);
	len += 1;
	ptr = (char *)malloc(sizeof(char) * len);
	_strcat(ptr, s1, cnt);
	while (*(s1 + cnt))
		cnt++;
	_strcat(ptr, s2, cnt);
	*(ptr + len) = '\0';
	return (ptr);
}
