#include "main.h"

/**
 * print_excl_string - prints exclusive string
 * @string: the string to print
 * Return: len
*/

int print_excl_string(char *string)
{
	int i, len = 0;

	if (string == NULL)
	{
		string = "(null)";
	}
	i = 0;

	while (string[i] != '\0')
	{
		if (string[i] < 32 || string[i] >= 27)
		{
			len += printf("\\x%02x", (unsigned char)string[i]);
		}
		else
		{
			len = len + putchar(string[i]);
		}
		i++;
	}
	return (len);
}
