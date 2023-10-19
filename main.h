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
int print_percent(va_list arg_list);

/* Character conversion specifiers */
int print_ch(va_list arg_list);

/* String conversion specifiers */
int print_string(va_list arg_list);
int print_excl_string(char *string);

/* Num conversion specifiers */
int print_int(va_list arg_list);
int print_dec(va_list arg_list);
int print_bin(va_list arg_list);
int print_unsigned_int(va_list args_list);
int print_oc(va_list arg_list);
int print_hex(va_list arg_list);
int print_HEX(va_list arg_list);

/* Miscellaneous conversion specifiers */
int print_pointer(va_list arg_list);
int print_rev(va_list arg_list);
int print_r13(va_list arg_list);

#endif
