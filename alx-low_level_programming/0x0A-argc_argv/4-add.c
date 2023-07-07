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

        for (c = 1; c < argc; c++)
        {
                int i = 0;

                while (argv[c][i])
                {
                        if (!isdigit(argv[c][i]))
                        {
                                printf("Error\n");
                                exit(EXIT_FAILURE);
                        }
                        i++;
                }
                sum += atoi(argv[c]);
        }
        printf("%d\n", sum);
        exit(EXIT_SUCCESS);
}
