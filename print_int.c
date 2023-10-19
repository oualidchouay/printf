#include "main.h"

/**
 * print_int - prints integer
 * @args_list: argument to print
 * Return: number of characters printed
*/
int print_int(va_list args_list)
{
	int n = va_arg(args_list, int);
	char buffer[10];
	int i = 0;

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

	for (i--; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (i + 1);
}

/**
 * print_dec - prints decimal
 * @args_list: argument to print
 * Return: number of characters printed
*/
int print_dec(va_list args_list)
{
	return (print_int(args_list));
}
