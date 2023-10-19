#include "main.h"

/**
 * print_unsigned_int - prints unsigned integer
 * @args_list: argument to print
 * Return: number of characters printed
*/
int print_unsigned_int(va_list args_list)
{
	int i = 0;
	unsigned int n = va_arg(args_list, unsigned int);

	while (n > 0)
	{
		_putchar('0' + (n % 10));
		n = n / 10;
	}
	i++;
	return (i);
}
