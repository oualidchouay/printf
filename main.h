#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct convert_specifiers - defines structure for symbols and functions
 *
 * @m: pointer of type char of the specifiers.
 * @f: a pointer to function for the conversion specifiers.
 */

struct convert_specifiers
{
	char *m;
	int (*f)(va_list);
};
typedef struct convert_specifiers conver_t;


int _putchar(char c);
int _printf(const char *format, ...);
int format_receiv(const char *format, conver_t a_list[], va_list args);
int print_percent(va_list);
int print_int(va_list);
int print_int_base10(va_list);
int print_charact(va_list);
int print_str(va_list);
