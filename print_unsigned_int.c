#include "main.h"

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
