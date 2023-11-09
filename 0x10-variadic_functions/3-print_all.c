#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguements passed to the function
 */
void print_all(const char * const format, ...)
{
va_list valist;
unsigned int i = 0;
char *str;
va_start(valist, format);
while (format && format[i])
{
if (i > 0)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(valist, int));
break;
case 'i':
printf("%d", va_arg(valist, int));
break;
case 'f':
printf("%f", va_arg(valist, double));
break;
case 's':
str = va_arg(valist, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
i++;
continue;
}
i++;
}
va_end(valist);
printf("\n");
}
