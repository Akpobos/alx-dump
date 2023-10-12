#include "main.h"

int main(void)
{
    char *ptr = NULL;
    size_t n;
    ssize_t rv;

    printf("$ ");
    while ((rv = getline(&ptr, &n , stdin)) != -1)
    {
        printf("%s", ptr);
        printf("$ ");
    }

    if(rv != EOF)
    { 
        perror("Error");
        free(ptr);
        exit(EXIT_FAILURE);
    }    
    free(ptr);
    exit(EXIT_SUCCESS);
}