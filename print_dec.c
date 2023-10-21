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
		n *= -1;
		_putchar('-');
		count++;
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(buffer[i]);
		count++;
	}
	return (count);
}
/**
 * print_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
*/

int print_dec(va_list args)
{
	return (print_int(args));
}

/**
 * print_unsigned_int - prints unsigned integer
 * @args: argument to print
 * Return: number of characters printed
*/
int print_unsigned_int(va_list args)
{
	int i = 0;
	unsigned int n = va_arg(args, unsigned int);
	char buffer[10];

	while (n > 0)
	{
		buffer[i++] = '0' + (n % 10);
		n = n / 10;
	}

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i--; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}
	return (i + 1);
}
