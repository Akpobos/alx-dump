#include "main.h"

/**
 * main - Simple shell entry
 * @ac: Argument count
 * @av: Argument Vector
 * 
 * Return: int
 */
int main(int ac, char *av[])
{
	char *buffer = NULL;
	pid_t pid;
	(void)ac;

	while (true)
	{
		prompt(&buffer, av[0]);
		if (buffer == NULL || (pid = create_child_process(av[0])) == -1)
			continue;

		if (pid == 0)
			execute(&buffer, av[0]);
		else
			wait(NULL);
	}
	_free(&buffer);
	exit(EXIT_SUCCESS);
}
