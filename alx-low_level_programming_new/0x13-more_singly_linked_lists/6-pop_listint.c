#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!head || !(*head))
		return (0);
	n = (*head)->n;
	temp = (*head)->next;;
	free(*head);
	*head = NULL;
	*head = temp;
	return (n);
}
