#include "lists.h"

/**
 * list_len - Returns number of nodes in a linked list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}
