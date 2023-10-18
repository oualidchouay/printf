#include "main.h"

/**
 * print_excl_string - prints exclusive string
 * @string: the string to print
 * Return: number of characters printed
*/
int print_excl_string(char *string)
{
	int i, len = 0;

	if (string == NULL)
	{
		string = "(null)";
	}

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] < 32 || string[i] >= 127)
		{
			len += printf("\\x%02x", string[i]);
		}
		else
		{
			len += printf("%c", string[i]);
		}
	}

	return (len);
}
