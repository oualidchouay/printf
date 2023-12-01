#include "main.h"

/**
 * print_number - Print an integer number.
 * @n: The integer to print.
 * Return: The number of characters printed.
 */
int print_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n / 10)
		count += print_number(n / 10);

	_putchar((n % 10) + '0');
	return (count + 1);
}

/**
 * print_int - Print an integer.
 * @args: The va_list that contains the integer to print.
 * Return: The number of characters printed.
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		count++;
		if (n == INT_MIN)
		{
			_putchar('2');
			n %= 1000000000;
			count++;
		}
		n = -n;
	}

	count += print_number(n);
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
	int count = 0;

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
		count++;
	}
	return (count);
}
