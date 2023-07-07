#include "main.h"

/**
 * main - Add positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Exit code
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int c;

	if (argc == 1)
	{
		printf("%d\n", 0);
		exit(EXIT_SUCCESS);
	}
	for (c = 1; c < argc; c++)
	{
		int num = atoi(argv[c]);

		if (num)
		{
			sum += num;
			continue;
		}

		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
