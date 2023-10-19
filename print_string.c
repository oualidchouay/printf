#include "main.h"

/**
 * printf_string - Prints a string
 * @args: Argument
 * Return: Number of characters printed
 */
int printf_string(va_list args __attribute__((unused)))
{
	char *str;
	int len = 0;

	str = va_arg(args, char *);
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

