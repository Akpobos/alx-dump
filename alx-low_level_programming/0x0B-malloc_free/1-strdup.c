#include "main.h"

/**
 * _strdup - copies a string
 * @str: string to copy
 *
 * Return: Pointer to the newly copied string
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i))
		i++;
	ptr = (char *)malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (*(str + i))
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
