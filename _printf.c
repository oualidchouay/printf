#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

int process_format_specifier(const char **format, va_list args);

int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            count += process_format_specifier(&format, args);
        }
        else
        {
            _putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);
    return count;
}

int process_format_specifier(const char **format, va_list args)
{
    int count = 0;

    switch (**format)
    {
        case 'c':
            count = printf_ch(va_arg(args, int));
            break;
        case 's':
            count = printf_string(va_arg(args, char *));
            break;
        case 'd':
        case 'i':
            count = print_dec(args);
            break;
        case 'u':
            count = print_unsigned_int(args);
            break;
        case 'o':
            count = print_oct(args);
            break;
        case 'x':
            count = print_hex(args);
            break;
        case 'X':
            count = print_HEX(args);
            break;
        case 'p':
            count = print_pointer(va_arg(args, void *));
            break;
        case 'r':
            _putchar('%');
            _putchar('r');
            count += 2;
            break;
        default:
            _putchar('%');
            _putchar(**format);
            count += 2;
    }

    return count;
}
