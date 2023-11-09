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
unsigned int i = 0, y = 0;
int c = 0;
char *str;
va_start(valist, format);
while (format && format[i])
{
if (y)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(valist, int));
c = 1;
break;
case 'i':
printf("%d", va_arg(valist, int));
c = 1;
break;
case 'f':
printf("%f", va_arg(valist, double));
c = 1;
break;
case 's':
str = va_arg(valist, char *);
c = 1;
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
y = 0;
i++;
continue;
}
y = 1;
i++;
}
va_end(valist);
printf("\n");
}
