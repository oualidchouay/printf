#include "main.h"

/**
 * print_charact - Prints a character.
 * @list: List of arguments.
 * Return: number of charact printed.
 */

int print_charact(va_list list)
{
	int i = va_arg(list, ar);

	_putchar(i);
	return (1);
}
