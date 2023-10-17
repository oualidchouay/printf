#include "main.h"

/**
 * _printf - a function that select the correct
 * function to print a format string
 * @format: string contains the desired characters to be printed
 * Return: number of characters printed(excluding the null byte)
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{
				int ch = va_arg(args, int);

				count += putchar(ch);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

			while (*str)
			{
				count += putchar(*str);
				str++;
			}
			}
			else if (*format == '%')
				count += putchar('%');
		}
		else
		{
			count += putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
