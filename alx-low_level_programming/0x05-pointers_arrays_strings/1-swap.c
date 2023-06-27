#include "main.h"

/**
 * swap_int - Swap value of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
