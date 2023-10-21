#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int process_format_specifier(const char **format, va_list args);
int process_pointer(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
int print_percent(va_list args);
int printf_ch(va_list args);
int printf_string(va_list args);
int print_excl_string(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list args);
int print_unsigned_int(va_list args);
int print_oct(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_pointer(va_list args);
int print_rev(va_list args);
int print_r13(va_list args);

#endif
