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
	int j = 0;
	char null_str[] = "(null)";

	if (str)
	{
		while (str[i])
		{
			_putchar(str[i]);
			p++;
			i++;
		}
	}
	else
	{
		while (null_str[j])
		{
			_putchar(null_str[j]);
			p++;
			j++;
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
	int i, count = 0;
	char *string = va_arg(args, char *);
	char buffer[5];

	if (string == NULL)
	{
		string = "(null)";
	}
	i = 0;

	while (string[i] != '\0')
	{
		if (string[i] < 32 || string[i] >= 127)
		{
			sprintf(buffer, "\\x%02X", (unsigned char)string[i]);
			_printf("%s", buffer);
			count += 4;
		}
		else
		{
			_putchar(string[i]);
			count++;
		}
		i++;
	}
	return (count);
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
