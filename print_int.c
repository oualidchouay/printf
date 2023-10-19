#include "main.h"

/**
 * print_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
*/
int print_int(va_list args)
{
	int n = va_arg(args, int);
	char buffer[10];
	int i = 0;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n > 0)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}

	while (i > 0)
	{
		_putchar(buffer[--i]);
		count++;
	}
	return (count);
}

/**
 * print_dec - prints decimal
 * @args_list: argument to print
 * Return: number of characters printed
*/
int print_dec(va_list args)
{
	return (print_int(args));
}
