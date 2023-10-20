#include "main.h"

/**
 * _printf - Mimics the printf function
 * @format: Format specifier string
 * Return: Number of characters printed
 */

	specifier_t specifiers[] = {
				{'%', print_percent}, {'c', printf_ch}, {'s', printf_string},
		{'S', print_excl_string}, {'d', print_dec}, {'i', print_int},
		{'u', print_unsigned_int}, {'o', print_oct}, {'x', print_hex},
		{'X', print_HEX}, {'p', print_pointer}, {'b', print_bin},
		{'r', print_rev}, {'R', print_r13},
    {0, NULL}
};


int _printf(const char *format, ...) {
    va_list args;
    int i = 0, j, count = 0;

    va_start(args, format);

    while (format && format[i]) {
        if (format[i] == '%') {
            i++;
            j = 0;
            while (specifiers[j].c != 0) {
                if (specifiers[j].c == format[i]) {
                    count += specifiers[j].f(args);
                    break;
                }
                j++;
            }
        } else {
            write(1, &format[i], 1);
            count++;
        }
        i++;
    }

    va_end(args);
    return count;
}
