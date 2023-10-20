#include "main.h"

/**
 * printf_string - Prints a string
 * @args: Argument
 * Return: Number of characters printed
 */
int printf_string(va_list args)
{
	char *str = va_arg(args, char *);
	int p = 0;
	int i = 0;

	if (str)
	{
		while (str[i])
		{
			_putchar(str[i]);
			p++;
			i++;
		}
	}
	return (p);
}
