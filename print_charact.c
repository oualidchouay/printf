#include "main.h"

/**
 * _prints_charact - Prints a character.
 * @list: List of arguments.
 * Return: number of charact printed.
 */
int print_charact(va_list ar)
{
	int i = va_arg(list, ar);
	_putchar(i);
	return (1);
}
