#include "main.h"

int main(int ac, char *av[])
{
    char *buffer = NULL;
    size_t n = 0;

    if (ac != 1)
    {
        perror("Invalid Arguments");
        exit(EXIT_FAILURE);
    }

    printf("cisfun$ ");
    while (getline(&buffer, &n, stdin) != -1)
    {
        pid_t pid;

        if ((pid = fork()) == -1)
        {
            perror("Error Forking");
            printf("cisfun$ ");
            continue;
        }

        if (pid == 0)
        {
            // char *token = strtok(buffer, "");
            printf("[%s]\n", buffer);
            char *cmd[] = { buffer, NULL };
            if (execve(cmd[0], cmd, NULL) == -1)
            {
                perror("Error Executing");
                printf("cisfun$ ");
                continue;
            }
        }
        else
        {
            int status;
            wait(&status);
            printf("cisfun$ ");
        }
    }
}