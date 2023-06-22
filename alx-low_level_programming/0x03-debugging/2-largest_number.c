#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = a;
	int i = 0;

	while (i <= 1)
	{
		if (largest < b)
			largest = b;
		else if (largest < c)
			largest = c;
		i++;
	}

	return (largest);
}
