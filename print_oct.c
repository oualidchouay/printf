#include "main.h"

/**
 * print_oct - converts to octal
 * @arg_list: argument to print
 * Return: number of characters printed
*/

int print_oct(va_list arg_list)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	char buffer[10];
	int i = 0;

	while (num > 0)
	{
	buffer[i++] = num % 8 + '0';
	num /= 8;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (i + 1);
}
