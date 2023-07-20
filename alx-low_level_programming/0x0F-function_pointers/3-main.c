#include "3-calc.h"

/**
 * main - Performs simple operation
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Int
 */
int main(int argc, char **argv)
{
	int (*ops)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (
			strlen(argv[2]) != 1 ||
			(*argv[2] != '+' &&
			*argv[2] != '-' &&
			*argv[2] != '/' &&
			*argv[2] != '*' &&
			*argv[2] != '%')
			)
	{
		printf("Error\n");
		exit(99);
	}
	ops = get_op_func(argv[2]);
	printf("%d\n", ops(atoi(argv[1]), atoi(argv[3])));
	exit(EXIT_SUCCESS);
}
