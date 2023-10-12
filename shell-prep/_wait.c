#include "main.h"

int main(void)
{
    char *cmd[] = {"ls", "-l", "/tmp", NULL};
    pid_t pid;
    unsigned int count;

    for (count = 0; count < 5; count++)
    {
        pid = fork();
        
        if (pid == -1)
        {
            perror("Error forking");
            exit(EXIT_FAILURE);
        }

        if (pid == 0)
        {
            if (execve("/bin/ls", cmd, NULL) == -1)
            {
                perror("Error execing");
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            int status;

            wait(&status);
        }
    }

    if(pid != 0) 
    {
        exit(EXIT_SUCCESS);
    }
}