#include "main.h"

/**
 * printf_int - prints integer
 * @args_list: argument to print
 * Return: number of characters printed
*/
int printf_int(va_list args_list)
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
 * printf_dec - prints decimal
 * @args_list: argument to print
 * Return: number of characters printed
*/
int printf_dec(va_list args_list)
{
	return (printf_int(args_list));
}
