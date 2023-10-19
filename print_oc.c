#include "main.h"

/**
 * print_oc - converts to octal
 * @arg_list: argument
 * Return: number of characters printed
*/

int print_oc(va_list arg_list)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	char arr[10];
	int i = 0;

	while (num > 0)
	{
		arr[i++] = num % 8 + '0';
		num = num /  8;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(arr[i]);
	}

	return (i + 1);
}
