#ifndef HEADER_
#define HEADER_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


/**
 * struct fmts - Struct formats
 * @type: The type
 * @prnt: Function pointer for the type
 */
struct fmts
{
	char type;
	void (*prnt)(va_list args);
};

typedef struct fmts fmt_t;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list args);
void print_str(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_all(const char * const format, ...);

#endif
