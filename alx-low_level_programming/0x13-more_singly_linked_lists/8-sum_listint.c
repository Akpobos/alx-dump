#include "lists.h"

/**
 * sum_listint - Get the sum of all nodes in the linked list
 * @head: Pointer to head of the list
 *
 * Return: The sum of the data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
