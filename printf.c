#include "main.h"

/**
 * _printf - Mimics the printf function
 * @format: Format specifier string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%%", print_percent}, {"%c", printf_ch}, {"%s", printf_string},
		{"%S", print_excl_string}, {"%d", print_dec}, {"%i", print_int},
		{"%u", print_unsigned_int}, {"%o", print_oct}, {"%x", print_hex},
		{"%X", print_HEX}, {"%p", print_pointer}, {"%b", print_bin},
		{"%r", print_rev}, {"%R", print_r13},
	};
	va_list args;
	int i = 0, len = 0;
	int j = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (0);
	while (format[i] && (++len))
	{
		if (format[i++] == '%')
		{
			while (j < 14 && format[i] && format[i] != *(m[j].a))
				j++;
			if (j != 14)
			{
				len += m[j].f(args);
			}
			else if (format[i])
			{
				_putchar('%');
				_putchar(format[i]);
			}
		}
		else
			_putchar(format[i - 1]);
	}
	va_end(args);
	return (len);
}
