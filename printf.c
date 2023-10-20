#include "main.h"
#include <stdarg.h>

    print_specifier_t print_specifiers[] = {
        {'c', printf_ch},
        {'s', printf_string},
        {'%', print_percent},
        {'i', print_int},
        {'d', print_dec},
        {'b', print_bin},
        {'u', print_unsigned_int},
        {'o', print_oct},
        {'x', print_hex},
        {'X', print_HEX},
        {'p', print_pointer},
        {'R', print_r13},
        {'r', print_rev},
        {0, NULL}
    };

/**
 * _printf - Mimics the printf function
 * @format: Format specifier string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;
    int j = 0;
    const char *specifiers = "cs%idbuoxXpRr";

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            _putchar(*format++);
            printed_chars++;
            continue;
        }

        format++;

        if (*format == '%')
        {
            _putchar('%');
            printed_chars++;
            format++;
            continue;
        }

        while (specifiers[j] != '\0')
        {
            if (*format == specifiers[j])
            {
                printed_chars += print_specifiers[j].printer(args);
                format++;
                break;
            }
            j++;
        }
    }

    va_end(args);
    return printed_chars;
}
