#include "main.h"
#include <stdarg.h>

/**
 * print_percent - prints percentage sign
 * @args: The va_list argument (not used in this function)
 *
 * Return: Integer (number of characters printed)
 */
int print_percent(va_list args)
{
    (void)args;
    _putchar('%');
    return (1);
}
