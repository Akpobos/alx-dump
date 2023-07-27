#include "lists.h"

/**
 * str_len - Get string length
 * @str: The string
 * Return: The length
 */
unsigned int str_len(const char *str)
{
	unsigned int count = 0;

	while (str[count])
		count++;
	return (count);
}

/**
 * add_node - Adds a node to a linked list
 * @head: Pointer to pointer to the head
 * @str: The node string
 * Return: Address to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	if (!head || !str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		new = NULL;
		return (NULL);
	}
	new->len = str_len(str);

	if (!(*head))
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
