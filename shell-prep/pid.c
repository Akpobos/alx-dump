#include "main.h"

int main(void)
{
    pid_t my_pid;
    pid_t my_parent_pid;

    my_pid = getpid();
    my_parent_pid = getppid();

    printf("My pid - %u\nMy parent_pid - %u\n", my_pid, my_parent_pid);

    exit(EXIT_SUCCESS);
}