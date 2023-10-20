#include "main.h"

/**
 * print_hex - converts to hexadecimal
 * @args: argument to print
 * Return: number of characters printed
*/

int print_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char hex_digits_lower[] = "0123456789abcdef";
	char buff[10];
	int i = 0;
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		buff[i++] = hex_digits_lower[num % 16];
		num /= 16;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(buff[i]);
		count++;
	}

	return (count);
}
