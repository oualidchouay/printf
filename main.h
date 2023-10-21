#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int print_hex_ptr(void *ptr);
int print_null_ptr(void);
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
