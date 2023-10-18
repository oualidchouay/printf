#include "main.h"

/**
 * print_bin - converts to binary
 * @arg_list: argument
 * Return: integer
 */

int print_bin(va_list arg_list)
{
	unsigned int n = va_arg(arg_list, unsigned int);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	
	unsigned int m;

	m = 1 << (sizeof(unsigned int) * CHAR_BIT - 1);
	
	int flag = 0;

	while (m > 0)
	{
		if ((n & m) != 0)
		flag = 1;

		if (flag)
		{
			_putchar((n & m) ? '1' : '0');
			count++;
		}

		m >>= 1;
	}

	return (count);
}
