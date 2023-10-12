#include "main.h"

char *_strtok(char *str, char *delptr){
    static char *ptr = NULL;
    char *token = ptr;

    if (str != NULL)
    { 
        ptr = str;
        token = str;
    }
    else if (ptr == NULL)
        return (NULL);
    
    while (strchr(delptr, *ptr) == NULL && *ptr != '\0')
        ptr++;

    if (*ptr == '\0')
        ptr = NULL;
    else
    {
        *ptr = '\0';
        ptr++;
    }
    return (token);
}

int main(void)
{
    char str[] = "This is a test. Let's get going.";
    char *token = _strtok(str, " '");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = _strtok(NULL, " '"); 
    }
    exit(EXIT_SUCCESS);
}