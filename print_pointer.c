#include "main.h"

/**
 * print_pointer - Prints a pointer to the console.
 * @args: The argument list containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list args)
{
	void *point = va_arg(args, void *);

	if (point == NULL)
	{
		return (printf("(nil)"));
	}

	return (printf("%p", point));
}
