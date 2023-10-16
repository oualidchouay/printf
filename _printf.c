#include "main.h"

/**
 * _printf - a function that select the correct
 * function to print a format string
 * @format: string contains the desired characters to be printed
 * Return: number of characters printed(excluding the null byte)
 */

int _printf(const char *format, ...)
{
	convert_receiv a_list[] = {
		{"c", print_charact},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int_base10},
		{"i", print_int},
		{"b", print_bin},
		{"u", print_unsigned_int},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_String},
		{"p", print_point},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL},
	};
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0')
		return (-1);

	va_start(args, format);
	ch_printed = format_receiv(format, a_list, args);
	va_end(args);
	return (ch_printed);
