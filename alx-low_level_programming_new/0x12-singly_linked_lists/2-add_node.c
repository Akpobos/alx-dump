#include "lists.h"

/**
 * _strlen - Get string length
 * @str: the string
 * Return: The length
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * add_node - Add node to begining
 * @head: pointer to pointer to head
 * @str: the node to add
 * Return: the node address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	if (!head || !str)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->len = _strlen(str);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
