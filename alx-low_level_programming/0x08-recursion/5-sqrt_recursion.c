#include "main.h"

/**
 * _sqrt_recurs - Find square root
 * @n: The umber
 * @p: A pointer
 * Return: Answer
 */
int _sqrt_recurs(int n, int *p)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (0);
	*p = *p + 2;
	return (1 + _sqrt_recurs((n - *p), p));
}

/**
 * _sqrt_recursion - Find square root of a number
 * @n: The number
 *
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	int *p = &i;
	int count;

	if (n <= 0)
		return (-1);
	count = 1 + _sqrt_recurs((n - *p), p);
	return (count);
}
