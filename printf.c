#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
 * _printf - Function to print a formatted string to the standard output
 * @format: Format specifier string
 * Return: count
 */
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
			if (*format == 'c')
			{
				int ch = va_arg(args, int);

				_putchar(ch);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				while (*str)
				{
					_putchar(*str);
					str++;
					count++;
				}
			}
			else if (*format == 'd' || *format == 'i')
			{
				count += print_dec(args);
			}
			else if (*format == 'u')
			{
				count += print_unsigned_int(args);
			}
			else if (*format == 'o')
			{
				count += print_oct(args);
			}
			else if (*format == 'x')
			{
				count += print_hex(args);
			}
			else if (*format == 'X')
			{
				count += print_HEX(args);
			}
			else if (*format == 'p')
			{
				void *ptr = va_arg(args, void *);

				if (ptr)
				{
					_putchar('0');
					_putchar('x');
					count += 2;
					count += print_hex_ptr(ptr);
				}
				else
				{
					count += print_null_ptr();
				}
			}
			else if (*format == 'R')
			{
				count += print_rev(args);
			}
			else if (*format == 'S')
			{
				count += print_excl_string(args);
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 'r')
			{
				_putchar('%');
				_putchar('r');
				count += 2;
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
