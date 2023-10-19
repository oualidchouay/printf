#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_percent(va_list args);

/* Character conversion specifiers */
int printf_ch(va_list args);

/* String conversion specifiers */
int printf_string(va_list args);
int print_excl_string(va_list args);

/* Num conversion specifiers */
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list args);
int print_unsigned_int(va_list args);
int print_oct(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);

/* Miscellaneous conversion specifiers */
int print_pointer(va_list args);
int print_rev(va_list args);
int print_r13(va_list args);

#endif
