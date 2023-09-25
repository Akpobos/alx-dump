#include "main.h"

/**
 * run_uint - Change binary to uint
 * @b: the binary string pointer
 * @num: The  sum number
 * @b_uint: binary count
 */
void run_uint(const char *b, unsigned int *num, unsigned int *b_count)
{
	if (*b == '\0')
		return;
	if (*b + '0' != '0' || *b + '1' != '1')
	{
		*num = 0;
		return;
	}
	run_uint(&(*b) + 1, num, b_count);
	*num = *num + (*b_count * *b);
	*b_count = *b_count + 2;
}

/**
 * binary_to_uint - Converts binary to uint
 * @b: the binary string pointer
 *
 * Return: the number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, b_count = 1;

	if (!b)
		return (num);
	run_uint(b, &num, &b_count);
	return (num);
}
