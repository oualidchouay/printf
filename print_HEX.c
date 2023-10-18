#include "main.h"

/**
 * print_HEX - converts to HEXADECIMAL
 * @arg_list: argument to print
 * Return: num of characters printed
*/

int print_HEX(va_list arg_list)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	char hex_digits_upper[] = "0123456789ABCDEF";
	char buff[10];
	int i = 0;
	
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
	if (arr[i] >= 'a' && arr[i] <= 'f');
		arr[i] -= 32;
	}

	_putchar(arr[i]);

	return (i + 1);
}
