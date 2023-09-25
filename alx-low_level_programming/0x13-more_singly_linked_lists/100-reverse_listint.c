#include "lists.h"

/**
 * reverse_listint - Reverses linked list
 * @head: Pointer to pointer to head
 *
 * Return: Pointer to the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node = NULL;

	if (!head || !(*head))
		return (NULL);
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
