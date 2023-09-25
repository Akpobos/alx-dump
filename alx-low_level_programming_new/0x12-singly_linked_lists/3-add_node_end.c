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
 * add_node_end - Add node to end
 * @head: pointer to pointer to head
 * @str: the node to add
 * Return: the node address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;

	if (!head || !str)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (!(*head))
		*head = new;
	else
	{
		list_t *temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
