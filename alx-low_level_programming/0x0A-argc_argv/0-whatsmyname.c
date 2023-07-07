#include "main.h"

/**
 * main - Prints program name
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Integer
 */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
}
