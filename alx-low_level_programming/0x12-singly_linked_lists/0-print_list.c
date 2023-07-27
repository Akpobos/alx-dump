#include "lists.h"

/**
 * print_list - Print values of linked list
 * @h: The head of the list
 *
 * Return: Total number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
