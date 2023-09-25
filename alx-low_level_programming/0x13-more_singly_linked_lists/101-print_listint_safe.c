#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: Pointer to the head
 *
 * Return: node count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (!head)
		exit(98);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	return (count);
}
