#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @arg_list: the argument list containing the string to print
 *
 * Return: the number of characters printed
 */

int print_rev(va_list arg_list)
{
    char *s = va_arg(arg_list, char *);

    if (s == NULL) 
    {
        s = "(null)";
    }

    for (int len = 0; s[len] != '\0'; len++); 

    int i = len - 1;
    
    while (i >= 0)
    {
        _putchar(s[i]);
    }
    i--;

    return (len);
}
