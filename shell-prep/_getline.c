#include "main.h"
#define BUFFER_SIZE 10

ssize_t _getline(char **restrict lineptr, size_t *restrict n, FILE *restrict stream)
{
    ssize_t line_count = 0;
    char next_char;

    if (lineptr == NULL || n == NULL)
        return (-1);

    if (*lineptr == NULL || *n == 0)
    {
        if (*n == 0)
            *n = BUFFER_SIZE;
        *lineptr = malloc(sizeof(**lineptr) * *n);
        if (!lineptr)
            return (-1);
    }

    
    while ((next_char = fgetc(stream)) != EOF)
    {
        if (line_count >= (*n - 1))
        {
            *n *= 2;

            char *tmp = (char *)realloc(*lineptr, *n);

            if (tmp == NULL)
                return (-1);

            *lineptr = tmp;
        }
        (*lineptr)[line_count] = (char)next_char;
        line_count++;

        if (next_char == '\n')
            break;
    }

    if (line_count == 0) {
        return -1; 
    }

    (*lineptr)[line_count] = '\0';
    return (line_count);
}

int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t read_chars;

    while ((read_chars = _getline(&line, &len, stdin)) != -1) {
        printf("Line (%zd chars): %s", read_chars, line);
    }

    free(line);
    return 0;
}