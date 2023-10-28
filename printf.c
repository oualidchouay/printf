#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
 * is_valid_format_specifier - Check if a character
 * is a valid format specifier.
 * @c: The character to check.
 * Return: 1 if it's a valid specifier, 0 otherwise.
 */
int is_valid_format_specifier(char c)
{
	const char *valid_specifiers = "cdisuoxXpbrRS%";

	while (*valid_specifiers)
	{
		if (c == *valid_specifiers)
			return (1);
		valid_specifiers++;
	}
	return (0);
}

/**
 * _printf - Custom printf function.
 * @format: Format specifier string.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		_putchar('N');
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%' || *format == 'r')
			{
				_putchar(*format);
				count++;
			}
			else
			{
				count += handle_format_specifier(&format, args);
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}

/**
 * handle_format_specifier - Handle format specifiers.
 * @format: Pointer to the format specifier.
 * @args: Variable arguments list.
 * Return: The number of characters printed for the specifier.
 */
int handle_format_specifier(const char **format, va_list args)
{
	char spec = **format;

	if (**format == '\0')
		return (-1);
	if (is_valid_format_specifier(spec))
	{
		if (spec == 'c')
			return (printf_ch(args));
		if (spec == 's')
			return (printf_string(args));
		if (spec == 'd' || spec == 'i')
			return (print_int(args));
		if (spec == 'u')
			return (print_unsigned_int(args));
		if (spec == 'o')
			return (print_oct(args));
		if (spec == 'x')
			return (print_hex(args));
		if (spec == 'X')
			return (print_HEX(args));
		if (spec == 'p')
			return (print_pointer(args));
		if (spec == 'b')
			return (print_binary(args));
		if (spec == 'R')
			return (print_r13(args));
		if (spec == 'S')
			return (print_excl_string(args));
		if (spec == '%')
		{
			_putchar('%');
		}
		if (spec == 'r')
		{
			_putchar('%');
			_putchar('r');
			return (2);
		}
	}
	_putchar('%');
	(*format)++;
	return (1);
}
/**
 * print_hex_ptr - Prints the hexadecimal representation of a pointer
 * @ptr: The pointer to be printed in hexadecimal
 * Return: count
 */
int print_hex_ptr(void *ptr)
{
	char buffer[20];
	int count = 0;

	if (ptr == NULL)
	{
		buffer[0] = '0';
		buffer[1] = 'x';
		buffer[2] = '0';
		count += 3;
	}
	else
	{
		unsigned long n = (unsigned long)ptr;
		int i = 0;

		while (n > 0)
		{
			int remainder = n % 16;

			buffer[i++] = (remainder < 10) ? remainder + '0' : remainder + 'a' - 10;
			n /= 16;
		}

		count += i;

		while (i > 0)
		{
			_putchar(buffer[--i]);
		}
	}

	return (count);
}
/**
 * print_null_ptr - Prints an error message for a null pointer
 * @void: nothing
 *  Return: i
 */
int print_null_ptr(void)
{
	char *null_str = "(nil)";
	int i = 0;

	while (null_str[i])
	{
		_putchar(null_str[i]);
		i++;
	}

	return (i);
}
