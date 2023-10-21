#include "main.h"

/**
 * printf_string - Prints a string
 * @args: Argument
 * Return: Number of characters printed
 */
int printf_string(va_list args)
{
	char *str = va_arg(args, char *);
	int p = 0;
	int i = 0;

	if (str)
	{
		while (str[i])
		{
			_putchar(str[i]);
			p++;
			i++;
		}
	}
	return (p);
}

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
