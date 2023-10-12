#include "main.h"

int main(void)
{
    char *buffer = NULL;
    size_t n = 0;
    ssize_t rv;

    rv = getline(&buffer, &n, stdin);
    printf(" [%lu] ", rv);

    if (rv == -1)
    {
        if (feof(stdin))
        {
            if (buffer[0] == '\0')
                printf("Second");
            else
                printf("first");
        }
        else
            printf("error");
    }
    else
    {
        if (feof(stdin)) {
            printf("-EOF");
        }
        printf("%s", buffer);
    }

    exit(EXIT_SUCCESS);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     char *line = NULL;
//     size_t len = 0;
//     ssize_t read;

//     while ((read = getline(&line, &len, stdin)) != -1) {
//         // Process the input line
//         if (read > 0) {
//             printf("You entered: %s", line);
//         }
//     }

//     if (read == -1) {
//         if (feof(stdin)) {
//             // EOF was reached, and that's normal, so no error.
//             printf("End of File (EOF) reached.\n");
//         } else {
//             // An error occurred while reading input.
//             perror("Error reading input");
//         }
//     }

//     free(line);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>
// #include <sys/types.h>
// #include <sys/wait.h>

// #define MAX_INPUT_SIZE 1024

// int main() {
//     char *input = NULL;
//     size_t len = 0;
//     ssize_t read;

//     while (1) {
//         printf("SimpleShell> ");
        
//         // Read a line of input using getline
//         read = getline(&input, &len, stdin);

//         if (read == -1) {
//             if (feof(stdin)) {
//                 // EOF was reached (e.g., Ctrl+D), exit the shell
//                 printf("Exiting the shell...\n");
//                 break;
//             } else {
//                 perror("getline");
//                 exit(1);
//             }
//         }

//         // Remove the newline character
//         input[strcspn(input, "\n")] = '\0';

//         // Exit if the user enters "exit"
//         if (strcmp(input, "exit") == 0) {
//             printf("Exiting the shell...\n");
//             break;
//         }

//         // Fork a new process
//         pid_t pid = fork();

//         if (pid == -1) {
//             perror("fork");
//             exit(1);
//         } else if (pid == 0) { // Child process
//             // Parse the input into command and arguments
//             char *args[256];
//             size_t argCount = 0;
//             char *token = strtok(input, " ");
//             while (token != NULL) {
//                 args[argCount++] = token;
//                 token = strtok(NULL, " ");
//             }
//             args[argCount] = NULL;

//             // Execute the command in the child process
//             if (execve(args[0], args, NULL) == -1) {
//                 perror("execve");
//                 exit(1);
//             }
//         } else { // Parent process
//             // Wait for the child process to complete
//             int status;
//             waitpid(pid, &status, 0);
//         }
//     }

//     free(input);
//     return 0;
// }
