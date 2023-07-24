#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's %c try %% to printf %s a simple sentence.\n", 'B', "Hello");
    len2 = printf("Let's %c try %% to printf %s a simple sentence.\n", 'B', "Hello");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("Unknown:[%r]\n");
    len2 = printf("Unknown:[%r]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("% % % %s\n", "Hello");
    len2 = printf("% % % %s\n", "Hello");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("Let's %c     try %% to printf %s a simple sentence.\n", 'B', "Hello");
    len2 = printf("Let's %c     try %% to printf %s a simple sentence.\n", 'B', "Hello");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("S\"trin\\g:\'[%s]\n", "I am a string !");
    printf("S\"trin\\g:\'[%s]\n", "I am a string !");
    len = _printf("%s my name\n", NULL);
    len2 = printf("%s my name\n", NULL);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
