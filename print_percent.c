#include "main.h"

/**
 * print_percent - prints percent.
 * @list: var_list is unused in this funct.
 * Return: Always 1.
 */

int print_percent(__attribute__((unused))va_list list)
{
	if (_putchar('%'))
	{
		return (1);
	}
	else if (_putchar('%') == -1)
	{
		return (-1);
	}
}
