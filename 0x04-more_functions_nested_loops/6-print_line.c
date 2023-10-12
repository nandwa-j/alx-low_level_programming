#include "main.h"
/**
 * print_line - Prints a straight line
 * @n: number of times the character _ is printed
 *
 */
void print_line(int n)
{
int times = n;
for (times = n; times > 0; times--)
{
if (times <= 0)
{
_putchar('\n');
}
_putchar('_');
}
_putchar('\n');
}
