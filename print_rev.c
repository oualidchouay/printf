#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @args: the argument list containing the string to print
 *
 * Return: the number of characters printed
 */

int print_rev(va_list args)
{
	int i;
	int len = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	return (len);
}
