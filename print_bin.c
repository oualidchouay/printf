#include "main.h"
#include <limits.h>
/**
 * print_bin - converts to binary
 * @args: argument
 * Return: integer
 */

int print_bin(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	int flag = 0;
	unsigned int m;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	m = 1 << (sizeof(unsigned int) * CHAR_BIT - 1);

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
