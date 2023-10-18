#include "main.h"

/**
 * print_bin - converts to binary
 * @arg_list: argument
 * Return: integer
 */

int print_bin(va_list arg_list)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	unsigned int mask = 1 << (sizeof(unsigned int) * CHAR_BIT - 1);
	int flag = 0;

	while (mask > 0)
	{
		if ((num & mask) != 0)
		flag = 1;

		if (flag)
		{
			_putchar((num & mask) ? '1' : '0');
			count++;
		}

		mask >>= 1;
	}

	return (count);
}
