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
 * argstostr - Concats all program arguments
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	unsigned int len;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
		len += _strlen(*(av + i));
	len += (ac + 1);
	ptr = (char *)malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		_strcat(ptr, av[i], len);
		len += _strlen(av[i]);
		*(ptr + len) = '\n';
		len++;
	}
	*(ptr + len) = '\0';
	return (ptr);
}
