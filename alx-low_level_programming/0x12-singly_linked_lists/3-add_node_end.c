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
 * add_node_end - Adds a node to end of a linked list
 * @head: Pointer to pointer to the head
 * @str: The node string
 * Return: Address to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = NULL, *new = NULL;

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
	new->next = NULL;
	h = *head;
	while (h && h->next)
		h = h->next;
	if (!h)
		*head = new;
	else
		h->next = new;
	return (new);
}
