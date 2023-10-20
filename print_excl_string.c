#include "main.h"

/**
 * print_excl_string - prints exclusive string
 * @args: argument
 * Return: len
*/

int print_excl_string(va_list args)
{
	int i, len = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	i = 0;

	while (string[i] != '\0')
	{
		if (string[i] < 32 || string[i] >= 127)
		{
			len += _printf("\\x%02x", (unsigned char)string[i]);
		}
		else
		{
			_putchar(string[i]);
			len++;
		}
		i++;
	}
	return (len);
}
