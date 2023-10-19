#include "main.h"

/**
 * print_string - Prints a string
 * @arg_list: Argument list
 * Return: Number of characters printed
 */
int print_string(va_list arg_list)
{
	char *str;
	int len = 0;

	str = va_arg(arg_list, char *);
	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		len++;
	}

	return (len);
}

