#include "main.h"

/**
 * printf_unsigned - prints unsigned integer
 * @args_list: argument to print
 * Return: number of characters printed
*/
int print_unsigned(va_list args_list)
{
	unsigned int n = va_arg(args_list, unsigned int);

	for (int i = 0; n > 0; i++)
	{
		_putchar('0' + (n % 10));
		n = n / 10;
	}

	return (i);
}
