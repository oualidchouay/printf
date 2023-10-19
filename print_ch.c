#include "main.h"

/**
 * printf_ch - prints a character
 * @args: argument
 * Return: number of characters printed (1 in this case)
 */
int printf_ch(va_list args)
{
	char ch = va_arg(args, int);

	_putchar(ch);
	return (1);
}
