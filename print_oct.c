#include "main.h"

/**
 * print_oct - converts to octal
 * @args: argument
 * Return: number of characters printed
*/

int print_oct(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char arr[10];
	int i = 0;
	int count = 0;

	while (num > 0)
	{
		arr[i++] = num % 8 + '0';
		num = num /  8;
	}

	while (i > 0)
	{
		_putchar(arr[--i]);
		count++;
	}

	return (count);
}
