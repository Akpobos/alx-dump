#ifndef MAIN_H
#define MAIN_H

/* C-Libraries */
#include <stdarg.h>
#include <unistd.h>

/* Structs */

/**
 * struct fmt_s - struct to print format
 * @c: specifier character
 * @prnt: function to print format
 */
struct fmt_s
{
	char c;
	int (*prnt)(va_list args);
};

/* Typedef */

/* fmt_t - typedef for struct fmt_s */
typedef struct fmt_s fmt_t;

/* Prototypes - Utils_1 */
int print_numbers(int num);
int _abs(int num);
void fmt_space(const char *str, int *i);
void check_specifier(const char c, int *count, va_list args);
int print_binary(unsigned int num);

/* Prototypes - Others */
int _putchar(char c);
int print_fmt(char c, va_list args);

/* Prototypes - print_func */
int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int print_bnry(va_list args);

/* Prototypes - Main */
int _printf(const char *format, ...);

#endif
