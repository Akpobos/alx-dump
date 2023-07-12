#ifndef MAIN_H
#define MAIN_H

/* Libraries - START */
#include <stdlib.h>
/* Libraries - END */

/* Prototypes - START */
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
unsigned int _strlen(char *str);
void _strcat(char *dest, char *src, unsigned int start);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
/* Prototypes - END */

#endif /* MAIN_H */
