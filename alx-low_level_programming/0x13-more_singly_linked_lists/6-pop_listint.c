#include "lists.h"

/**
 * pop_listint - Delete the head of a linked list
 * @head: Pointer to Pointer to the head
 *
 * Return: the list data;
 */
int pop_listint(listint_t **head)
{
	int list_data = 0;

	if (*head)
	{
		listint_t *tmp = (*head)->next;

		list_data = (*head)->n;
		free(*head);
		*head = NULL;
		*head = tmp;
	}
	return (list_data);
}
