#include "main.h"

/**
 * main - Prints number of arguments
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Exit code
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
