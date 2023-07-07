#include "main.h"

/**
 * main - Prints all arguments received
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Exit code
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));
	exit(EXIT_SUCCESS);
}
