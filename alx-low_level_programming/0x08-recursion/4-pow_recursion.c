#include "main.h"

/**
 * _pow_recursion - Get pow of an int
 * @x: The integer
 * @y: The power
 * @Return: x to pow of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
