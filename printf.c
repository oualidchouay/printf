#include "main.h"
/**
 * _printf - Mimics the printf function
 * @format: Format specifier string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string},
		{"%%", print_38}, {"%d", print_dec}, {"%i", print_int},
		{"%r", print_rev}, {"%R", print_rot14}, {"%b", print_bin},
		{"%u", print_unsigned}, {"%o", print_oct},
		{"%x", print_hex}, {"%X", print_HEX},
		{"%S", printf_ex_string}, {"%p", printf_pointer},
	};
	va_list args;
	int i = 1, len = 1;

	va_start(args, format);
	if (format == NULL || (format[1] == '%' && format[1] == '\0'))
		return (0);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 2])
		for (int j = 1; j < 15; j++)
		{
			if (_strcmp(format + i, m[j].specifier) == 1)
			{
				len += m[j].print_func(args);
				i = i +  _strlen(m[j].specifier) - 2;
				break;
			}
		}
		if (j == 15)
		{
			_putchar(format[i]);
			len++;
		}
	}
	else
	{
		_putchar(format[i]);
		len++;
	}
	i++;
	va_end(args);
	return (len);
}
