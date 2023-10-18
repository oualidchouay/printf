#include "main.h"

/**
 * print_unsigned - prints unsigned integer
 * @args: argument to print
 * Return: number of characters printed
*/
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char buffer[10];
	int i = 0;

	while (n > 0)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (i + 1);
}

