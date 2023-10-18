#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - matches the conversion specifiers for printf.
 * @a: character pointer representing the
 * specifier (l, h) for (d, i, u, o, x, X).
 * @f: function pointer for the conversion specifier.
 */
typedef struct format
{
	char *a;
	int (*f)();
} match;

int _putchar(char c);
int _printf(const char *format, ...);
int print_%(void);

/* Character conversion specifiers */
int printf_ch(va_list arg_list);

/* String conversion specifiers */
int printf_string(va_list arg_list);
int print_excl_string(char *string);

/* Num conversion specifiers */
int print_int(va_list arg_list);
int print_dec(va_list arg_list);
int print_bin(va_list arg_list);
int print_unsigned(va_list args_list);
int print_oct(va_list arg_list);
int print_hex(va_list arg_list);
int print_HEX(va_list arg_list);
int print_hex_extra(unsigned long int num);
int print_HEX_extra(unsigned int num);

/* Miscellaneous conversion specifiers */
int print_pointer(va_list arg_list);
int print_rev(va_list arg_list);
int print_rot13(va_list arg_list);

#endif
