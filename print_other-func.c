#include "main.h"
#include <stdarg.h>
#include <limits.h>

/**
 * print_percent - prints percentage sign
 * @args: The va_list argument (not used in this function)
 *
 * Return: Integer (number of characters printed)
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
 * print_bin - converts to binary
 * @args: argument
 * Return: integer
 */

int print_bin(va_list args)
{
	int count = 0;
	unsigned int n = va_arg(args, unsigned int);
	char buffer[32];
	int index = 0;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n)
	{
		buffer[index++] = '0' + (n % 2);
		n /= 2;
	}
	while (index < 32)
	{
		buffer[index++] = '0';
	}
	for (i = 31; i >= 0; i--)
	{
		_putchar(buffer[i]);
		count++;
	}
	return (count);
}

/**
 * print_r13 - converts a string to ROT13
 * @args: the argument list containing the string to convert
 *
 * Return: counter
 */
int print_r13(va_list args)
{
	int i = 0;
	int count = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];

	if (c >= 'a' && c <= 'z')
	{
		c = ((c - 'a' + 13) % 26 + 'a');
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c = ((c - 'A' + 13) % 26 + 'A');
	}

	_putchar(c);
	count++;
	}

	return (count);
}
/**
 * print_rev - prints a string in reverse order
 * @args: the argument list containing the string to print
 *
 * Return: the number of characters printed
 */

int print_rev(va_list args)
{
	int i;
	int len = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	return (len);
}
