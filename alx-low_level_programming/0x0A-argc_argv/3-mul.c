#include "main.h"

/**
 * main - Multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Exit code
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	exit(EXIT_SUCCESS);
}
