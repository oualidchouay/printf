#include "main.h"

/**
 * print_ch - prints a character
 * @arg_list: argument
 * Return: number of characters printed (1 in this case)
 */
int print_ch(va_list arg_list)
{
	char ch = va_arg(arg_list, int);

	_putchar(ch);
	return (1);
}
