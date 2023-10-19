#include "main.h"

/**
 * print_HEX - converts to HEXADECIMAL
 * @args: argument to print
 * Return: num of characters printed
*/

int print_HEX(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char hex_digits_upper[] = "0123456789ABCDEF";
	char buff[10];
	int i = 0;
	int count = 0;

	if (num == 0)
	{
		putchar('0');
		return (1);
	}
	while (num > 0)
	{
		buff[i++] = hex_digits_upper[num % 16];
		num /= 16;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(buff[i]);
		count++;
	}
	return (count);
}
