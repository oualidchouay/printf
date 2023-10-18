#include "main.h"

/**
 * print_r13 - converts a string to ROT13
 * @arg_list: the argument list containing the string to convert
 *
 * Return: counter
 */
int print_r13(va_list arg_list)
{
	char *s = va_arg(arg_list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	int counter = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
	char c = s[i];

	if (c >= 'a' && c <= 'z')
	{
		c = ((c - 'a' + 13) % 26 + 'a');
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c = ((c - 'A' + 13) % 26 + 'A');
	}

	_putchar(c);
	counter++;
	}

	return (counter);
}
