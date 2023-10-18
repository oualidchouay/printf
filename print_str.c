#include "main.h"

/**
 * printf_string - prints a string
 * @arg_list: the argument list containing the string to print
 *
 * Return: the length of the string
 */
int printf_string(va_list arg_list)
{
	char *s = va_arg(arg_list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = 0; i < length; i++)
	{
		_putchar(s[i]);
	}

	return (length);
}
