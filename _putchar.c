#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - prints a string to standard output.
 * @str: pointer to the string to print
 * Return: number of characters printed
 */

int _puts(char *str)
{
	register short i;

	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
