#include "lists.h"

/**
 * insert_nodeint_at_index - Exactly what the name says
 * @head: pointer to pointer to the list head
 * @idx: The index
 * @n: the Data
 * Return: Address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL, *prev_node = NULL;
	unsigned int i = 0;

	if (!head || (!(*head) && idx > 0))
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	while (i < idx && *head)
	{
		prev_node = *head;
		head = &(*head)->next;
		i++;
	}
	if (i != idx)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	ptr->next = *head;
	if (prev_node)
		prev_node->next = ptr;
	else
		*head = ptr;
	return (ptr);
}
