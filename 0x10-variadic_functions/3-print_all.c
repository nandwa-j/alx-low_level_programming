#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything (char, integer, float, string)
 * @format: list of types of arguments passed to the function
 *          c: char
 *          i: integer
 *          f: float
 *          s: string
 */
void print_all(const char * const format, ...)
{
    va_list valist;
    unsigned int i = 0;
    char *str;
    char *separator = "";

    va_start(valist, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%s%c", separator, va_arg(valist, int));
                break;
            case 'i':
                printf("%s%d", separator, va_arg(valist, int));
                break;
            case 'f':
                printf("%s%f", separator, va_arg(valist, double));
                break;
            case 's':
                str = va_arg(valist, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s%s", separator, str);
                break;
            default:
                i++;
                continue;
        }
        separator = ", ";
        i++;
    }

    printf("\n");
    va_end(valist);
}
