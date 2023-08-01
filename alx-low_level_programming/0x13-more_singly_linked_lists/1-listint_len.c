#include "lists.h"

/**
 * listint_len - Find the length of a linked list
 * @h: Pointer to the head
 *
 * Return: The length
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
