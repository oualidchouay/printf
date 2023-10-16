#include "main.h"

/**
 * print_str - Print a string.
 * @list: list of arguments.
 * Return: number of character printed.
 */

int print_str(va_list list)
{
	char *s = va_arg(list, char *);

	if(str == NULL)
		return (-1);
	int i = 0;
	do {
		_putchar(str[i]);
		i++;
	}while(str[i] != '\0');

	return(i);
}
		

