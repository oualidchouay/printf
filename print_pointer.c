#include "main.h"

/**
 * print_pointer - Prints a pointer to the console.
 * @arg_list: The argument list containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list arg_list)
{
    void *point = va_arg(arg_list, void *);

    if (point == NULL) 
    {
        return printf("(nil)");
    }

    return printf("0x%lx", (unsigned long)point);
}
