#include "function_pointers.h"

/**
 * print_name - Prints a string
 * @name: The string
 * @f: Callback function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		f(name);
	}
}
