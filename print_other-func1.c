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
		_putchar('0');
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

/**
 * print_oct - converts to octal
 * @args: argument
 * Return: number of characters printed
*/

int print_oct(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char arr[12];
	int i = 0;
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		arr[i++] = (num % 8) + '0';
		num = num /  8;
	}

	while (i > 0)
	{
		_putchar(arr[--i]);
		count++;
	}

	return (count);
}

#include "main.h"

/**
 * print_pointer - Prints a pointer to the console.
 * @args: The argument list containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list args)
{
	int count;
	void *point = va_arg(args, void *);

	if (point == NULL)
	{
		return (print_null_ptr());
	}
	_putchar('0');
	_putchar('x');
	count = 2;
	count += print_hex_ptr(point);

	return (count);
}

