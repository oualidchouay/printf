#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @arg_list: the argument list containing the string to print
 *
 * Return: the number of characters printed
 */

int print_rev(va_list arg_list)
{
	int len = 0;
	int i = len - 1;
	char *s = va_arg(arg_list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[len] != '\0')
	{
		len++;
	}

	while (i >= 0)
	{
		_putchar(s[i]);
	}
	i--;

	return (len);
}
